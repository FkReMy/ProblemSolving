/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                Prime Number Checker                   *****\*/
/*\*****************************************************************\*/

/*
Problem Idea:
Given an integer n, check each number from 1 to n to determine if it is a prime number.
A prime number is defined as a natural number greater than 1 that has no positive divisors other than 1 and itself.
For each number in the range, print whether it is prime or not.

Input:
- A single integer n (1 ≤ n), representing the upper limit of the range to check.

Output:
- For each integer i from 1 to n, print "<i> is prime" if i is a prime number, or "<i> is not prime" if it is not.

Examples:
1. Input:
   5
   Output:
   1 is not prime
   2 is prime
   3 is prime
   4 is not prime
   5 is prime

2. Input:
   3
   Output:
   1 is not prime
   2 is prime
   3 is prime
*/

#include <bits/stdc++.h>  // Includes all standard C++ libraries for I/O operations
#include <cmath>          // Includes math functions, though not strictly needed here (sqrt could be used)
using namespace std;      // Use the standard namespace to avoid prefixing with 'std::'

int main() {
    int n; // Declare an integer to store the upper limit of the range

    cin >> n; // Read the upper limit from input

    for (int i = 1; i <= n; i++) { // Loop through numbers from 1 to n
        if (i <= 1) { // Check if the number is 1 or less
            cout << i << " is not prime" << endl; // 1 is not prime by definition
        } else {
            bool is_prime = true; // Assume the number is prime

            // Loop from 2 to sqrt(i) to check for factors
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) { // If i is divisible by j, it's not prime
                    is_prime = false; // Mark as not prime
                    break; // Exit the loop as we found a factor
                }
            }

            if (is_prime) { // If the number is still marked as prime
                cout << i << " is prime" << endl;
            } else { // If the number was marked as not prime
                cout << i << " is not prime" << endl;
            }
        }
    }

    return 0; // Return 0 to indicate successful execution
}