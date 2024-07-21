/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                                                       *****\*/
/*\*****             @contributor  BelalSileem@VIV             *****\*/
/*\*****                https://github.com/blela               *****\*/
/*\*****                                                       *****\*/
/*\*****         E.  Ein Gedi: Oasis of Natural Beauty         *****\*/
/*\*****************************************************************\*/

//    ECPC Qualifications 2024 (Day 1) AAST, Alexandria, Egypt, July, 2024

/*
Problem Idea:
Ein Gedi, an oasis on the western shore of the Dead Sea in the Judean Desert of Palestine, is renowned for its stunning natural beauty and lush vegetation.
You are given a grid with n rows and m columns representing an ASCII art picture of a rectangle. The grid consists of the following characters:
- "." represents an empty square.
- "|" represents a cell with a segment running from top to bottom.
- "-" represents a cell with a segment running from right to left.
- "+" represents a rectangle corner.

The task is to find the area enclosed by this rectangle. The area of this rectangle is equal to the number of empty squares (represented by '.') inside it.

Input:
The first line of input contains two integers n and m (1 ≤ n, m ≤ 10^6) — the number of rows and columns, respectively. This is followed by n lines, each containing m characters representing the ASCII art picture. It is guaranteed that the sum of n * m over all test cases does not exceed 10^6. It is guaranteed that the picture contains exactly one rectangle with a positive area.

Output:
Print the number of empty squares ('.') inside the rectangle.

Example:
Input:
6 8
........
..+---+.
..|...|.
..|...|.
..+---+.
........

Output:
6
*/

#include <bits/stdc++.h> 
using namespace std;

int main() {
    int x, y; // Variables to store the number of rows and columns
    int countx = 0; // Counter for '|' characters
    int county = 0; // Counter for '-' characters

    cin >> x >> y; // Read the number of rows and columns from input
    char a[x][y]; // Declare a 2D character array to store the grid

    // Loop through each cell of the grid
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> a[i][j]; // Read the character from input into the grid
            if (a[i][j] == '|') {
                countx++; // Increment the counter if the character is '|'
            } else if (a[i][j] == '-') {
                county++; // Increment the counter if the character is '-'
            }
        }
    }

    // Calculate the area of the rectangle and output the result
    cout << ((countx / 2) * (county / 2)) << endl;
    return 0; 
}
