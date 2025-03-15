# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                   abc218  B. qwerty                   *****/
# /*****************************************************************/

#    AtCoder Beginner Contest 218
#    Problem Link:
#                    https://atcoder.jp/contests/abc218/tasks/abc218_b

"""
Problem Idea:
You are given a sequence of 26 integers P = (P1, P2, ..., P26) consisting of integers from 1 through 26.
It is guaranteed that all elements in P are distinct. The task is to print a string S of length 26 such that
for every i (1 ≤ i ≤ 26), the i-th character of S is the lowercase English letter that comes Pi-th in alphabetical order.

Input:
- The input consists of 26 distinct integers P1, P2, ..., P26.

Output:
- Print the string S.

Example:
For input: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
The output should be: abcdefghijklmnopqrstuvwxyz
"""

# Read the 26 integers into a list
# Python can read space-separated integers directly into a list using list comprehension or map
p = list(map(int, input().split()))

# Convert each integer to its corresponding lowercase letter and build the string
# Python can use chr() to convert numbers to characters more elegantly
s = ''.join(chr(pi + 96) for pi in p)  # ASCII value of 'a' is 97, so 'a' + (Pi - 1) = Pi + 96

# Print the resulting string
print(s)

# Alternative approach mimicking C++ more closely (commented out):
"""
p = list(map(int, input().split()))
for i in range(26):
    c = chr(p[i] + 96)  # Convert integer to character
    print(c, end='')    # Print character without newline
"""
