#include <bits/stdc++.h> 
#include <cmath>    
using namespace std; 

int main() {
    int n; // Declare an integer to store the upper limit of the range

    cin >> n; // Read the upper limit from input

    for (int i = 1; i <= n; i++) { // Loop through numbers from 1 to n
        if (i <= 1) { // Check if the number is 1 or less
            cout << i << " is not prime" << endl;
        } else {
            bool is_prime = true; // Assume the number is prime

            // Loop from 2 to sqrt(i) to check for factors
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) { // If i is divisible by j, it's not prime
                    is_prime = false; // Mark as not prime
                    break; // Exit the loop as we found a factor
                }
            }

            if (is_prime) { // If the number is still marked as prime
                cout << i << " is prime" << endl;
            } else { // If the number was marked as not prime
                cout << i << " is not prime" << endl;
            }
        }
    }

    return 0;
}