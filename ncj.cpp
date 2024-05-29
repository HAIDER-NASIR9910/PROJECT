#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "ENTER THE NUMBER TO CHECK WHETHER IT IS AN ARMSTRONG NUMBER: ";
    cin >> num;

    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == originalNum) {
        cout << originalNum << " is an Armstrong number." << endl;
    } else {
        cout << originalNum << " is not an Armstrong number." << endl;
    }

    return 0;
}

