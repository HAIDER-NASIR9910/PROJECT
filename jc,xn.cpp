#include <iostream>
using namespace std;

class CharacterArray {
private:
    char* ptr;

public:
    CharacterArray(char array[]) {
        int length = 0;
        while (array[length] != '\0') {
            length++;
        }
        ptr = new char[length + 1];
        for (int i = 0; i <= length; i++) {
            ptr[i] = array[i];
        }
    }

    ~CharacterArray() {
        delete[] ptr;
    }

    void printArray() {
        std::cout << ptr << std::endl;
    }
};

int main()
{

    return 0;
}

