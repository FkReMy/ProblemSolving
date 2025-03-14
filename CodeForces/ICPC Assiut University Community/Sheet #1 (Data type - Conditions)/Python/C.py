# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                C. Simple Calculator                   *****/
# /*****************************************************************/

#    Problem: Given two numbers X and Y, perform three operations: summation, multiplication, and subtraction, and print the results in a specific format.
#    Assiut Group; Sheet 1
#    Problem Link: 
#                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

"""
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
"""

# In Python, we don't need to include libraries for basic input/output operations

# Read the input line and split it into a list of strings, then convert to integers
x, y = map(int, input().split())
# In Python, we don't need to declare types explicitly
# Python's int type can handle large numbers and negative results automatically

# Summation
# The commented-out version shows an alternative approach where the sum is stored in an intermediate variable 'sum'
# sum = x + y
# print(f"{x} + {y} = {sum}")
# The following line prints the result of summation in the required format using f-string
print(f"{x} + {y} = {x + y}")

# Multiplication
# The commented-out version shows an alternative approach where the multiplication result is stored in 'mul'
# mul = x * y
# print(f"{x} * {y} = {mul}")
# The following line prints the result of multiplication in the required format using f-string
print(f"{x} * {y} = {x * y}")

# Subtraction
# The commented-out version shows an alternative approach where the subtraction result is stored in 'sub'
# sub = x - y
# print(f"{x} - {y} = {sub}")
# The following line prints the result of subtraction in the required format using f-string
print(f"{x} - {y} = {x - y}")

# In Python, no need for explicit return statement or main function
# Program terminates naturally when script ends