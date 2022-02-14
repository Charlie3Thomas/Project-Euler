/*
    https://projecteuler.net/problem=3

    The prime factors of 13195 are 5, 7, 13 and 29.

    What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <vector>

unsigned long long theNumber = 600851475143; // this is a really really big number
int lastLargestPrime = 2;
bool isPrime;

//std::vector<int> factors;
std::vector<int> primeFactors;

int main()
{   
    std::cout << theNumber << std::endl;

    for (int potentialLargestPrime = lastLargestPrime; potentialLargestPrime < theNumber; potentialLargestPrime++)
    {
        isPrime = true;

        // if any number between 2 and the candidate number (-1) is modulo 0, it cannot be prime
        for (int i = 2; i < potentialLargestPrime; i++)
        {
            if (potentialLargestPrime % i == 0) { isPrime = false; }
        }

        // if the current potentialLargestPrime is prime, then check if it is a factor of theNumber
        if (isPrime && theNumber % potentialLargestPrime == 0)
        {
            lastLargestPrime = potentialLargestPrime;
            primeFactors.push_back(lastLargestPrime);
            //std::cout << lastLargestPrime << std::endl;
        }  


        // at the end of each loop, check if the prime factors multiply together to make theNumber
        unsigned long long thereYet = 0;

        for (int i = 0; i < primeFactors.size(); i++)
        {
            if (i == 0) 
            { 
                thereYet = primeFactors[i]; 
            }
            else
            {
                thereYet = thereYet * primeFactors[i];
            }
        }

        if (thereYet == theNumber)
        {
            std::cout << "The largest prime factor has been found, and it is " << lastLargestPrime;
            break;
        }

    }

    return 0;
}
