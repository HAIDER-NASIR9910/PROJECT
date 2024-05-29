#include <iostream>
using namespace std;

int findKthLargest(int arr[], int size, int k) {
    int maxIndex;
    for (int j = 0; j < k; j++) {
        int max = INT_MIN;
        for (int i = 0; i < size; i++) {
            if (arr[i] > max) {
                max = arr[i];
                maxIndex = i;
            }
        }
    
        if (j == k - 1) {
            return max;
        } else {
            arr[maxIndex] = INT_MIN;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {22, 3, 9, 17, 34, 156, 203, 123, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Largest values: " << endl;
    for (int k = 1; k <= 5; k++) {
        int kthLargest = findKthLargest(arr, size, k);
        cout << k << "th largest value: " << kthLargest << endl;
    }

    return 0;
}

