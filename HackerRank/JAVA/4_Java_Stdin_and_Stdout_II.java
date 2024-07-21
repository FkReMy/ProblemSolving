import java.io.*;      // Import classes for input/output operations
import java.util.*;    // Import the Scanner class for reading user input

public class Solution {

    public static void main(String[] args) {
        /* This block is where you'll write your code. 
           Java reads input from standard input (STDIN) and prints to standard output (STDOUT) 
        */

        Scanner scanner = new Scanner(System.in); // Create a Scanner to read from standard input

        int I = scanner.nextInt();        // Read an integer and store it in 'I'
        double D = scanner.nextDouble();  // Read a double-precision number and store it in 'D' 
        scanner.nextLine();               // Consume the leftover newline character

        String S = scanner.nextLine();    // Read an entire line of text and store it in 'S'

        scanner.close();                  // Close the Scanner to release resources 

        System.out.println("String: " + S); // Print the String 'S'
        System.out.println("Double: " + D); // Print the double 'D' 
        System.out.println("Int: " + I);    // Print the integer 'I' 
    }
}
