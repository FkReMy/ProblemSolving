import java.io.*;      // Classes for input and output operations
import java.util.*;    // Includes the Scanner class for user input 

public class Solution {

  public static void main(String[] args) {
      /* This block is where you'll write your code. 
         Input is read from standard input (STDIN) and output is sent to standard output (STDOUT) 
      */

      Scanner scanner = new Scanner(System.in);  // Create a Scanner object

      System.out.println("================================");  // Print a formatting line

      for(int i=0; i<3 ;i++) {  // Loop 3 times to read three sets of input 
          String S = scanner.next();       // Read a string
          int j = scanner.nextInt();       // Read an integer 

          /* Print the input using formatting similar to C's printf */
          System.out.printf("%-15s%03d\n", S , j ); 
      }

      System.out.println("================================"); // Print another formatting line
  }
}
