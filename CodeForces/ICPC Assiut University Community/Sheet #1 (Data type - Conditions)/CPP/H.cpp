/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                    H.  Two numbers                    *****\*/
/*\*****************************************************************\*/

//    Problem: Calculate the floor, ceiling, and round values of A / B.
//    Assiut Group; Sheet 1
//    Problem Link: 
//                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H

/*
Problem Idea:
We are given two numbers A and B, and we are tasked with calculating and printing:
1. The floor of A / B: The largest integer less than or equal to A / B.
2. The ceiling of A / B: The smallest integer greater than or equal to A / B.
3. The rounded value of A / B: The closest integer to A / B.

Input:
- The input consists of one line containing two integers A and B (1 ≤ A, B ≤ 1000).

Output:
- Output three lines in the following format:
  "floor A / B = <Floor result>"
  "ceil A / B = <Ceil result>"
  "round A / B = <Round result>"

Examples:
1. Input:
   10 4
   Output:
   floor 10 / 4 = 2
   ceil 10 / 4 = 3
   round 10 / 4 = 3

2. Input:
   10 6
   Output:
   floor 10 / 6 = 1
   ceil 10 / 6 = 2
   round 10 / 6 = 2
*/

#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;       // Avoids the need to prefix standard library objects like 'cout' with 'std::'.

int main() {

    // Declare two variables A and B of type 'double' to store the input values.
    // We use 'double' instead of 'int' because the result of A / B might contain decimal values.
    double A, B;

    // Read the values of A and B from the user.
    // The input will be two space-separated numbers.
    cin >> A >> B;

    // Calculate the division of A by B and store the result in the variable 'result'.
    // This will include any decimal part from the division.
    double result = A / B;

    // Use the 'floor' function to compute the greatest integer that is less than or equal to 'result'.
    // Example: if result = 2.7, then floor(result) will return 2.
    cout << "floor " << A << " / " << B << " = " << floor(result) << endl;

    // Use the 'ceil' function to compute the smallest integer that is greater than or equal to 'result'.
    // Example: if result = 2.1, then ceil(result) will return 3.
    cout << "ceil " << A << " / " << B << " = " << ceil(result) << endl;

    // Use the 'round' function to round 'result' to the nearest integer.
    // Example: if result = 2.5, then round(result) will return 3.
    cout << "round " << A << " / " << B << " = " << round(result) << endl;

    // Return 0 to indicate that the program has successfully completed execution.
    return 0;
}
