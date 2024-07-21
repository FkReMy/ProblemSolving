#include <stdio.h>   // Include standard input/output library
#include <string.h>  // Include string manipulation library
#include <math.h>    // Include math library (not used in this example)
#include <stdlib.h>  // Include standard library (not used in this example)

int main() {
    char ch;          // Declare a single character variable   
    char ca[100];     // Declare a character array to store strings up to 99 characters
    char s[100];      // Another character array for string storage

    scanf("%c\n", &ch);  // Read a single character and consume the newline

    scanf("%s", ca);  // Read an entire line of input (up to a newline) into 'ca' 

    scanf("%[^\n]c", s);   // Read another entire line of input (up to a newline) into 's'

    printf("%c\n", ch);   // Print the single character
    printf("%s\n", ca);   // Print the first input line
    printf("%s\n", s);    // Print the second input line

    return 0;             // Indicate successful program execution
}
