// it is static type
#include <iostream>
using namespace std;
int main() {
    int arr[2][2];

    // Input array elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Enter element"<<endl;
            cin >> arr[i][j];
        }
    }

    // Display array elements (optional)
    cout << "Array elements:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


