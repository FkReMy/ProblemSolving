# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                Prime Number Checker                   *****/
# /*****************************************************************/

"""
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
"""

# Read the upper limit from input and convert to integer
n = int(input())

# Loop through numbers from 1 to n
for i in range(1, n + 1):
    if i <= 1:  # Check if the number is 1 or less
        print(f"{i} is not prime")  # 1 is not prime by definition
    else:
        is_prime = True  # Assume the number is prime

        # Loop from 2 to sqrt(i) to check for factors
        # Python uses range() and int(i ** 0.5) for square root
        for j in range(2, int(i ** 0.5) + 1):
            if i % j == 0:  # If i is divisible by j, it's not prime
                is_prime = False  # Mark as not prime
                break  # Exit the loop as we found a factor

        if is_prime:  # If the number is still marked as prime
            print(f"{i} is prime")
        else:  # If the number was marked as not prime
            print(f"{i} is not prime")