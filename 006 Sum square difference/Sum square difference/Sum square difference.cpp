/*

    The squares of the first ten natural numbers is, 385

    The square of the sum of the first ten natural numbers is, 3025

    Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 2640

    Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum

*/

#include <iostream>

int sumOfSquares(int x);
int squareOfSum(int x);




int main()
{
    int sOSq = sumOfSquares(100);
    int sqOS = squareOfSum(100);
    int sumSquareDif = sqOS - sOSq;

    std::cout
        << "Sum of squares is "
        << sOSq
        << std::endl
        << "Square of sum is "
        << sqOS
        << std::endl
        << " Sum square difference is "
        << sumSquareDif
        << std::endl;
}

int sumOfSquares(int x)
{
    int sOSq = 0;

    for (int i = 1; i <= x; i++)
    {
        sOSq += i * i;
    }

    return sOSq;
}

int squareOfSum(int x)
{
    int sqOS = 0;

    for (int i = 1; i <= x; i++)
    {
        sqOS += i;
    }

    sqOS = sqOS * sqOS;

    return sqOS;
}
