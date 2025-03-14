# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                A. Say Hello With Python              *****/
# /*****************************************************************/

#    Problem: Given a name `S`, print a greeting message in the format: "Hello, <name>" without the parentheses.
#    Assiut Group; Sheet 1
#    Problem Link: 
#                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/A

"""
Problem Idea:
We are given a string `S` which represents a name. The task is to print a message that says "Hello, <name>", where <name> is replaced with the input string.

Input:
- A single line containing a string `S` which represents the name.

Output:
- Print "Hello, " followed by the input name, on one line.

Example:
1. Input:
   programmer
   Output:
   Hello, programmer

2. Input:
   world
   Output:
   Hello, world
"""

# In Python, we don't need to include libraries for basic input/output operations as they are built-in.

# Python doesn't require a main function or namespace declaration like C++.

# Read the input name from the user and store it in the string variable 's'.
# In Python, input() reads a line from the user and returns it as a string.
# We use strip() to remove any trailing newline or whitespace.
#s = input().strip()

s = input()  # Read the input name from the user and store it in the string variable 's'
             # Python's input() function reads a line from standard input

# Print the greeting message "Hello, " followed by the value stored in 's' (the input name).
# In Python, we can concatenate strings with '+' or use f-strings; here we use '+'.
# Python's print() automatically adds a newline at the end, so no need for an explicit 'endl'.
print("Hello, " + s)



# In Python, we don't need to return a value or explicitly end the program like in C++.
# The script terminates naturally when it reaches the end.