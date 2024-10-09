#include <iostream>
using namespace std;
void func1(char arr[13], int index = 0) {
    if (arr[index] == '\0') {
        return;
    } else {
        cout << arr[index] << endl;
        func1(arr, index + 1);
    }
}

int main() {
    char arr1[13] ="haider nasir";
    func1(arr1);
    return 0;
}

