#include <iostream>
#include <cstddef>

using namespace std;

class Singleton {
private:
    int data;
    static Singleton* ptr;

    // Private constructor to prevent instantiation
    Singleton() {}

    // Parameterized constructor
    Singleton(int d) {
        data = d;
    }

public:
    // Static function to create an instance
    static Singleton* createInstance(int d) {
        if (ptr == NULL) {
            ptr = new Singleton(d);
        }
        return ptr;
    }

    // Function to set the data
    void setData(int d) {
        data = d;
    }

    // Function to get the data
    int getData() {
        return data;
    }
};
Singleton* Singleton::ptr = NULL;  //error
int main()
{
    singleton *obj=singleton::createinstance;  //error
    return 0;
}

