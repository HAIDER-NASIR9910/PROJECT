#include <iostream>

int main() {
    int x = 10;

    if (x > 5) {
        goto skip;
    }

    std::cout << "This will not be printed." << std::endl;

skip:
    std::cout << "This will be printed." << std::endl;

    return 0;
}

