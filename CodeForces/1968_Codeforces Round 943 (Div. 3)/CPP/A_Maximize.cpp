/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                   1968 A. Maximize?                   *****\*/
/*\*****************************************************************\*/

//    Codeforces Round 943 (Div. 3)
//    Problem Link: 
//                    https://codeforces.com/contest/1968/problem/A

/*
Problem Idea:
Given an integer x, find any integer y (1 ≤ y < x) such that gcd(x, y) + y is maximized. If there are multiple solutions, any valid y is acceptable.

Input:
- The first line contains an integer t (1 ≤ t ≤ 1000) — the number of test cases.
- Each of the next t lines contains a single integer x (2 ≤ x ≤ 1000).

Output:
- For each test case, output any y (1 ≤ y < x) that maximizes gcd(x, y) + y.

Example:
For input:
3
5
8
10

Output could be:
4
7
9
*/



#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t; // Declare variable to store the number of test cases
    cin >> t; // Read the number of test cases
    while (t--) { // Loop through each test case
        long long x; // Declare variable to store the value of x for the current test case
        cin >> x; // Read the value of x
        cout << x - 1 << endl; // Output x-1, as it maximizes gcd(x, y) + y for any given x
    }
    return 0;
}


