#include <assert.h>  // For assertions, used for debugging
#include <limits.h>  // Defines limits of integer types
#include <math.h>    // For mathematical functions
#include <stdbool.h> // For boolean data types (true/false)
#include <stddef.h>  // For standard type definitions (like size_t)
#include <stdint.h>  // For specific integer types
#include <stdio.h>   // For input and output functions
#include <stdlib.h>  // For memory allocation and utility functions
#include <string.h>  // For string manipulation functions 

char* readline();


int main() {
    char* n_endptr;  
    char* n_str = readline();    // Read a string containing a number
    int n = strtol(n_str, &n_endptr, 10);  // Convert the string to an integer

    // Error checking in case the conversion fails
    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); } 

    // Array to hold the string representations of numbers
    const char* numbers[] = {"one","two","three","four","five","six","seven","eight","nine"};

    // Logic to print the word representation
    if(n >= 1 && n <= 9) {
        printf("%s\n", numbers[n-1]); 
    } else {
        printf("Greater than 9");
    }

    return 0; 
}



char* readline() {
    size_t alloc_length = 1024;  // Initial memory allocation
    size_t data_length = 0;      // Tracks length of input data
    char* data = malloc(alloc_length);  // Allocate initial memory

    while (true) { 
        char* cursor = data + data_length;   // Pointer to where the next input will be added
        char* line = fgets(cursor, alloc_length - data_length, stdin); // Read a line from input

        if (!line) { break; }  // Exit loop if input reading fails

        data_length += strlen(cursor);   // Update the length of the data

        // Check if we need more memory or if the input has a newline ('\n')
        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;  // Double the allocated memory
        data = realloc(data, new_length);    // Reallocate the memory

        if (!data) { break; }  // Exit if memory allocation fails

        alloc_length = new_length;  // Update allocation size
    }

    if (data[data_length - 1] == '\n') {   // Remove trailing newline, if present
        data[data_length - 1] = '\0';    
    }

    data = realloc(data, data_length);  // Resize memory to fit the input string 

    return data;  // Return the pointer to the input string
}
