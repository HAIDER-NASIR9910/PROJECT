#include <iostream>
using namespace std;
class A {
public:
    A() {
        cout << "A Constructor" << endl;
    }
    virtual ~A() {
        cout << "A Destructor" << endl;
    }
};
class B : public A {
public:
    B() {
        cout << "B Constructor" << endl;
    }
    ~B() {
        cout << "B Destructor" << endl;
    }
};
int main() {
    A *a = new B();
    //delete a;
    return 0;
}


