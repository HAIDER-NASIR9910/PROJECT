//HAIDER NASIR
//B24S0308AI088
//AI-BLUE
#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10; // Fixed size of the array

class HashArray {
private:
    int array[ARRAY_SIZE];
    bool occupied[ARRAY_SIZE] = {false}; // To track which slots are occupied

public:
    HashArray() {
        // Initialize all array elements to 0 (or any default value)
        for (int i = 0; i < ARRAY_SIZE; i++) {
            array[i] = 0;
        }
    }

    // Hash function: index = value % array_size
    int hashFunction(int value) const {
        return value % ARRAY_SIZE;
    }

    // Insert a value into the array using the hash function
    bool insert(int value) {
        int index = hashFunction(value);
        
        if (index < 0 || index >= ARRAY_SIZE) {
            cerr << "Hash index out of bounds!" << endl;
            return false;
        }
        
        // Check if the slot is already occupied
        if (occupied[index]) {
            cerr << "Collision detected at index " << index 
                 << " for value " << value << endl;
            return false;
        }
        
        array[index] = value;
        occupied[index] = true;
        return true;
    }

    // Display the contents of the array
    void display() const {
        cout << "Hash Array Contents:" << endl;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            cout << "Index " << i << ": ";
            if (occupied[i]) {
                cout << array[i];
            } else {
                cout << "Empty";
            }
            cout << endl;
        }
    }
};

int main() {
    HashArray hashArray;
    int n;

    cout << "Enter the number of integers to store (max " << ARRAY_SIZE << "): ";
    cin >> n;

    if (n > ARRAY_SIZE) {
        cout << "Warning: Number of elements exceeds array size. Only " 
             << ARRAY_SIZE << " elements will be stored." << endl;
        n = ARRAY_SIZE;
    }

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        if (!hashArray.insert(value)) {
            cout << "Failed to insert value " << value << endl;
        }
    }

    hashArray.display();

    return 0;
}
