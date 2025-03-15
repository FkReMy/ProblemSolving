# /*****************************************************************/
# /*****                @author  AhmedFekry@VIV                *****/
# /*****               https://github.com/FkReMy               *****/
# /*****              66 B. Petya and Countryside              *****/
# /*****************************************************************/

#    Codeforces Beta Round 61 (Div. 2)
#    Problem Link: 
#                    https://codeforces.com/contest/66/problem/B

"""
Problem Idea:
Little Petya wants to find the optimal section in his grandmother's garden to create artificial rain such that the number of watered sections is maximized. The garden is represented as a 1xN rectangle with each section having a fixed height. Water from a watered section flows to neighboring sections if their height is not greater than the current section. The goal is to determine the maximum number of sections that can be watered when artificial rain is created above any single section.

Input:
- The first line contains a positive integer n (1 ≤ n ≤ 1000) representing the number of sections in the garden.
- The second line contains n positive integers representing the height of each section. The heights range from 1 to 1000.

Output:
- Print a single integer, the maximum number of watered sections if we create artificial rain above exactly one section.

Example:
For n = 5 and heights = [4, 2, 3, 3, 2], if we create rain above the section with height 3 (either of the middle ones), the water will flow to all sections except the one with height 4, resulting in 4 watered sections.
"""

# Read the number of sections from input and convert to integer
numOfSections = int(input())

# Read the heights of each section into a list
sectionHeight = list(map(int, input().split()))

# Initialize the maximum number of watered sections to 1
maxWatered = 1

# Loop through each section to simulate artificial rain
for i in range(numOfSections):
    count = 1  # Start counting from the current section

    # Check sections before the current section
    for j in range(i - 1, -1, -1):  # Reverse range from i-1 to 0
        # If the current section height is greater than or equal to the previous one
        if sectionHeight[j + 1] >= sectionHeight[j]:
            count += 1  # Increase the count of watered sections
        else:
            break  # Stop if the current section is lower than the previous one

    # Check sections after the current section
    for k in range(i + 1, numOfSections):
        # If the current section height is greater than or equal to the next one
        if sectionHeight[k - 1] >= sectionHeight[k]:
            count += 1  # Increase the count of watered sections
        else:
            break  # Stop if the current section is lower than the next one

    # Update the maximum number of watered sections if the current count is higher
    if maxWatered < count:
        maxWatered = count

# Print the maximum number of watered sections
print(maxWatered)
