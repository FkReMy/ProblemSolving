# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                  236  A. Boy or Girl                  *****/
# /*****************************************************************/

#    Codeforces Round 146 (Div. 2)
#    Problem Link: 
#                    https://codeforces.com/contest/236/problem/A

"""
Problem Idea:
In a forum, it's difficult to determine a user's gender based on their username, as many boys use girls' photos as avatars. Our hero devised a method to determine gender based on the number of distinct characters in a username. If the number of distinct characters is odd, the user is considered male; if even, the user is considered female.

Input:
- A non-empty string containing only lowercase English letters representing the username. The string can have at most 100 letters.

Output:
- "CHAT WITH HER!" if the user is female (even number of distinct characters).
- "IGNORE HIM!" if the user is male (odd number of distinct characters).

Example:
For the username "wjmzbmr", there are 6 distinct characters ("w", "j", "m", "z", "b", "r"), making the user female. The output should be "CHAT WITH HER!".
"""

# Read the username from input
userName = input()

# In Python, we can use a set to directly count distinct characters
# Convert the string to a set to get unique characters
distinct_chars = len(set(userName))

# Check if the count of distinct characters is even
if distinct_chars % 2 == 0:
    # If even, print "CHAT WITH HER!"
    print("CHAT WITH HER!")
else:
    # If odd, print "IGNORE HIM!"
    print("IGNORE HIM!")

# Alternative approach mimicking C++ logic (commented out):
"""
# Sort the username to bring identical characters together
userName = ''.join(sorted(userName))

# Get the length of the sorted username
lengthOfUserName = len(userName)

count = 0  # Initialize a counter for distinct characters

# Loop through the sorted username
for i in range(lengthOfUserName):
    # If the current character is different from the next character, it is distinct
    # Use try-except to handle the last character (no i+1)
    try:
        if userName[i] != userName[i + 1]:
            count += 1  # Increment the count of distinct characters
    except IndexError:
        count += 1  # Last character is always counted

# Check if the count of distinct characters is even
if count % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
"""
