#include <stdio.h>   // Include standard input/output library
#include <string.h>  // Include string manipulation library 
#include <math.h>    // Include math library (not used in this example)
#include <stdlib.h>  // Include standard library (not used in this example)

int main() {
    char s[100];      // Declare a character array to store a string of up to 99 characters

    scanf("%[^\n]c", s);  // Read a string from the user until a newline is encountered 

    printf("Hello, World!\n%s", s);  // Print "Hello, World!" followed by the entered string

    return 0;   // Indicate successful program execution
}
