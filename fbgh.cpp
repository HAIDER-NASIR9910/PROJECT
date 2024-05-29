#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number = 153;
    int originalNumber = number; // Store the original number for reference

    cout << "Separating the digits of " << number << " and taking the cube:" << endl;

    // Loop to separate digits
    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        cout << digit << " "; // Output the digit

        number /= 10; // Remove the last digit
    }

    // Calculate the cube of the original number
    int cube = pow(originalNumber, 3);
    cout << endl;
    cout << "Cube of " << originalNumber << " is: " << cube << endl;

    return 0;
}

