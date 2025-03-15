/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                  127  A. Wasted Time                  *****\*/
/*\*****************************************************************\*/

//    Codeforces Beta Round 93 (Div. 2 Only)
//    Problem Link: 
//                    https://codeforces.com/contest/127/problem/A

/*
Problem Idea:
Mr. Scrooge wants to count the total time he has wasted signing papers. His signature is represented as a polyline A1A2...An, where he moves the pen from point A1 to A2, then A2 to A3, and so on, never lifting the pen off the paper. The speed of signing is constant at 50 millimeters per second. Given the coordinates of the points in his signature and the number of papers he has signed, we need to calculate the total time he has spent signing all the papers.

Input:
- Two integers n and k (2 ≤ n ≤ 100, 1 ≤ k ≤ 1000): the number of points in the polyline and the number of papers signed.
- n lines each containing two integers xi and yi: the coordinates of the points of the polyline.

Output:
- A single real number representing the total time wasted, accurate to within an absolute or relative error of 10^-6.

Example:
For n = 3, k = 2, and points (0,0), (0,1), (1,1):
The total distance is the perimeter of the polyline times the number of papers, divided by the signing speed.
*/



#include <bits/stdc++.h> 
#include <cmath> 
using namespace std;

int main() {
    
    int n, k; // Declare variables to store the number of points and the number of papers
    cin >> n >> k; // Read the number of points and the number of papers

    double x0, x, y0, y, totalDis = 0; // Declare variables to store coordinates and total distance

    // Read the first point coordinates
    cin >> x0 >> y0;

    // Loop through the remaining n-1 points
    while(--n) {
        // Read the next point coordinates
        cin >> x >> y;

        // Calculate the distance from the previous point (x0, y0) to the current point (x, y)
        totalDis += sqrt(((x - x0) * (x - x0)) + ((y - y0) * (y - y0)));

        // Update the previous point to the current point
        x0 = x;
        y0 = y;
    }

    // Calculate the total time wasted signing k papers
    double totalTime = totalDis * k / 50;

    // Print the total time with a precision of 9 decimal places
    printf("%10.9f\n", totalTime);

    return 0;
}
