#include <iostream>
using namespace std;

int main() {
    int arr[2][3][3];

    // Input values into the 3D array
    cout << "Enter values for the matrices:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Matrix " << i + 1 << ":" << endl;
        for (int k = 0; k < 3; k++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][k][j];
            }
        }
    }

    // Display the values in the 3D array
    cout << "\nThe matrices are:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Matrix " << i + 1 << ":" << endl;
        for (int k = 0; k < 3; k++) {
            for (int j = 0; j < 3; j++) {
                cout << arr[i][k][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Display the matrices with spaces for better readability
    cout << "The matrices with spaces:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Matrix " << i + 1 << ":" << endl;
        for (int k = 0; k < 3; k++) {
            for (int j = 0; j < 3; j++) {
                cout << arr[i][k][j] << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Sum the two matrices and display the result
    cout << "SUM OF MATRICES:" << endl;
    for (int k = 0; k < 3; k++) {
        for (int j = 0; j < 3; j++) {
            arr[0][k][j] += arr[1][k][j];
            cout << arr[0][k][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}

