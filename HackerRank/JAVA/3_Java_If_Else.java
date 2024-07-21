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
import static java.util.stream.Collectors.toList; //  Import static methods for Stream operations 


public class Solution {
       public static void main(String[] args) throws IOException {
        // Create a Buffered Reader to handle input efficiently
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
    
        // Read an integer input from the user and remove extra whitespace
        int N = Integer.parseInt(bufferedReader.readLine().trim());
    
        //  Close the BufferedReader to release resources
        bufferedReader.close();
    
        // Variable to store the output
        String out =" ";
    
        // If the number is odd
        if(N%2==1) {
            out="Weird";
        } 
        // If the number is even
        else { 
            // Logic to determine if it's "Weird" or "Not Weird" based on ranges
            if(2 <= N && N <= 5) {
                out="Not Weird";
            } else if(6 <= N && N <= 20) {
                out="Weird";
            } else if(N > 20) { 
                out="Not Weird";
            } 
        }
    
        // Print the final output
        System.out.println(out); 
    }

}
