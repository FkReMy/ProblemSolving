# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                  1 A. Theatre Square                  *****/
# /*****************************************************************/

#    Codeforces Beta Round 1
#    Problem Link:
#                    https://codeforces.com/problemset/problem/1/A

"""
Problem Idea:
Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters.
On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones.
Each flagstone is of the size a × a. The task is to find the minimum number of flagstones needed to cover the entire Square.
The flagstones cannot be broken, and they must be laid out such that their sides are parallel to the sides of the Square.

Input:
- Three positive integer numbers: n, m, and a (1 ≤ n, m, a ≤ 10^9).

Output:
- The minimum number of flagstones needed to cover the entire Square.

Example:
For n = 6, m = 6, and a = 4:
The output should be:
4
"""

# Read the input values and convert to integers
# Python's int type can handle numbers up to 10^9 and beyond natively
n, m, a = map(int, input().split())

# Calculate the number of flagstones needed along the length of the Square
flagstonesNumX = (n // a)  # Using integer division (//) instead of /

# Calculate the number of flagstones needed along the width of the Square
flagstonesNumY = (m // a)  # Using integer division (//) instead of /

# If there is a remainder when dividing the length by the size of a flagstone, add one more flagstone
if n % a > 0:
    flagstonesNumX += 1

# If there is a remainder when dividing the width by the size of a flagstone, add one more flagstone
if m % a > 0:
    flagstonesNumY += 1

# Print the total number of flagstones needed to cover the Square
print(flagstonesNumX * flagstonesNumY)