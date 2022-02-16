/*
    https://projecteuler.net/problem=10

    The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

    Find the sum of all the primes below two million.



*/

#include <iostream>
#include <vector>

void primeSieve(int n);
const int target = 2000000;
long long sum = 0;

int main()
{
    primeSieve(target);
}

/*
    https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes#Algorithm_and_variants
*/

void primeSieve(int limit)
{
    // start off by assuming that every number is prime
    std::vector<bool> primeList(limit, true);

    int rootLimit = sqrt(limit);

    // for each number between 2 and sqrt of the upper limit:
    for (int i = 2; i < rootLimit; i++)
    {
        // if the value at position i has not been set to false (not prime)
        if (primeList[i])
        {
            // set each position in primeList that is a multiple of found prime to false
            // as any multiple of a found prime cannot be prime
            for (int j = i * i; j < limit; j += i)
            {
                primeList[j] = false;
            }
        }
    }

    // loop through from two, up to but not including the limit value
    for (int i = 2; i < limit; i++)
    {
        // for every position at i in primeList that is true (prime),
        if (primeList[i])
        {
            // add i to the sum
            sum += i;
        }        
    }

    std::cout
        << std::endl
        << "Sum of primes under limit = "
        << sum
        << std::endl;
}