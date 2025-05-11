#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	    for (int i = 0; i < 10; i++) {
        cout << i << "    " << arr[i] << "    ";
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }




    return 0;
}

