# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                    D. Difference                      *****/
# /*****************************************************************/

#    Problem: Given four numbers A, B, C, and D, compute the result of the equation:
#             X = (A * B) - (C * D), and print the result in the format: "Difference = X".
#    Assiut Group; Sheet 1
#    Problem Link: 
#                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

"""
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
"""

# In Python, we don't need to include libraries for basic input/output operations

# Read the input line and split it into four integers
a, b, c, d = map(int, input().split())
# Python's int type can handle the range [-10^5, 10^5] and beyond without explicit type declaration

# The commented-out block below calculates the difference using an intermediate variable 'x'
"""
x = (a * b) - (c * d)  # Calculate the result of (a * b) - (c * d) and store it in 'x'
print(f"Difference = {x}")  # Output the result in the required format using f-string
"""

# The calculation and output are combined into a single statement for simplicity:
# We calculate (a * b) - (c * d) and directly print the result in the required format using f-string
print(f"Difference = {(a * b) - (c * d)}")

# In Python, no need for explicit return statement or main function
# Program terminates naturally when script ends