# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                E. Area of a Circle                    *****/
# /*****************************************************************/

#    Problem: Given the radius (R) of a circle, calculate its area using the formula: Area = π * R^2.
#    Assiut Group; Sheet 1
#    Problem Link: 
#                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

"""
Problem Idea:
We are given the radius `R` of a circle, and we need to calculate the area of the circle using the formula:
Area = π * R^2. The value of π is approximated to 3.141592653.
The result should be printed with exactly 9 digits after the decimal point.

Input:
- A single number R representing the radius of the circle (1 ≤ R ≤ 100).

Output:
- Print the area of the circle with exactly 9 digits after the decimal point.

Examples:
1. Input:
   2.00
   Output:
   12.566370612

2. Input:
   10.00
   Output:
   314.159265300
"""

# In Python, we can use the math module for a more precise pi, but we'll use the problem's specified value

# Initialize the value of pi (π) as given in the problem statement.
# The value is set to an approximation of pi with 9 decimal places.
pi = 3.141592653

# Read the radius 'r' from the input and convert it to float.
# Python doesn't require explicit type declaration, and float handles decimal inputs naturally.
r = float(input())

# Calculate the area of the circle using the formula: Area = π * r^2.
# We multiply the radius 'r' by itself (r * r) to compute the square, and then multiply by pi.
area = r * r * pi

# Print the area with exactly 9 digits after the decimal point using f-string formatting.
# The :.9f format specifier ensures fixed-point notation with 9 decimal places.
print(f"{area:.9f}")

# Alternative formatting methods (commented out):
# Using format() method:
# print("{:.9f}".format(area))
# Using % operator:
# print("%.9f" % area)
