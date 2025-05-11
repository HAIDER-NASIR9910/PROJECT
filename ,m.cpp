#include <iostream>
using namespace std;

int hash_func(int a) {
    return a % 5;
}

void print(int arr[]) {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int v1 = 50;
    int v2 = 25;
    int arr[5] = {};
    int arr2[5] = {};
    
    int idx = hash_func(v1);
    int idx1 = hash_func(v2);

    if (arr[idx] == NULL) {
        arr[idx] = v1;
        arr2[idx] = v1; // store in arr2 as well
        if (arr[idx] != NULL) {
            arr[idx1] = v2;
            arr2[idx1] = v2; // store in arr2 as well
        }
    }

    cout << "Array 1:" << endl;
    print(arr);
    cout << "\nArray 2:" << endl;
    print(arr2);

    return 0;
}

