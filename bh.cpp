#include <iostream>
#include <algorithm>
using namespace std;


int values(int arr[], int low, int high) {
    int high_value = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] >= high_value) { 
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}


int quickselect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pi = values(arr, low, high);

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
    cout << "Enter the value: you want to check position of: " << endl;
    cout << "max is 10: " << endl;
    cin >> k;
    int size = 10; //= sizeof(a) / sizeof(a[0]); // size is 10: 
    cout << "The " << k << "-th largest element is " << kthLargest(a, size, k) << endl;
    return 0;
}
