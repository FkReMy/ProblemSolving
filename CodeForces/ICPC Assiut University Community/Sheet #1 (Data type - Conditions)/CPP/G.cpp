/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****               G.  Summation from 1 to N               *****\*/
/*\*****************************************************************\*/

//    Problem: Given an integer N, calculate and print the sum of all integers from 1 to N.
//    Assiut Group; Sheet 1
//    Problem Link: 
//                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

/*
Problem Idea:
We are given a number N, and the task is to find the summation of all numbers between 1 and N (inclusive).
Instead of looping through each number, we can use a well-known mathematical formula to compute the sum of the first N natural numbers:

Summation Formula: 
   sum = N * (N + 1) / 2

This formula allows the summation to be computed in constant time O(1), which is essential given that N can be as large as 10^9.

Input:
- The input consists of a single integer N (1 ≤ N ≤ 10^9).

Output:
- Output a single integer which is the sum of all numbers from 1 to N.

Examples:
1. Input:
   3
   Output:
   6
   Explanation:
   The numbers between 1 and 3 are 1, 2, 3.
   So the sum is: 1 + 2 + 3 = 6.

2. Input:
   10
   Output:
   55
   Explanation:
   The numbers between 1 and 10 are 1, 2, 3, ..., 10.
   So the sum is: 1 + 2 + 3 + 4 + ... + 10 = 55.
*/

#include <bits/stdc++.h>  // Includes all standard C++ libraries, often used in competitive programming for convenience.
using namespace std;       // Allows us to avoid prefixing standard library functions with 'std::', e.g., we can write 'cin' instead of 'std::cin'.

int main() {

    // Declare variables:
    // 'N' is used to store the input number (upper bound of the summation).
    // 'sum' is initialized to 0 and will store the result of the summation.
    // 'long long' is used because the result can be a very large number when N is close to 10^9.
    long long N ; 
    //longlong sum = 0;

    // Read the input value of N from the user. 
    // This value will determine the upper bound of the summation (from 1 to N).
    cin >> N ;
    
    // Use the mathematical formula to calculate the sum of the first N natural numbers:
    // Formula: sum = N * (N + 1) / 2
    // This formula calculates the sum in constant time (O(1)) without needing to iterate through each number.
    //sum = ((N * (N + 1)) / 2);

    /*
    The following commented-out code is an alternative approach that uses a loop to calculate the sum by iterating from 1 to N.
    However, this approach is inefficient (O(N) time complexity) and would be slow for large values of N, which is why we use the formula instead.
    */
    
    /*  for (int i = 1; i<=N; i++){
        sum = i + sum;  // This line accumulates the sum of numbers from 1 to N, but is commented out for efficiency.
      }
    */

    // Output the result, which is the sum of numbers from 1 to N, calculated using the formula.
    //cout << sum << endl;
    cout << ((N * (N + 1)) / 2) << endl;

    // Return 0 to indicate successful execution of the program.
    return 0;
}