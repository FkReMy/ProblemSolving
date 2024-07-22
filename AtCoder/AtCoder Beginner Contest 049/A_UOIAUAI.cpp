/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                   abc049  A. UOIAUAI                  *****\*/
/*\*****************************************************************\*/

//    AtCoder Beginner Contest 049
//    Problem Link:
//                    https://atcoder.jp/contests/abc049/tasks/abc049_a

/*
Problem Idea:
Given a lowercase English letter `c`, determine whether it is a vowel.
There are five vowels in the English alphabet: 'a', 'e', 'i', 'o', and 'u'.
The goal is to print "vowel" if `c` is a vowel and "consonant" otherwise.

Input:
- The input is given from Standard Input in the following format:
  A single lowercase English letter `c`.

Output:
- Print "vowel" if `c` is a vowel.
- Print "consonant" if `c` is a consonant.

Example:
For input 'a':
The output should be:
vowel

For input 'b':
The output should be:
consonant
*/



#include <bits/stdc++.h> 
using namespace std;

int main()
{
    char c;   // Declare a variable to store the input character
    cin >> c; // Read the input character

    // Check if the input character is one of the vowels
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout << "vowel" << endl; // If the character is a vowel, print "vowel"
    }
    else
    {
        cout << "consonant" << endl; // If the character is not a vowel, print "consonant"
    }

    return 0;
}
