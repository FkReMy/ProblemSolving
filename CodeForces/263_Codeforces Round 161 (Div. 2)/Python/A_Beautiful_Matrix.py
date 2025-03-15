# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                263 A. Beautiful Matrix                *****/
# /*****************************************************************/

#    Codeforces Round 161 (Div. 2)
#    Problem Link: 
#                    https://codeforces.com/contest/263/problem/A

"""
Problem Idea:
You are given a 5x5 matrix containing 24 zeroes and a single one. The goal is to make the matrix "beautiful" by moving the one to the center of the matrix (position (3,3)). You can swap two neighboring rows or two neighboring columns in one move. The task is to determine the minimum number of moves required to move the one to the center of the matrix.

Input:
- The input consists of five lines, each containing five integers. The matrix contains exactly 24 zeroes and a single one.

Output:
- Print a single integer, the minimum number of moves needed to make the matrix beautiful.

Example:
For a matrix:
0 0 0 0 0
0 0 0 0 0
0 0 1 0 0
0 0 0 0 0
0 0 0 0 0

The output should be 0, since the matrix is already beautiful.
"""

# In Python, we can use the abs() function directly

# Loop through each row (1-based indexing in problem, but we'll adjust)
for x in range(1, 6):  # 1 to 5 inclusive
    # Read the current row as a list of integers
    row = list(map(int, input().split()))
    for y in range(1, 6):  # Loop through each column (1 to 5 inclusive)
        num = row[y-1]  # Access the current element (adjust to 0-based indexing)
        if num == 1:  # Check if the current element is 1
            # Calculate the minimum number of moves to bring the 1 to the center
            # Center is (3,3) in 1-based indexing
            moves = abs(x - 3) + abs(y - 3)

# Print the number of moves
print(moves)
