#include <iostream>
using namespace std;

class test {
private:
    int num1;
    int num2;

public:
    test() {}
    test(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    int getnum1() {
        return num1;
    }

    int getnum2() {
        return num2;
    }

    void setnum1(int n1) {
        num1 = n1;
    }

    void setnum2(int n2) {
        num2 = n2;
    }

    void print() {
        cout << "NUM1 IS: " << num1 << endl;
        cout << "NUM2 IS: " << num2 << endl;
        }
};

class employee {
private:
    int income;

public:
    employee() {}
    employee(int i) {
        income = i;
    }

    int getincome() {
        return income;
    }
};

test operator+(test t1, test t2) {
    test t3(t1.getnum1() + t2.getnum1(), t1.getnum2() + t2.getnum2());
    return t3;
}

test operator-(test t1, test t2) {
    test t3(t1.getnum1() - t2.getnum1(), t1.getnum2() - t2.getnum2());
    return t3;
}

test operator+(employee e1, test t1) {
    test t4(e1.getincome() + t1.getnum1(), e1.getincome() + t1.getnum2());
    return t4;
}


int main() {
    test t1(5, 6);
    t1.print();

    test t2(5, 6);

    test t3 = t1 + t2;
    t3.print();

    test t4 = t1 - t2;
    t4.print();

    employee e1(20000);
    test t5 = e1 + t1;
    t5.print();

    return 0;
}



