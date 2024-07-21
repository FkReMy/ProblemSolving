#include <stdio.h>   // For input/output operations (printf, scanf)
#include <string.h>  // For string functions (not directly used in this example)
#include <math.h>    // For math functions (not directly used in this example)
#include <stdlib.h>  // For standard library functions (not directly used in this example)


int main() {
    int a, b;  
    scanf("%d\n%d", &a, &b);  // Read two integers 'a' and 'b' from the user

    // Array to store string representations of numbers 1 to 9
    const char* numbers[] = {"one","two","three","four","five","six","seven","eight","nine"}; 

    // Loop from 'a' to 'b' (inclusive)
    for(int i=a; i <= b; i++) {
        if(i >= 1 && i <= 9) {
            printf("%s\n", numbers[i-1]);  // Print number name for values 1 to 9
        } else if(i > 9 && i % 2 == 0) {
            printf("even\n");            // Print "even" for even numbers greater than 9
        } else if(i > 9 && i % 2 == 1) {  
            printf("odd\n");             // Print "odd" for odd numbers greater than 9
        }
    }

    return 0;  // Indicate successful program termination 
}
