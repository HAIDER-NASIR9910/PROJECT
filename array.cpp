#include <iostream>
using namespace std;

int main()
{
    int arr[2][3][3];

    // Input loop
    for(int i = 0; i < 2; i++)
    {
        for(int k = 0; k < 3; k++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin >> arr[i][k][j];
            }
        }
    }

    // Output loop to display each element
    for(int i = 0; i < 2; i++)
    {
        for(int k = 0; k < 3; k++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << arr[i][k][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    // Output loop to display matrices
    for(int i = 0; i < 2; i++)
    {
        cout << "Matrix " << i + 1 << ":" << endl;
        for(int k = 0; k < 3; k++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << arr[i][k][j] << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Sum of matrices
    cout << "SUM OF MATRIX--------------- " << endl;
    for(int k = 0; k < 3; k++)
    {
        for(int j = 0; j < 3; j++)
        {
            arr[0][k][j] += arr[1][k][j];
            cout << arr[0][k][j] << "    ";
        }
        cout << endl;
    }

    // Initialize max and min with the first element of the array
    int max = arr[0][0][0];
    int min = arr[0][0][0];

    // Finding maximum and minimum in the 3D array
    for(int i = 0; i < 2; i++)
    {
        for(int k = 0; k < 3; k++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(arr[i][k][j] > max)
                {
                    max = arr[i][k][j];
                }
                if(arr[i][k][j] < min)
                {
                    min = arr[i][k][j];
                }
            }
        }
    }

    cout << "MAXIMUM: " << max << endl;
    cout << "MINIMUM: " << min << endl;

    return 0;
}

