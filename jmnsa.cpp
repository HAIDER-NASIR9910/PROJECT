#include <iostream>
using namespace std;
class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};
class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};
int main() {
    Base *b = new Derived();
    b->show();
    delete b;
    return 0;
}


