
#include <iostream>
using namespace std;

class test {
private:
    int num;

public:
    void get() {
        cout << "ENTER THE NUM" << endl;
        cin >> num;
    }

    void display(); // Declare display function
};

void test::display() {
    cout << "ENTERED NUM IS: " << num << endl;
}

int main() {
    test t;
    t.get();
    t.display();
    return 0;
}

