#include <iostream>
#include <algorithm>
using namespace std;

void func1(int arr[], int size, int k) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << "   ";
    }
    cout << endl;

    k = arr[size - 1]; // Start with the largest element after sorting
    for(int j = 0; j < 5; j++) {
        int currentMax = INT_MIN;
        for(int i = 0; i < size; i++) {
            if(arr[i] > currentMax && arr[i] < k) {
                currentMax = arr[i];
            }
        }
        k = currentMax;
        cout << (j+1) << "th largest value: " << k << endl;
    }
}

int main() {
    int arr[] = {22, 3, 9, 17, 34, 156, 203, 123, 6, 4};
    int size = 10;
    sort(arr, arr + size);

    int k = arr[0];
    func1(arr, size, k);

    return 0;
}

