#include <iostream>
using namespace std;

int main() {
    char *ptr = "my name is haider nasir";
    
    // Increment the first character ('m' becomes 'n')
    *ptr = ++*ptr; 
    cout << ptr << endl;  // Output: "ny name is haider nasir"
    
    // Move the pointer to the next character and assign its value to the first character
    *ptr = *ptr++; 
    cout << ptr << endl;  // Output: "y name is haider nasir"

    return 0;
}

