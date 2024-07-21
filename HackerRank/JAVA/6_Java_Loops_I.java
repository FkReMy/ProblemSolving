import java.io.*;      // Classes for input and output operations.
import java.math.*;    // Classes for advanced mathematical operations (not used in this example).
import java.security.*; // Classes for cryptography and security (not used in this example).
import java.text.*;    // Classes for formatting and parsing dates and numbers (not used in this example).
import java.util.*;    // Various utility classes like Scanner, lists, etc.
import java.util.concurrent.*; // Classes for multithreading (not used in this example).
import java.util.function.*;   // Classes for functional programming (not used in this example).
import java.util.regex.*;   // Classes for regular expressions (not used in this example).
import java.util.stream.*;  // Classes for stream-based operations.
import static java.util.stream.Collectors.joining; 
import static java.util.stream.Collectors.toList;  // Import static methods for Stream operations

public class Solution {

    public static void main(String[] args) throws IOException { 
        // Create a Buffered Reader for efficient input handling
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        // Read an integer 'N' from the user and remove any leading/trailing whitespace
        int N = Integer.parseInt(bufferedReader.readLine().trim()); 

        // Close the BufferedReader to release resources
        bufferedReader.close();

        // Loop to calculate and print multiplication table for 'N' 
        for(int i = 1; i <= 10; i++) { 
            int out = N * i; 
            // Print the result using formatted output
            System.out.printf("%d x %d = %d\n", N, i, out); 
        }
    }
}
