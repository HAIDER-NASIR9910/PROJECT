#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0 || n == 1) { // Base case
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "ENTER THE NUMBER OF TERMS" << endl;
    cin >> n;

    cout << "FIBONACCI SERIES: " << endl;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}


