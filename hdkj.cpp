#include <iostream>
using namespace std;

class test {
private:
    int num1;
    int num2;

public:
    void setdata(int n1, int n2) {
        num1 = n1;
        num2 = n2;
        cout << "YOUR NUM1 IS: " << num1 << endl;
        cout << "YOUR NUM2 IS: " << num2 << endl;
    }
    test operator+( test t2) {
        test t3;
        t3.num1 = num1 + t2.num1;
        t3.num2 = num2 + t2.num2;
        return t3;
    }
    void display() {
        cout << "SUM OF NUM1 IS: " << num1 << endl;
        cout << "SUM OF NUM2 IS: " << num2 << endl;
    }
};

int main() {
    test t1, t2;
    t1.setdata(2, 3);
    t2.setdata(3, 4);
    test sum = t1 + t2;    // Direct initialization
    sum.display();
    return 0;
}

