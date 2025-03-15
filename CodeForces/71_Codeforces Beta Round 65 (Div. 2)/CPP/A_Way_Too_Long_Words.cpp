/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****               71  A. Way Too Long Words               *****\*/
/*\*****************************************************************\*/

//    Codeforces Beta Round 65 (Div. 2)
//    Problem Link: 
//                    https://codeforces.com/contest/71/problem/A

/*
Problem Idea:
Sometimes words like "localization" or "internationalization" are very long. Writing them repeatedly is tiresome. Therefore, if a word is longer than 10 characters, it should be abbreviated. The abbreviation is made by writing the first and last letters of the word and the number of characters in between them.

Input:
- The first line contains an integer n (1 ≤ n ≤ 100), the number of words.
- Each of the following n lines contains a word consisting of lowercase Latin letters with lengths ranging from 1 to 100 characters.

Output:
- Print n lines. Each line should contain the abbreviation of the word if its length is more than 10 characters, otherwise, the word itself.

Example:
For input:
4
word
localization
internationalization
hi

Output:
word
l10n
i18n
hi
*/



#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int n; // Declare an integer to store the number of words
    string word; // Declare a string to store each word
    cin >> n; // Read the number of words from input
    while(n--) // Loop through each word
    {
        cin >> word; // Read the word from input
        if(word.length() > 10) // Check if the word length is greater than 10
        {
            // Output the abbreviation: first letter, number of middle characters, last letter
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
        else
        {
            // If the word is not too long, output it as is
            cout << word << endl;
        }
    }
    return 0;
}
