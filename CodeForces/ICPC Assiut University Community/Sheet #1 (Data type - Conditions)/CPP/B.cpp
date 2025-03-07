/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                B. Basic Data Types                    *****\*/
/*\*****************************************************************\*/

//    Problem: You are required to read five values of different basic data types: int, long long, char, float, and double.
//             Then, print each value on a new line in the same order it was received as input.
//    Assiut Group; Sheet 1
//    Problem Link: 
//                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B

/*
Problem Idea:
We are given a single line of input containing space-separated values of different data types: 
int, long long, char, float, and double. 
The task is to read these values and then print each one on a new line in the same order as the input.

Input:
- A single line containing five space-separated values: int, long long, char, float, and double respectively.

Output:
- Print each value on a new line, maintaining the order in which they were input.

Examples:
1. Input:
   3 12345678912345 a 334.23 14049.30493
   Output:
   3
   12345678912345
   a
   334.23
   14049.3

2. Input:
   10 98765432101234 x 123.45 54321.6789
   Output:
   10
   98765432101234
   x
   123.45
   54321.7
*/

#include <bits/stdc++.h>   // Includes all standard C++ libraries required for input/output operations
using namespace std;       // Using the standard namespace to avoid prefixing standard functions with 'std::'

int main(){

    // Declare variables to store the input values:
    // 'i' for the int type, 'l' for the long long type, 'c' for the char type, 'f' for the float type, and 'd' for the double type.
    int i;               // 32-bit integer
    long long l;          // 64-bit integer
    char c;               // 8-bit character
    float f;              // 32-bit floating point number
    double d;             // 64-bit floating point number

    // Read the values for all variables from the input. 
    // Input is expected to be in a single line, space-separated.
    cin >> i >> l >> c >> f >> d;

    // Output each variable on a new line using 'cout'.
    // '\n' is used to move to the next line after printing each value.
    cout << i << "\n" << l << "\n" << c << "\n" << f << "\n" << d << "\n"; 

    /*
    Alternative approach (commented out):
    - Using 'endl' instead of '\n' to print each value on a new line.
    - 'endl' also flushes the output buffer, but '\n' is typically faster in competitive programming.
    */
    /*
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    cout << f << endl;
    cout << d << endl;
    */

    // Return 0 to indicate successful execution of the program.
    return 0;
}
