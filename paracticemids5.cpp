#include <iostream>
using namespace std;

int search_char(char search, char arr[20], int index = 0) {
    if (arr[index] == '\0') {
        return 0;  // Base case: end of string
    } else if (search == arr[index]) {
        return 1 + search_char(search, arr, index + 1);  // Found the character
    } else {
        return search_char(search, arr, index + 1);  // Not found at this index
    }
}

int main() {
    char arr1[20] = "HAIDER NASIR";
    int x = search_char('A', arr1, 0);
    cout << x << endl;  // Output the count of 'A'

    return 0;
}

