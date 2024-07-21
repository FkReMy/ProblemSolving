/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                  405 A. Gravity Flip                  *****\*/
/*\*****************************************************************\*/

//    Codeforces Round 238 (Div. 2)
//    Problem Link: 
//                    https://codeforces.com/contest/405/problem/A

/*
Problem Idea:
Little Chris has built a toy box with columns of toy cubes. Initially, the gravity pulls the cubes downwards. When Chris switches the gravity, it pulls all the cubes to the right side of the box. The goal is to determine the configuration of cubes in each column after switching the gravity.

Input:
- The first line contains an integer n (1 ≤ n ≤ 100), the number of columns.
- The second line contains n space-separated integers where the i-th number ai (1 ≤ ai ≤ 100) denotes the number of cubes in the i-th column.

Output:
- Output n integers separated by spaces, where the i-th number is the number of cubes in the i-th column after the gravity switch.

Example:
For input:
4
3 2 1 2

Output should be:
1 2 2 3

This indicates that after the gravity switch, the cubes will be sorted in non-decreasing order.
*/



#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n; // Declare a variable to store the number of columns
    cin >> n; // Read the number of columns from the input
    
    int arr[n]; // Declare an array to store the number of cubes in each column
    
    // Loop to read the number of cubes in each column
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read the number of cubes in the i-th column
    }
    
    // Sort the array to simulate the effect of gravity switch pulling cubes to the right
    sort(arr, arr + n);
    
    // Loop to print the number of cubes in each column after sorting
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  "; // Print the number of cubes in the i-th column
    }
    
    return 0; 
}
