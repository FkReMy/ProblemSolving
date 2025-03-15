# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                    L. The Brothers                    *****/
# /*****************************************************************/

#    Problem: Determine if two people are brothers based on their second names.
#    Assiut Group; Sheet 1
#    Problem Link: 
#                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

"""
Problem Idea:
We are given the names of two people. Each person has a first name and a second name (surname).
The goal is to determine whether the two people are brothers, which means they share the same second name.

Input:
- The input consists of two lines.
- The first line contains the first name and second name of the first person.
- The second line contains the first name and second name of the second person.

Output:
- Print "ARE Brothers" if the two persons share the same second name (surname).
- Print "NOT" if they have different second names.

Examples:
1. Input:
   bassam ramadan
   ahmed ramadan
   Output:
   ARE Brothers

2. Input:
   ali salah
   ayman salah
   Output:
   ARE Brothers

3. Input:
   ali kamel
   ali salah
   Output:
   NOT
"""

# Read the first name and last name (second name) of the first person from user input
firstname1, lastname1 = input().split()

# Read the first name and last name (second name) of the second person from user input
firstname2, lastname2 = input().split()

# Compare the last names (surnames) of both persons to check if they are the same
if lastname1 == lastname2:
    # If the surnames are the same, print "ARE Brothers" to indicate that they are considered brothers
    print("ARE Brothers")
else:
    # If the surnames are different, print "NOT" to indicate that they are not brothers
    print("NOT")