/*
    https://projecteuler.net/problem=9
    A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, a2 + b2 = c2
                
    For example, 32 + 42 = 9 + 16 = 25 = 52.

    There exists exactly one Pythagorean triplet for which a + b + c = 1000.
    Find the product abc.

*/
#include <iostream>

bool isTriplet(int a, int b, int c);
const int targetSum = 1000;
bool found = false;

int main()
{
    for (int a = 1; a < targetSum; a++)
    {
        for (int b = 1; b < targetSum; b++)
        {
            // since a^2 + b^2 = c^2, 
            // a 3rd nested for loop is not necessary as c can be calculated from the expected sum
            int c = targetSum - a - b;
            if (isTriplet(a, b, c))
            {
                found = true;

                std::cout
                    << "The Triplet is: "
                    << a
                    << ", "
                    <<b
                    << ", "
                    <<c
                    << std::endl;

                std::cout
                    << "The Product abc is: "
                    << a * b * c
                    << std::endl;
                
            }
        }

        if (found) { break; }
    }
}

bool isTriplet(int a, int b, int c)
{
    return (a * a + b * b == c * c);
}
