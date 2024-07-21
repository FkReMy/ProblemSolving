/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                  236  A. Boy or Girl                  *****\*/
/*\*****************************************************************\*/

//    Codeforces Round 146 (Div. 2)
//    Problem Link: 
//                    https://codeforces.com/contest/236/problem/A

/*
Problem Idea:
In a forum, it's difficult to determine a user's gender based on their username, as many boys use girls' photos as avatars. Our hero devised a method to determine gender based on the number of distinct characters in a username. If the number of distinct characters is odd, the user is considered male; if even, the user is considered female.

Input:
- A non-empty string containing only lowercase English letters representing the username. The string can have at most 100 letters.

Output:
- "CHAT WITH HER!" if the user is female (even number of distinct characters).
- "IGNORE HIM!" if the user is male (odd number of distinct characters).

Example:
For the username "wjmzbmr", there are 6 distinct characters ("w", "j", "m", "z", "b", "r"), making the user female. The output should be "CHAT WITH HER!".
*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string userName; // Declare a string variable to store the username
    cin >> userName; // Read the username from input
    
    // Sort the username to bring identical characters together
    sort(userName.begin(), userName.end());
    
    // Get the length of the sorted username
    int lengthOfUserName = userName.length();
 
    int count = 0; // Initialize a counter for distinct characters
 
    // Loop through the sorted username
    for(int i = 0; i < lengthOfUserName; i++)
    {
        // If the current character is different from the next character, it is distinct
        if(userName[i] != userName[i + 1]) 
        {
            count++; // Increment the count of distinct characters
        }
    }
 
    // Check if the count of distinct characters is even
    if (count % 2 == 0)
    {
        // If even, print "CHAT WITH HER!"
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        // If odd, print "IGNORE HIM!"
        cout << "IGNORE HIM!\n";
    }
 
    return 0;
}
