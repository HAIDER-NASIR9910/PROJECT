#include <iostream>
using namespace std;
class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};
class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows" << endl;
    }
};
int main() {
    Animal *a = new Cat();
    a->speak();
    delete a;
    return 0;
}


