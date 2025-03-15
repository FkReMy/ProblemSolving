# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                F. Digits Summation                    *****/
# /*****************************************************************/

#    Problem: Given two numbers N and M, the task is to find and print the sum of their last digits.
#    Assiut Group; Sheet 1
#    Problem Link: 
#                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

"""
Problem Idea:
We are given two large numbers N and M, and we need to calculate the summation of their last digits.
To solve this, we can simply use the modulo operator to extract the last digit of each number and sum them.

Input:
- The input consists of a single line containing two integers N and M (0 ≤ N, M ≤ 10^18).

Output:
- Output a single integer, which is the sum of the last digits of N and M.

Examples:
1. Input:
   13 12
   Output:
   5
   Explanation:
   The last digit of 13 is 3, and the last digit of 12 is 2. So, the sum is: 3 + 2 = 5.

2. Input:
   1029 304
   Output:
   13
   Explanation:
   The last digit of 1029 is 9, and the last digit of 304 is 4. So, the sum is: 9 + 4 = 13.
"""

# Read the values of N and M from the input, which are two large integers
# Python's int can handle numbers up to 10^18 and beyond natively
N, M = map(int, input().split())

# Extract the last digit of N using the modulo operator (N % 10)
# Extract the last digit of M using the modulo operator (M % 10)
# Sum the last digits and directly print the result
print((N % 10) + (M % 10))

"""
Explanation:
- N % 10: This operation extracts the last digit of the number N.
  Example: For N = 13, N % 10 = 3.
- M % 10: This operation extracts the last digit of the number M.
  Example: For M = 12, M % 10 = 2.
- We add these two digits together, in this case 3 + 2, which results in 5.
"""
