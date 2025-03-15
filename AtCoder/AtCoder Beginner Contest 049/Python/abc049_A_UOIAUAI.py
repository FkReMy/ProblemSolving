# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                   abc049  A. UOIAUAI                  *****/
# /*****************************************************************/

#    AtCoder Beginner Contest 049
#    Problem Link:
#                    https://atcoder.jp/contests/abc049/tasks/abc049_a

"""
Problem Idea:
Given a lowercase English letter `c`, determine whether it is a vowel.
There are five vowels in the English alphabet: 'a', 'e', 'i', 'o', and 'u'.
The goal is to print "vowel" if `c` is a vowel and "consonant" otherwise.

Input:
- The input is given from Standard Input in the following format:
  A single lowercase English letter `c`.

Output:
- Print "vowel" if `c` is a vowel.
- Print "consonant" if `c` is a consonant.

Example:
For input 'a':
The output should be:
vowel

For input 'b':
The output should be:
consonant
"""

# Read the input character
# Python reads it as a string by default, no need to declare type as char
c = input()

# Check if the input character is one of the vowels
# Python can use 'in' operator with a string or list for a cleaner check
if c in 'aeiou':
    print("vowel")    # If the character is a vowel, print "vowel"
else:
    print("consonant") # If the character is not a vowel, print "consonant"
