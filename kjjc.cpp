// C++ Implementation of Towers of Hanoi Problem with Visualization
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to display the pegs and disks
void displayPegs(vector<vector<int>> &pegs, int numDisks) {
    for (int i = numDisks - 1; i >= 0; i--) {
        for (int peg = 0; peg < 3; peg++) {
            if (i < pegs[peg].size()) {
                int diskSize = pegs[peg][i];
                cout << string(numDisks - diskSize, ' ') << string(diskSize * 2 - 1, '-') << string(numDisks - diskSize, ' ');
            } else {
                cout << string(numDisks, ' ') << "|" << string(numDisks, ' ');
            }
            cout << "  ";
        }
        cout << endl;
    }
    cout << string(numDisks * 2 - 1, '=') << "  "
         << string(numDisks * 2 - 1, '=') << "  "
         << string(numDisks * 2 - 1, '=') << endl;
}

// Recursive function for Towers of Hanoi with visualization
void towersOfHanoiRecursive(int n, int source, int auxiliary, int destination, vector<vector<int>> &pegs, int numDisks) {
    if (n == 1) {
        // Move the disk
        int disk = pegs[source].back();
        pegs[source].pop_back();
        pegs[destination].push_back(disk);

        // Display the move
        cout << "Move disk " << disk << " from peg " << source + 1 << " to peg " << destination + 1 << endl;
        displayPegs(pegs, numDisks);
        return;
    }

    towersOfHanoiRecursive(n - 1, source, destination, auxiliary, pegs, numDisks);

    // Move the nth disk
    int disk = pegs[source].back();
    pegs[source].pop_back();
    pegs[destination].push_back(disk);

    cout << "Move disk " << disk << " from peg " << source + 1 << " to peg " << destination + 1 << endl;
    displayPegs(pegs, numDisks);

    towersOfHanoiRecursive(n - 1, auxiliary, source, destination, pegs, numDisks);
}

int main() {
    int numDisks;

    cout << "Enter the number of disks: ";
    cin >> numDisks;

    // Initialize pegs
    vector<vector<int>> pegs(3);
    for (int i = numDisks; i >= 1; i--) {
        pegs[0].push_back(i);
    }

    cout << "\nInitial State:\n";
    displayPegs(pegs, numDisks);

    cout << "\nRecursive Solution with Visualization:\n";
    towersOfHanoiRecursive(numDisks, 0, 1, 2, pegs, numDisks);

    return 0;
}
