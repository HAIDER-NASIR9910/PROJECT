

#include <iostream>
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }
}

int main() {
    int size;

    // Prompt user for array size
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate memory for the array
    int* arr = new int[size];

    // Prompt user for array elements
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Print array elements
    printArray(arr, size);

    // Deallocate memory to prevent memory leak
    delete[] arr;

    return 0;
}


