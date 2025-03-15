# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                    H.  Two numbers                    *****/
# /*****************************************************************/

#    Problem: Calculate the floor, ceiling, and round values of A / B.
#    Assiut Group; Sheet 1
#    Problem Link: 
#                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H

"""
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
"""

import math

# Read the values of A and B from the user and convert to integers
A, B = map(int, input().split())

# Calculate the division of A by B
result = A / B

# Floor: largest integer ≤ result
print(f"floor {A} / {B} = {math.floor(result)}")

# Ceiling: smallest integer ≥ result
print(f"ceil {A} / {B} = {math.ceil(result)}")

# Round: nearest integer, with half-up rounding (2.5 → 3)
# Using math.floor(result + 0.5) to force half-up rounding instead of Python's default half-to-even
print(f"round {A} / {B} = {math.floor(result + 0.5)}")

# In Python, no need for explicit return statement or main function