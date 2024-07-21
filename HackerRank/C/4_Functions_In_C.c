#include <stdio.h>  // Include standard input/output library for input and output operations

int max_of_four(int a, int b, int c, int d) {
    int ans = 0;  // Initialize a variable 'ans' to store the maximum value

    // Check if 'a' is the largest:
    if (a > b && a > c && a > d) { 
        ans = a;  // If 'a' is the largest, store it in 'ans'
    } 

    // Check if 'b' is the largest: 
    else if (b > c && b > d) {
        ans = b;  // If 'b' is the largest, store it in 'ans'
    } 

    // Check if 'c' is the largest: 
    else if (c > d) {
        ans = c;  // If 'c' is the largest, store it in 'ans'
    } 

    // If none of 'a', 'b', or 'c' is the largest, then 'd' must be the largest
    else if (d) { 
        ans = d; 
    }

    return ans;   // Return the final maximum value stored in 'ans'
}


int main() {
    int a, b, c, d;  // Declare variables to store the four input integers

    scanf("%d %d %d %d", &a, &b, &c, &d);  // Read four integers from the user

    int ans = max_of_four(a, b, c, d);  // Call the function to find the maximum and store the result 

    printf("%d", ans);  // Print the maximum value

    return 0;   // Indicate successful program execution
}
