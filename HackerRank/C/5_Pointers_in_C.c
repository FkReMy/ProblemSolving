#include <stdio.h>  // Include standard input/output library for input and output operations

void update(int *a, int *b) {
    // Calculate the sum and difference of the values pointed to by 'a' and 'b'
    int add = *a + *b; 
    int sub = *a - *b;

    // Ensure the difference is positive (calculate absolute value)
    if(sub < 0) {
        sub = -sub;
    }

    // Update the values pointed to by 'a' and 'b'
    *a = add; 
    *b = sub; 
}

int main() {
    int a, b;   
    int *pa = &a, *pb = &b;  // Create pointers to 'a' and 'b' 

    scanf("%d %d", &a, &b);  // Read input values for 'a' and 'b'
    update(pa, pb);          // Update values using the update function
    printf("%d\n%d", a, b);  // Print the updated values

    return 0;
}
