# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                      231 A. Team                      *****/
# /*****************************************************************/

#    Codeforces Round 143 (Div. 2)
#    Problem Link: 
#                    https://codeforces.com/contest/231/problem/A

"""
Problem Idea:
Three friends, Petya, Vasya, and Tonya, decide to form a team for a programming contest. Each problem in the contest will be solved if at least two of them are sure about the solution. Given the confidence levels of each friend for n problems, determine how many problems the team will solve.

Input:
- The first line contains an integer n (1 ≤ n ≤ 1000) — the number of problems in the contest.
- The next n lines each contain three integers (0 or 1), representing the confidence of Petya, Vasya, and Tonya, respectively, for each problem.

Output:
- Print a single integer — the number of problems the friends will solve.

Example:
For input:
3
1 1 0
1 1 1
1 0 0

Output should be:
2

This indicates that the team will solve the first two problems because at least two friends are confident about the solution.
"""

# Read the number of problems from input and convert to integer
n = int(input())

# Variable to count the number of problems the team will solve
ansd = 0

# Loop through each problem
for _ in range(n):
    # Read the confidence levels of Petya, Vasya, and Tonya for the current problem
    petya, vasya, tonya = map(int, input().split())
    
    # Calculate the total confidence level for the current problem
    ans = petya + vasya + tonya

    # Check if at least two friends are confident about the solution
    if ans >= 2:
        ansd += 1  # Increment the count of problems the team will solve

# Output the number of problems the team will solve
print(ansd)
