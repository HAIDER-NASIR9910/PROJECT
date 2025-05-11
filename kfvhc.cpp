#include <iostream>
using namespace std;

class test1 {
    int num1;
    int num2;

public:
    test1(int n1, int n2) : num1(n1), num2(n2) {}

    virtual void display() {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};

class test2 : public test1 {
    int num3;

public:
    test2(int n1, int n2, int n3) : test1(n1, n2), num3(n3) {}

    virtual void display() override {
        test1::display();
        cout << num3 << endl;
    }
};

class test3 : public test2 {
    int num4;

public:
    test3(int n1, int n2, int n3, int n4) : test2(n1, n2, n3), num4(n4) {}

    virtual void display() override {
        test2::display();
        cout << num4 << endl;
    }
};


int main()
{
	test1 *t1(0,0,0);
	test2 t2(0,0,0);
	t3=&t2;
	test3 t3(0,0,0);
	t3=&t3;

    return 0;
}

