/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                   abc218  B. qwerty                   *****\*/
/*\*****************************************************************\*/

//    AtCoder Beginner Contest 218
//    Problem Link:
//                    https://atcoder.jp/contests/abc218/tasks/abc218_b

/*
Problem Idea:
You are given a sequence of 26 integers P = (P1, P2, ..., P26) consisting of integers from 1 through 26.
It is guaranteed that all elements in P are distinct. The task is to print a string S of length 26 such that
for every i (1 ≤ i ≤ 26), the i-th character of S is the lowercase English letter that comes Pi-th in alphabetical order.

Input:
- The input consists of 26 distinct integers P1, P2, ..., P26.

Output:
- Print the string S.

Example:
For input: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
The output should be: abcdefghijklmnopqrstuvwxyz
*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    int p[26]; // Declare an array to store the 26 integers
    char c; // Declare a character variable to store the corresponding letter

    // Read the 26 integers into the array
    for(int i = 0; i < 26; i++) {
        cin >> p[i];
    }

    // Convert each integer to its corresponding lowercase letter and print it
    for(int i = 0; i < 26; i++) {
        c = p[i] + 96; // ASCII value of 'a' is 97, so 'a' + (Pi - 1) = Pi + 96
        cout << c; // Print the character
    }

    return 0; 
}
