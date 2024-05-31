#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Base class
class Item {
protected:
    string itemName;
    int rate;
    int quantity;

public:
    Item() : itemName(""), rate(0), quantity(0) {}

    void setItem(const string& item) {
        itemName = item;
    }

    void setRate(int rate) {
        this->rate = rate;
    }

    void setQuant(int quant) {
        quantity = quant;
    }

    string getItem() const {
        return itemName;
    }

    int getRate() const {
        return rate;
    }

    int getQuant() const {
        return quantity;
    }

    virtual void display() const {
        cout << "\t" << itemName << " : " << rate << " : " << quantity << endl;
    }
};

// Derived class
class Bill : public Item {
public:
    Bill() : Item() {}

    void display() const override {
        cout << "\tBill Item - " << itemName << " : " << rate << " : " << quantity << endl;
    }
};

void clearScreen() {
    cout << "\033[2J\033[1;1H";  // ANSI escape code to clear the screen
}

void addItem(vector<Bill>& items) {
    bool close = false;
    while (!close) {
        int choice;
        cout << "\t1. Add." << endl;
        cout << "\t2. Close." << endl;
        cout << "\tEnter Choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character after integer input

        if (choice == 1) {
            clearScreen();
            Bill b;
            string item;
            int rate, quant;

            cout << "\tEnter Item Name: ";
            getline(cin, item);
            cin.ignore(); 
            b.setItem(item);

            cout << "\tEnter Rate Of Item: ";
            cin >> rate;
            cin.ignore(); // Clear the newline character from the input buffer
            b.setRate(rate);

            cout << "\tEnter Quantity Of Item: ";
            cin >> quant;
            cin.ignore(); // Clear the newline character from the input buffer
            b.setQuant(quant);

            items.push_back(b);

            cout << "\tItem Added Successfully" << endl;
        } else if (choice == 2) {
            clearScreen();
            close = true;
            cout << "\tBack To Main Menu!" << endl;
        }
    }
}

void listItems(const vector<Bill>& items) {
    cout << "\tAvailable Items:" << endl;
    for (const auto& item : items) {
        item.display();
    }
}

void buyItem(vector<Bill>& items) {
    clearScreen();
    bool close = false;
    while (!close) {
        listItems(items);
        cout << endl;

        int choice;
        cout << "\t1. Buy Item." << endl;
        cout << "\t2. Close." << endl;
        cout << "\tEnter Choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character after integer input

        if (choice == 1) {
            clearScreen();
            listItems(items);
            cout << endl;

            string item;
            int quant;
            cout << "\tEnter Item: ";
            getline(cin, item);
            cin.ignore();
            
            bool found = false;
            for (auto& b : items) {
                if (b.getItem() == item) {
                    found = true;
                    cout << "\tEnter Quantity: ";
                    cin >> quant;
                    cin.ignore(); // Clear the newline character from the input buffer

                    if (quant <= b.getQuant()) {
                        int amount = b.getRate() * quant;
                        cout << "\tItem | Rate | Quantity | Amount" << endl;
                        cout << "\t" << b.getItem() << "\t" << b.getRate() << "\t" << quant << "\t" << amount << endl;
                        b.setQuant(b.getQuant() - quant);

                        ofstream out("bill.txt", ios::app);
                        if (!out) {
                            cout << "\tError: File Can't Open!" << endl;
                        } else {
                            out << b.getItem() << " : " << b.getRate() << "   :  " << quant << "    :   " << amount << endl;
                        }
                        out.close();
                    } else {
                        cout << "\tSorry, " << item << " Ended!" << endl;
                    }
                }
            }
            if (!found) {
                cout << "\tItem Not Available!" << endl;
            }
        } else if (choice == 2) {
            close = true;
            cout << "\tClosing Session..." << endl;
        }
    }
}

//void printBill() {
    //clearScreen();
    //ifstream in("bill.txt");
    //if (!in) {
      //  cout << "\tError: File Can't Open!" << endl;
        //return;
    //}
    //cout << "\tItem | Rate | Quantity | Amount" << endl;
    //string line;
    //while (getline(in, line)) {
     //   cout << line << endl;
    //}
    //in.close();
    //cout << "\tBill Printed Successfully!" << endl;
//}
void print() {
    std::ifstream file("bill.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return;
    }
 cout << "\tItem | Rate | Quantity | Amount" << endl;
    std::string line;
    while (std::getline(file, line)) {
        std::cout << "\t"<<line << std::endl;
    }

    file.close();
}


int main() {
    vector<Bill> items;
    bool exit = false;
    while (!exit) {
        // clearScreen();
        int val;

        cout << "\tWelcome To Super Market Billing System" << endl;
        cout << "\t**" << endl;
        cout << "\t\t1. Add Item." << endl;
        cout << "\t\t2. Buy Item." << endl;
        cout << "\t\t3. Print Bill." << endl;
        cout << "\t\t4. Exit." << endl;
        cout << "\t\tEnter Choice: ";
        cin >> val;

        if (val == 1) {
            clearScreen();
            addItem(items);
        } else if (val == 2) {
            clearScreen();
            buyItem(items);
        } else if (val == 3) {
            // clearScreen();
            print();
        } else if (val == 4) {
            clearScreen();
            exit = true;
            cout << "\tGoodbye!" << endl;
        }
    }
    return 0;
}