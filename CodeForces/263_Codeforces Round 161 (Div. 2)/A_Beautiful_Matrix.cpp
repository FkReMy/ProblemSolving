/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                263 A. Beautiful Matrix                *****\*/
/*\*****************************************************************\*/

//    Codeforces Round 161 (Div. 2)
//    Problem Link: 
//                    https://codeforces.com/contest/263/problem/A

/*
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
*/



#include <bits/stdc++.h> 
#include <cmath>        

using namespace std;

int main() {
    int moves; // Declare a variable to store the number of moves
    int num = 0; // Variable to read the matrix elements
    for (int x = 1; x <= 5; x++) { // Loop through each row
        for (int y = 1; y <= 5; y++) { // Loop through each column
            cin >> num; // Read the current element of the matrix
            if (num == 1) { // Check if the current element is 1
                // Calculate the minimum number of moves to bring the 1 to the center
                moves = abs(x - 3) + abs(y - 3);
            }
        }
    }
    cout << moves << endl; // Print the number of moves

    return 0; 
}