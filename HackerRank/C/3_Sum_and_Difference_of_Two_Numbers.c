#include <stdio.h>   // Include standard input/output library
#include <string.h>  // Include string manipulation library
#include <math.h>    // Include math library (not used in this example)
#include <stdlib.h>  // Include standard library (not used in this example)

int main()
{
    int i, j;       // Declare two integer variables, 'i' and 'j'
    float f, g;     // Declare two floating-point variables, 'f' and 'g'

    scanf("%d %d", &i, &j);  // Read two integer values from the user and store them in 'i' and 'j'

    scanf("%f %f", &f, &g);  // Read two floating-point values from the user and store them in 'f' and 'g'

    printf("%d %d\n", i+j, i-j); // Print the sum and difference of 'i' and 'j', separated by spaces

    printf("%0.1f %0.1f\n", f+g, f-g); // Print the sum and difference of 'f' and 'g' with one decimal place 

    return 0;  // Indicate successful program execution
}

