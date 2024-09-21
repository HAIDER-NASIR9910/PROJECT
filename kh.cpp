#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    cout << *ptr << endl; // Prints 1
    cout << *++ptr << endl; // Prints 2
    cout << *(ptr + 1) << endl; // Prints 3
    cout << *(ptr + 2) << endl; // Prints 4
     cout << *(ptr + 3) << endl; // This would be out of bounds
}
    
