#include <iostream>
using namespace std;

int main()
{
	string name;
    cout << "ENTER THE NAME" << endl;
    getline(cin, name);
    char firstChar = name[0];
    char secondCharAfterSpace;
    char thirdChar;
    cout << "YOUR FIRST CHARACTER IS: " << firstChar << endl;
    bool spaceFound = false;
    bool secondSpaceFound = false;
    for (int i = 0; i < name.length(); i++) {
        if (name[i] == ' ') {
            spaceFound = true;
        } else if (spaceFound && !secondSpaceFound) {
            secondCharAfterSpace = name[i];
            cout << "SECOND CHARACTER AFTER SPACE IS: " << secondCharAfterSpace << endl;
            secondSpaceFound = true;
        } else if (secondSpaceFound) {
            thirdChar = name[i];
            cout << "THIRD CHARACTER AFTER SPACE IS: " << thirdChar << endl;
            break;
        }
    }
    
    return 0;
}



