#include <iostream>
using namespace std;

int main() {
    string fullName;
    cout << "ENTER THE FULL NAME (e.g., John Doe Smith):" << endl;
    getline(cin, fullName); // Read the full name

    cout << "FIRST CHARACTERS OF EACH NAME:" << endl;

    // Print the first character of the first name
    if (!fullName.empty()) {
        cout << fullName[0] << endl; // First character of the first name
    }

    // Loop through the full name to find spaces
    for (int i = 1; i < fullName.length(); i++) {
        // Check for a space
        if (fullName[i] == ' ') {
            // If a space is found, print the next character
            if (i + 1 < fullName.length()) { // Ensure there's a character after the space
                cout << fullName[i + 1] << endl; // First character of the next name
            }
        }
    }

    return 0;
}


