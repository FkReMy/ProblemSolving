# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                     abc137 A. +-x                     *****/
# /*****************************************************************/

#    AtCoder Beginner Contest 137
#    Problem Link:
#                    https://atcoder.jp/contests/abc137/tasks/abc137_a

"""
Problem Idea:
Given two integers A and B, we need to find and print the largest value among
A + B, A - B, and A * B.

Input:
- The input consists of two integers A and B, each between -100 and 100 inclusive.

Output:
- Print the largest value among A + B, A - B, and A * B.

Example:
For A = 1 and B = 2:
The possible values are:
1 + 2 = 3
1 - 2 = -1
1 * 2 = 2
The output should be:
3
"""

# Read the values of A and B from standard input and convert to integers
# Python's int type handles the range -100 to 100 and beyond natively
A, B = map(int, input().split())

# Calculate the sum, difference, and product of A and B
sum_ab = A + B   # Calculate the sum of A and B
sub_ab = A - B   # Calculate the difference of A and B
mul_ab = A * B   # Calculate the product of A and B

# Initialize the greatest value with the product of A and B
greatest = mul_ab

# Check if the sum is greater than the current greatest value
if greatest < sum_ab:
    greatest = sum_ab  # Update the greatest value to the sum if it is greater

# Check if the difference is greater than the current greatest value
if greatest < sub_ab:
    greatest = sub_ab  # Update the greatest value to the difference if it is greater

# Print the greatest value
print(greatest)

# Alternative Python solution using max() (commented out):
# print(max(A + B, A - B, A * B))
