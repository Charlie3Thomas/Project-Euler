/*
    https://projecteuler.net/problem=4

    A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

    Find the largest palindrome made from the product of two 3 - digit numbers.
*/

#include <iostream>
#include <string>
#include <vector>

bool isPalindrome(int x);
std::vector<int> palindromeList;
int largestPalindrome = 0;

int main()
{
    //std::cout << isPalindrome(9009) << std::endl;

    for (int x = 0; x < 999; x++)
    {
        for (int y = 0; y < 999; y++)
        {
            if (isPalindrome(x * y))
            {
                palindromeList.push_back(x * y);
            }
        }
    }

    for (int i = 0; i < palindromeList.size(); i++)
    {
        if (palindromeList[i] > largestPalindrome)
        {
            largestPalindrome = palindromeList[i];
        }
    }

    std::cout
        << "The largest palindrome product of two three digit numbers is "
        << largestPalindrome
        << std::endl;
}

// returns true if input int is a palindrome
bool isPalindrome(int x)
{
    std::string isPal = std::to_string(x);
    std::string isPalRev = isPal;
    std::reverse(isPalRev.begin(), isPalRev.end());

    //// Print
    //std::cout
    //    << "Reversed, "
    //    << isPal
    //    << " is "
    //    << isPalRev
    //    << std::endl;

    if (isPal == isPalRev) { return true; }        
    return false;
}