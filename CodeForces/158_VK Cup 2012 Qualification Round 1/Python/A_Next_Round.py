# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                   158 A. Next Round                   *****/
# /*****************************************************************/

#    VK Cup 2012 Qualification Round 1
#    Problem Link: 
#                    https://codeforces.com/contest/158/problem/A

"""
Problem Idea:
In a contest, contestants who earn a score equal to or greater than the k-th place finisher's score will advance to the next round, provided the score is positive. Given the scores of all participants in a non-increasing order, determine the number of participants who will advance to the next round.

Input:
- The first line contains two integers n and k (1 ≤ k ≤ n ≤ 50), representing the number of participants and the k-th place position.
- The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), representing the scores of participants in non-increasing order.

Output:
- Output the number of participants who advance to the next round.

Example:
For input:
8 5
10 9 8 7 7 7 5 5

Output should be:
6

This indicates that 6 participants have scores equal to or greater than the 5th place score and are greater than zero.
"""

# Read the number of participants and the k-th place position from input
n, k = map(int, input().split())

# Read the scores of the participants into a list
a = list(map(int, input().split()))

# Variable to count the number of participants advancing to the next round
pass_count = 0

# Loop to count the number of participants who advance to the next round
for i in range(n):
    # Check if the score of the i-th participant is at least as large as the k-th place score and is positive
    # Note: k-1 because k is 1-based but list indexing is 0-based
    if a[i] >= a[k-1] and a[i] != 0:
        pass_count += 1  # Increment the count of participants advancing to the next round

# Output the number of participants who advance to the next round
print(pass_count)
