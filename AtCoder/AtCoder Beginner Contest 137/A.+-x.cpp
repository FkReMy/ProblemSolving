/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                     abc137 A. +-x                     *****\*/
/*\*****************************************************************\*/

//    AtCoder Beginner Contest 137
//    Problem Link:
//                    https://atcoder.jp/contests/abc137/tasks/abc137_a

/*
Problem Idea:
Given two integers A and B, we need to find and print the largest value among
A + B, A - B, and A * B.

Input:
- The input consists of two integers A and B, each between -100 and 100 inclusive.

Output:
- Print the largest value among A + B, A - B, and A * B.

Example:
For A = 1 and B = 2:
The possible values are:
1 + 2 = 3
1 - 2 = -1
1 * 2 = 2
The output should be:
3
*/



#include <bits/stdc++.h>
using namespace std;

int main()
{
    signed int A, B; // Declare two signed integers A and B

    cin >> A >> B; // Read the values of A and B from standard input

    signed int sum = A + B; // Calculate the sum of A and B
    signed int sub = A - B; // Calculate the difference of A and B
    signed int mul = A * B; // Calculate the product of A and B

    signed int greatest = mul; // Initialize the greatest value with the product of A and B

    // Check if the sum is greater than the current greatest value
    if (greatest < sum)
    {
        greatest = sum; // Update the greatest value to the sum if it is greater
    }

    // Check if the difference is greater than the current greatest value
    if (greatest < sub)
    {
        greatest = sub; // Update the greatest value to the difference if it is greater
    }

    cout << greatest << endl; // Print the greatest value

    return 0; 
}
