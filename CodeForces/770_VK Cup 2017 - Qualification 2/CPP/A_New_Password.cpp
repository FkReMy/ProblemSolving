/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                  770 A. New Password                  *****\*/
/*\*****************************************************************\*/

//    VK Cup 2017 - Qualification 2
//    Problem Link: 
//                    https://codeforces.com/contest/770/problem/A

/*
Problem Idea:
Innokentiy wants to create a new password for the social network "Contact!" which satisfies the following conditions:
1. The length of the password must be exactly n.
2. The password should consist only of lowercase Latin letters.
3. The password must contain exactly k distinct symbols.
4. No two consecutive symbols in the password should be the same.

The goal is to generate such a password given the constraints 2 ≤ n ≤ 100 and 2 ≤ k ≤ min(n, 26).

Input:
- Two integers n and k where n is the length of the password and k is the number of distinct symbols.

Output:
- A password that satisfies the above conditions.

Example:
For n = 4 and k = 3, a valid password could be "java".
For n = 6 and k = 6, a valid password could be "python".
For n = 5 and k = 2, a valid password could be "phphp".
*/



#include <bits/stdc++.h> 
using namespace std;     

int main() {
                 
    // Declare two integer variables to store the number of characters and the number of distinct symbols
    int noOfChars, noOfDistinctSymbols;  
    
    // Read the values of noOfChars and noOfDistinctSymbols from the input
    cin >> noOfChars >> noOfDistinctSymbols; 

    // Loop to generate the required number of characters for the password
    for(int i = 0; i < noOfChars; i++) // Loop from 0 to noOfChars - 1
    {
        // Calculate the character by using the remainder of i divided by noOfDistinctSymbols added to 'a'
        // This ensures that the characters cycle through the first noOfDistinctSymbols lowercase letters
        char password = 'a' + (i % noOfDistinctSymbols); 
        
        // Output the calculated character
        cout << password; 
    }
    
    return 0;             
}
