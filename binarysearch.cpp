#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int main() {
    int numbers[] = {2, 5, 8, 12, 16, 23, 38, 45, 56};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 23;

    int index = binarySearch(numbers, size, target);

    if (index != -1)
        cout << "Found at index: " << index << endl;
    else
        cout << "Not found." << endl;

    return 0;
}

