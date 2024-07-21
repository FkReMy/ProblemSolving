#include <stdio.h>   // For input/output operations (printf, scanf)
#include <string.h>  // For string functions (not directly used in this example)
#include <math.h>    // For math functions (not directly used in this example)
#include <stdlib.h>  // For standard library functions (not directly used in this example)

//soved by automatic truncation
int main() {
    int n;  
    scanf("%d", &n);          // Read an integer input from the user

    short int digits = 0;     // Variable to store the sum of digits (short int is enough)
    //our digits are only from 0 to 9 so dont need more than 16bits

    while (n > 0) {
        digits += n % 10;     // Extract the last digit and add it to 'digits'
        n /= 10;              // Remove the last digit from the number
    }

    printf("%d", digits);     // Print the calculated sum of digits
    return 0;                 // Indicate successful program termination
}
