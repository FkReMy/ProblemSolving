# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****   742 A. Arpa’s hard exam and Mehrdad’s naive cheat   *****/
# /*****************************************************************/

#    Codeforces Round 383 (Div. 2)
#    Problem Link: 
#                    https://codeforces.com/contest/742/problem/A

"""
Problem Idea:
Arpa's land has an exam question asking for the last digit of 1378^n given an integer n. The challenge is to determine this last digit efficiently for large values of n (up to 10^9).

Observation:
The last digit of powers of 1378 forms a repeating cycle every 4:
1378^1 ends in 8,
1378^2 ends in 4,
1378^3 ends in 2,
1378^4 ends in 6,
1378^5 ends in 8 (same as 1378^1), and so on.

Thus, we only need to consider n modulo 4 to determine the last digit of 1378^n.

Input:
- A single integer n (0 ≤ n ≤ 10^9).

Output:
- The last digit of 1378^n.

Example:
For n = 1, the output is 8.
For n = 2, the output is 4.
"""

# Read the input number from standard input and convert to integer
# Python's int can handle numbers up to 10^9 and beyond natively
n = int(input())

# Check if n is 0
if n == 0:
    # If n is 0, the result is 1 because 1378^0 is 1
    print("1")
elif n % 4 == 1:  # Check if n % 4 is 1
    # If n % 4 is 1, the last digit of 1378^n is 8
    print("8")
elif n % 4 == 2:  # Check if n % 4 is 2
    # If n % 4 is 2, the last digit of 1378^n is 4
    print("4")
elif n % 4 == 3:  # Check if n % 4 is 3
    # If n % 4 is 3, the last digit of 1378^n is 2
    print("2")
elif n % 4 == 0:  # Check if n % 4 is 0
    # If n % 4 is 0, the last digit of 1378^n is 6
    print("6")