
#include <iostream>
using namespace std;

void number(int num) {
    if (num <= 0) {
        return;
    } else {
        number(num - 1);
        cout << num<<endl;  // Print num after recursive call
    }
}

int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    number(n);
    return 0;
}

