# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                B. Basic Data Types                    *****/
# /*****************************************************************/

#    Problem: You are required to read five values of different basic data types: int, long long, char, float, and double.
#             Then, print each value on a new line in the same order it was received as input.
#    Assiut Group; Sheet 1
#    Problem Link: 
#                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B

"""
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
   14049.30493

2. Input:
   10 98765432101234 x 123.45 54321.6789
   Output:
   10
   98765432101234
   x
   123.45
   54321.6789
"""

# In Python, we don't need to include libraries for basic input/output operations
# Python handles different data types more dynamically than C++

# Read the input line and split it into a list of strings using space as separator
values = input().split()

# Convert the input strings to appropriate types and assign to variables
# Note: Python doesn't distinguish between int and long long, both are just int
i = int(values[0])      # Convert first value to integer
l = int(values[1])      # Convert second value to integer (no separate long long type in Python)
c = values[2]           # Keep third value as string (Python doesn't need explicit char type)
f = float(values[3])    # Convert fourth value to float
d = float(values[4])    # Convert fifth value to float (Python's float is equivalent to C++ double)

# Print each variable on a new line
# Python's print() automatically adds a newline after each call
print(i)
print(l)
print(c)
print(f)
print(d)

# Alternative approach (commented out):
# Using a single print statement with '\n' separators
"""
print(f"{i}\n{l}\n{c}\n{f}\n{d}")
"""

# In Python, no need for explicit return statement or main function
# Program terminates naturally when script ends