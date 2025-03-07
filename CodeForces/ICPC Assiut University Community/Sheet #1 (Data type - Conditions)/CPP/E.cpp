/*\*****************************************************************\*/
/*\*****                @author  AhmedFekry@VIV                *****\*/
/*\*****               https://github.com/FkReMy               *****\*/
/*\*****                E. Area of a Circle                    *****\*/
/*\*****************************************************************\*/

//    Problem: Given the radius (R) of a circle, calculate its area using the formula: Area = π * R^2.
//    Assiut Group; Sheet 1
//    Problem Link: 
//                    https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

/*
Problem Idea:
We are given the radius `R` of a circle, and we need to calculate the area of the circle using the formula:
Area = π * R^2. The value of π is approximated to 3.141592653.
The result should be printed with exactly 9 digits after the decimal point.

Input:
- A single number R representing the radius of the circle (1 ≤ R ≤ 100).

Output:
- Print the area of the circle with exactly 9 digits after the decimal point.

Examples:
1. Input:
   2.00
   Output:
   12.566370612

2. Input:
   10.00
   Output:
   314.159265300
*/

#include <bits/stdc++.h>   // Includes all standard C++ libraries for I/O operations and mathematical computations.
using namespace std;       // Use the standard namespace to avoid prefixing functions with 'std::'.

// Main function to calculate the area of the circle
int main() {

    // Initialize the value of pi (π) as given in the problem statement.
    // The value is set to an approximation of pi with 9 decimal places.
    double pi = 3.141592653;

    // Declare a variable 'r' of type 'double' to store the radius of the circle.
    // 'double' is used to handle decimal inputs, as the radius can be a floating-point number.
    double r;

    // Read the radius 'r' from the input.
    // The user will provide the radius of the circle, and we store it in the variable 'r'.
    cin >> r;

    // Calculate the area of the circle using the formula: Area = π * r^2.
    // We multiply the radius 'r' by itself (r * r) to compute the square, and then multiply by pi.
    double area = r * r * pi;

    // To print the area with exactly 9 digits after the decimal point, we use the 'setprecision' function from the 'iomanip' library.
    // The 'fixed' manipulator ensures that the result is printed in fixed-point notation (i.e., with decimal places).
    // 'setprecision(9)' specifies that exactly 9 digits should appear after the decimal point.
    cout << fixed << setprecision(9) << area << endl;

    // Alternative C-style printf method (commented out for demonstration):
    // printf("%0.9f\n", area);
    // This method can also be used for formatted output, but here we are sticking to the C++ I/O style.

    // Return 0 to indicate that the program executed successfully.
    return 0;  
}
