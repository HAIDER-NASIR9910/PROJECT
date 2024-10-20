#include <iostream>
using namespace std;
int main() {
    string name;
    cout << "ENTER THE NAME" << endl;
    getline(cin, name);
    char firstChar = name[0];
    char secondCharAfterSpace;
    char thirdchar;
    cout << "YOUR FIRST CHARACTER IS: " << firstChar << endl;
    bool spaceFound = false;
    for (int i = 0; i < name.length(); i++) {
        if (name[i] == ' ') {
            spaceFound = true;
        } else if (spaceFound) {
            secondCharAfterSpace = name[i];
            cout << "SECOND CHARACTER AFTER SPACE IS: " << secondCharAfterSpace << endl;
            break;
        }
        else if(name[i]!=  secondCharAfterSpace  && name[i]==' ')
        {
        	thirdchar=name[i];
            cout << "SECOND CHARACTER AFTER SPACE IS: " << thirdchar << endl;
            break;       	
		}
    }
    return 0;
}


