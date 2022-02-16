/*
    https://projecteuler.net/problem=5

    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
#include <vector>

/*
    std::vector<int>checkList{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    everything is divisible by 1
    everything divisible by 20 is also divisible by 2, 4, and 5 
    everything divisible by 16 is also divisible by 8
    everything divisible by 14 is also divisible by 7
    everything divisible by 18 is also divisible by 9 and 6
    everything divisible by 9 is also divisible by 3
    as every viable candidate number must be divisible by 20, can step the increment checks by 20
*/ 

bool divisible1to20(int x);

std::vector<int>checkList{ 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

int main()
{
    for (int i = 1; i < 999999999; i++)
    {
        if (divisible1to20(i))
        {
            std::cout
                << i
                << std::endl;

            break;
        }
    }
}

bool divisible1to20(int x)
{
    for (int i = 0; i < checkList.size(); i++)
    {
        if (x % checkList[i] != 0) { return false; }
    }

    return true;
}