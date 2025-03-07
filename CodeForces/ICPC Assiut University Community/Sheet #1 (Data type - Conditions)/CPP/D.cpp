/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                    D. Difference                      *****\*/
/*\*****************************************************************\*/

//    Problem: Given four numbers A, B, C, and D, compute the result of the equation:
//             X = (A * B) - (C * D), and print the result in the format: "Difference = X".
//    Assiut Group; Sheet 1
//    Problem Link: 
//                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

/*
Problem Idea:
We are given four integers A, B, C, and D. The task is to calculate the value of X based on the following formula:
   X = (A * B) - (C * D)
Then, we need to print the result with the format: "Difference = X".

Input:
- A single line containing four integers A, B, C, and D where each integer is in the range [-10^5, 10^5].

Output:
- Output the result in the format: "Difference = X", where X is the result of the equation.

Examples:
1. Input:
   1 2 3 4
   Output:
   Difference = -10

2. Input:
   2 3 4 5
   Output:
   Difference = -14

3. Input:
   4 5 2 3
   Output:
   Difference = 14
*/

#include <bits/stdc++.h>   // Includes all standard C++ libraries
using namespace std;       // Use the standard namespace to avoid using 'std::' before standard functions

int main(){

    // Declare four variables 'a', 'b', 'c', and 'd' of type 'signed long long' to store the input values.
    // 'signed long long' is used to handle large values, including negative numbers, up to the range of [-10^5, 10^5].
    signed long long a, b, c, d;

    // Take input from the user for the four integers A, B, C, and D, and store them in variables 'a', 'b', 'c', and 'd'.
    cin >> a >> b >> c >> d;

    // The commented-out block below calculates the difference using an intermediate variable 'x'.
    /*
    signed long long x = ((a*b) - (c*d)); // Calculate the result of (a * b) - (c * d) and store it in 'x'.

    cout << "Difference = "<< x << endl;  // Output the result in the required format: "Difference = X".
    */

    // The calculation and output are combined into a single statement for simplicity:
    // We calculate (a * b) - (c * d) and directly print the result in the required format.
    cout << "Difference = " << ((a * b) - (c * d)) << endl;

    // Return 0 to indicate that the program executed successfully.
    return 0;
}
