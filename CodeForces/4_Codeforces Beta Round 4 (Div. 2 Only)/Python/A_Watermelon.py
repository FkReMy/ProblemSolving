# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                    4 A. Watermelon                    *****/
# /*****************************************************************/

#    Codeforces Beta Round 4 (Div. 2 Only)
#    Problem Link: 
#                    https://codeforces.com/contest/4/problem/A

"""
Problem Idea:
One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that, the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs an even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

Input:
The first (and the only) input line contains an integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

Output:
Print "YES", if the boys can divide the watermelon into two parts, each of them weighing an even number of kilos; and "NO" in the opposite case.

Example:
For example, the boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos).
"""

# Read the weight of the watermelon from input and convert to integer
w = int(input())

# Check if the weight is even and greater than 2
if w % 2 == 0 and w > 2:
    # If true, output "YES" since the watermelon can be divided as desired
    print("YES")
else:
    # If false, output "NO" since the watermelon cannot be divided as desired
    print("NO")
