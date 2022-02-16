/*
    https://projecteuler.net/problem=7
    
    By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

    What is the 10 001st prime number?
*/

#include <iostream>

bool isPrime(int x);
int primeCounter = 0;
int thPrime = 0;

int main()
{
    /*std::cout
        << isPrime(104743);*/

    for (int i = 0; i < 999999999; i++)
    {
        if (isPrime(i))
        {
            primeCounter++;
        }
        if (primeCounter == 10001 - 1)
        {
            thPrime = i;
            break;
        }
    }

    std::cout
        << thPrime;
}

bool isPrime(int x)
{
    bool prime = false;

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            prime = false;
            break;
        }
        else
        {
            prime = true;
        }
    }

    return prime;
}
