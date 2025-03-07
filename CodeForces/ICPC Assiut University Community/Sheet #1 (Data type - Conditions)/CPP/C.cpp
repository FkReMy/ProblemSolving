/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                C. Simple Calculator                   *****\*/
/*\*****************************************************************\*/

//    Problem: Given two numbers X and Y, perform three operations: summation, multiplication, and subtraction, and print the results in a specific format.
//    Assiut Group; Sheet 1
//    Problem Link: 
//                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

/*
Problem Idea:
We are given two integers X and Y. The task is to compute and print the following results:
1. Summation of X and Y.
2. Multiplication of X and Y.
3. Subtraction of X and Y (X - Y).
Each result should be printed in a specific format, with spaces placed exactly as shown in the examples.

Input:
- A single line containing two integers X and Y (1 ≤ X, Y ≤ 10^5).

Output:
- Print three lines, each containing the result of an operation:
  1. The first line shows "X + Y = summation result".
  2. The second line shows "X * Y = multiplication result".
  3. The third line shows "X - Y = subtraction result".

Examples:
1. Input:
   5 10
   Output:
   5 + 10 = 15
   5 * 10 = 50
   5 - 10 = -5
*/

#include <bits/stdc++.h>   // Includes all standard C++ libraries
using namespace std;       // Use the standard namespace to avoid prefixing standard functions with 'std::'

int main(){

    // Declare two variables 'x' and 'y' of type 'signed long long' to store the input values.
    // We use 'signed long long' to handle large values (up to 10^5) and allow for negative results during subtraction.
    signed long long x, y;

    // Read the values of x and y from the user input.
    cin >> x >> y;

    // Summation
    // The commented-out version shows an alternative approach where the sum is stored in an intermediate variable 'sum', but we directly print the result for simplicity.
    // unsigned long sum = x + y;
    // cout << "X + Y = " << sum;
    // The following line prints the result of summation in the required format "X + Y = summation result".
    cout << x << " + " << y << " = " << x + y << endl;

    // Multiplication
    // The commented-out version shows an alternative approach where the multiplication result is stored in 'mul', but we directly print the result for simplicity.
    // unsigned long long mul = x * y;
    // cout << "X * Y = " << mul;
    // The following line prints the result of multiplication in the required format "X * Y = multiplication result".
    cout << x << " * " << y << " = " << x * y << endl;

    // Subtraction
    // The commented-out version shows an alternative approach where the subtraction result is stored in 'sub', but we directly print the result for simplicity.
    // signed long sub = x - y;
    // cout << "X - Y = " << sub;
    // The following line prints the result of subtraction in the required format "X - Y = subtraction result".
    cout << x << " - " << y << " = " << x - y << endl;

    // Return 0 to indicate that the program executed successfully.
    return 0;
}
