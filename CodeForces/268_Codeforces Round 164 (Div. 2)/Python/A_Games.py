# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****                     268  A. Games                     *****/
# /*****************************************************************/

#    Codeforces Round 164 (Div. 2)
#    Problem Link: 
#                    https://codeforces.com/contest/268/problem/A

"""
Problem Idea:
Manao works on a sports TV and notices that each football team has two sets of uniforms: home and guest. When a team plays at home, they wear the home uniform unless the home uniform color matches the guest team's uniform color, in which case they wear the guest uniform.

The task is to determine how many times during a championship (where each team plays every other team at home and away) the host team will have to wear their guest uniform.

Input:
- An integer n (2 ≤ n ≤ 30) representing the number of teams.
- n lines, each containing two distinct space-separated integers hi and ai (1 ≤ hi, ai ≤ 100) representing the home and guest uniform colors of each team.

Output:
- A single integer representing the number of games where the host team wears the guest uniform.

Example:
For n = 3, and uniform colors:
1 2
2 4
3 1
The output would be 1, as only one game requires the host to wear their guest uniform.
"""

# Read the number of teams from input and convert to integer
noOfTeams = int(input())

# Lists to store home and guest uniform colors for each team
home = []
guest = []

# Variable to count the number of games where the host wears the guest uniform
count = 0

# Loop to read the home and guest uniform colors for each team
for i in range(noOfTeams):
    # Read home and guest uniform colors for team i and append to lists
    h, g = map(int, input().split())
    home.append(h)
    guest.append(g)

# Loop to check each home uniform color against each guest uniform color
for h in range(noOfTeams):  # Outer loop for home uniform color check
    for g in range(noOfTeams):  # Inner loop for guest uniform color check
        # If the home uniform color of team h matches the guest uniform color of team g
        if home[h] == guest[g]:
            # Increment the count of games where the host wears the guest uniform
            count += 1

# Output the final count of such games
print(count)
