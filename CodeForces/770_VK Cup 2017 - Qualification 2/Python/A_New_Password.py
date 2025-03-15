# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                  770 A. New Password                  *****/
# /*****************************************************************/

#    VK Cup 2017 - Qualification 2
#    Problem Link: 
#                    https://codeforces.com/contest/770/problem/A

"""
Problem Idea:
Innokentiy wants to create a new password for the social network "Contact!" which satisfies the following conditions:
1. The length of the password must be exactly n.
2. The password should consist only of lowercase Latin letters.
3. The password must contain exactly k distinct symbols.
4. No two consecutive symbols in the password should be the same.

The goal is to generate such a password given the constraints 2 ≤ n ≤ 100 and 2 ≤ k ≤ min(n, 26).

Input:
- Two integers n and k where n is the length of the password and k is the number of distinct symbols.

Output:
- A password that satisfies the above conditions.

Example:
For n = 4 and k = 3, a valid password could be "java".
For n = 6 and k = 6, a valid password could be "python".
For n = 5 and k = 2, a valid password could be "phphp".
"""

# Read the values of noOfChars and noOfDistinctSymbols from the input
noOfChars, noOfDistinctSymbols = map(int, input().split())

# Generate the password as a string using a list comprehension
# chr(97 + (i % noOfDistinctSymbols)) converts numbers to letters starting from 'a' (97 in ASCII)
password = ''.join(chr(97 + (i % noOfDistinctSymbols)) for i in range(noOfChars))

# Output the generated password
print(password)
