#include <iostream>
#include <string>

using namespace std;


void printName(const string& nam, int index = 0) {
    if (index == nam.length()) {
        return;
    }
    cout << nam[index] << endl;
    printName(nam, index + 1);
}


void printReverse(const string &nam, int index = 0) {
    if (index == nam.length()) {
        return;
    }
    printReverse(nam, index + 1);
    cout << nam[index] << endl;
}

int main() {
    string name;
    cout << "ENTER THE NAME" << endl;
    getline(cin, name);
    cout << "YOU ENTERED: " << endl;
    printName(name);

    cout << "REVERSE OF THE NAME: " << endl;
    printReverse(name,1);

    return 0;
}

