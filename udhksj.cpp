// C++ Implementation of Towers of Hanoi Problem
#include <iostream>
using namespace std;

// Recursive function for Towers of Hanoi
void towersOfHanoiRecursive(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary
    towersOfHanoiRecursive(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move the n-1 disks from auxiliary to destination
    towersOfHanoiRecursive(n - 1, auxiliary, source, destination);
}

// Iterative function for Towers of Hanoi
void towersOfHanoiIterative(int n) {
    struct Move {
        char from;
        char to;
    };

    char pegs[3] = {'A', 'B', 'C'}; // Source, Auxiliary, Destination

    // Total number of moves is 2^n - 1
    int totalMoves = (1 << n) - 1;

    for (int i = 1; i <= totalMoves; i++) {
        int fromPeg = (i & i - 1) % 3;
        int toPeg = ((i | i - 1) + 1) % 3;

        cout << "Move disk from " << pegs[fromPeg] << " to " << pegs[toPeg] << endl;
    }
}

int main() {
    int numDisks;

    cout << "Enter the number of disks: ";
    cin >> numDisks;

    cout << "\nRecursive Solution:\n";
    towersOfHanoiRecursive(numDisks, 'A', 'B', 'C');

    cout << "\nIterative Solution:\n";
    towersOfHanoiIterative(numDisks);

    return 0;
}

