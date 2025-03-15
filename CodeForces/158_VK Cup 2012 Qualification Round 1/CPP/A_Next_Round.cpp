/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                   158 A. Next Round                   *****\*/
/*\*****************************************************************\*/

//    VK Cup 2012 Qualification Round 1
//    Problem Link: 
//                    https://codeforces.com/contest/158/problem/A

/*
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
*/



#include <bits/stdc++.h>
using namespace std; 

int main() {
    int n, k; // Declare variables to store the number of participants and the k-th place position
    int pass = 0; // Variable to count the number of participants advancing to the next round

    cin >> n >> k; // Read the number of participants and the k-th place position from the input

    int a[n]; // Declare an array to store the scores of the participants

    // Loop to read the scores of the participants
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Read the score of the i-th participant
    }

    // Loop to count the number of participants who advance to the next round
    for (int i = 0; i < n; i++) {
        // Check if the score of the i-th participant is at least as large as the k-th place score and is positive
        if (a[i] >= a[k-1] && a[i] != 0) {
            pass++; // Increment the count of participants advancing to the next round
        }
    }

    cout << pass << endl; // Output the number of participants who advance to the next round

    return 0; 
}
