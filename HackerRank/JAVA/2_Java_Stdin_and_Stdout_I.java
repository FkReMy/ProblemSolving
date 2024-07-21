import java.io.*;   // Import classes to handle input/output
import java.util.*; // Import utility classes, including the Scanner class

public class Solution {

    public static void main(String[] args) {

        // Create a Scanner object to read input from standard input (System.in)
        Scanner scanner = new Scanner(System.in); 

        // Read three integers from the user 
        int Intx = scanner.nextInt(); 
        int Inty = scanner.nextInt();
        int Intz = scanner.nextInt(); 

        // Close the Scanner to release resources 
        scanner.close();

        // Print the input integers to the console
        System.out.println(Intx); 
        System.out.println(Inty);
        System.out.println(Intz);
    }
}
