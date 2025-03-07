/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                A. Say Hello With C++                  *****\*/
/*\*****************************************************************\*/

//    Problem: Given a name `S`, print a greeting message in the format: "Hello, <name>" without the parentheses.
//    Assiut Group; Sheet 1
//    Problem Link: 
//                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/A

/*
Problem Idea:
We are given a string `S` which represents a name. The task is to print a message that says "Hello, <name>", where <name> is replaced with the input string.

Input:
- A single line containing a string `S` which represents the name.

Output:
- Print "Hello, " followed by the input name, on one line.

Example:
1. Input:
   programmer
   Output:
   Hello, programmer

2. Input:
   world
   Output:
   Hello, world
*/

#include <bits/stdc++.h>  // Includes all standard C++ libraries for input/output operations
using namespace std;      // Using the standard namespace to avoid prefixing standard library functions with 'std::'

int main(){

    // Declare a string variable 's' to store the input name.
    string s;

    // Read the input name from the user and store it in the string variable 's'.
    cin >> s;

    // Print the greeting message "Hello, " followed by the value stored in 's' (the input name).
    // The 'endl' is used to move to the next line after printing the message.
    cout << "Hello, " << s << endl;

    // Return 0 to indicate that the program executed successfully.
    return 0;
}
