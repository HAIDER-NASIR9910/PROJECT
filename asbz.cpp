#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] >= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quickselect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);

        if (pi == k - 1)
            return arr[pi];

        if (pi > k - 1)
            return quickselect(arr, low, pi - 1, k);

        return quickselect(arr, pi + 1, high, k);
    }
    return -1;
}

int kthLargest(int arr[], int size, int k) {
    return quickselect(arr, 0, size - 1, k);
}

int main() {
    int k;
    int a[] = {22, 3, 9, 17, 34, 156, 203, 123, 6, 4};
    int size = sizeof(a) / sizeof(a[0]); // Calculate size of array
    cout << "Enter the position (1-based) of the largest element you want to find: ";
    cin >> k;

    if (k <= 0 || k > size) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    int kth_largest = kthLargest(a, size, k);
    cout << "The " << k << "-th largest element is " << kth_largest << endl;

    cout << "Array sorted from highest to lowest: ";
    for (int i = 0; i < size; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

