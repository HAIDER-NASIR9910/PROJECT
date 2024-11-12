#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    string sound;

public:
    virtual void sedata(string nam, string so) {
        name = nam;
        sound = so;
    }

    virtual void print() {
        cout << "ANIMAL IS : " << name << endl;
        cout << "SOUND OF THE ANIMAL IS : " << sound << endl;
    }
};

class cat : public Animal {
    // No need to override sedata and print unless behavior changes
};

class dog : public cat {
public:
    void print() override {
        // Fixed the extra colon here
        cout << "ANIMAL IS : " << name << endl;
        cout << "SOUND OF THE ANIMAL IS : " << sound << endl;
    }
};

int main() {
    cat c1;
    c1.sedata("Cat", "Meow");
    c1.print();

    dog d1;
    d1.sedata("Dog", "Bark");
    d1.print();

    return 0;
}

