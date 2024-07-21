import java.io.*;   // Classes for input and output operations
import java.util.*; // Includes the Scanner class for user input 

public class Solution {

public static void main(String[] args) {
    /* This is where you'll put your code. 
       Input is read from standard input (STDIN) and output is sent to standard output (STDOUT) 
    */

    /* Read Queries */ 
    Scanner scanner = new Scanner(System.in); 
    int q = scanner.nextInt(); // Read the number of queries

    /* Process Queries */ 
    for(int i=0; i<q ;i++) {  
        /* Read 'a', 'b', and 'n' for a single query */
        int a = scanner.nextInt(); 
        int b = scanner.nextInt();
        int n = scanner.nextInt();

        /* Calculate and Print Series Terms */
        for(int j=0; j<n; j++) {
            a = a + ((int)Math.pow(2,j) * b); // Calculate the series term
            System.out.printf("%d ", a);       // Print the term followed by a space
        } 

        System.out.println(); // Print a newline after each query's results
    }
}
}
