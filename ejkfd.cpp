#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    // Input values for the array
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    // Output values with the correct loop logic
    for(int i = 0; i < 10; i++)
    {
        for(int j = 10; j > 0; j--)
        {
            cout << j << " " << arr[i] << " * ";
            //cout << endl;
        }
        
    }

    return 0;
}

