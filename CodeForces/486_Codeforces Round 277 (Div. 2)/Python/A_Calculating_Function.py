# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****              486 A. Calculating Function              *****/
# /*****************************************************************/

#    Codeforces Round 277 (Div. 2)
#    Problem Link: 
#                    https://codeforces.com/contest/486/problem/A

"""
Problem Idea:
For a positive integer n, we need to define a function f(n) which is the sum of a series:
f(n) = -1 + 2 - 3 + 4 - 5 + ... + (-1)^n * n

The series alternates between negative and positive integers. By analyzing the pattern, we observe:
- For even n: The function f(n) can be simplified to n/2.
- For odd n: The function f(n) can be simplified to -((n + 1) / 2).

Our task is to compute and print f(n) for a given positive integer n efficiently.

Constraints:
1 ≤ n ≤ 10^15

Given the constraints, the solution must be optimized to handle very large values of n without iterating through all terms.

Example:
f(4) = -1 + 2 - 3 + 4 = 2
f(5) = -1 + 2 - 3 + 4 - 5 = -3
"""

# Read the input number from standard input and convert to integer
# Python's int can handle numbers up to 10^15 and beyond natively
num = int(input())

# Check if the number is even
if num % 2 == 0:
    # If the number is even, print the result of num divided by 2
    # This is because the function f(n) for even n simplifies to n/2
    # Using integer division (//) to ensure integer output
    print(num // 2)
else:
    # If the number is odd, print the result of (num + 1) divided by 2 and negated
    # This is because the function f(n) for odd n simplifies to -((n + 1)/2)
    # Using integer division (//) to ensure integer output
    print(-((num + 1) // 2))
