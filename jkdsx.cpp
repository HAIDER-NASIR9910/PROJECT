#include <iostream>
using namespace std;
class Base {
public:
    virtual void show() = 0;
};
class Derived : public Base {
public:
    void show() {
        cout << "Derived show()" << endl;
    }
};
int main() {
    Base *b = new Derived();
    b->show();
    delete b;
    return 0;
}


