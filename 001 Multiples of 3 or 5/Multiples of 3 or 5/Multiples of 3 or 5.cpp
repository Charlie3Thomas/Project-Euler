/*   
    https://projecteuler.net/problem=1
 
    Multiples of 3 or 5

    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

    Find the sum of all the multiples of 3 or 5 below 1000.

*/ 

#include <iostream>

int main()
{
    int checkUpTo = 1000;
    int totalSum = 0;

    for (int i = 0; i < checkUpTo; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            totalSum += i;

            std::cout << "i = " << i << ", totalSum = " << totalSum << " " << std::endl;
        }
    }

    std::cout << std::endl;

    std::cout << "The Sum of all the multiples of 3 or 5 below 1000 is " << totalSum << std::endl;

    return 0;
}