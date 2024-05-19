#include <iostream>
using namespace std;

void func1(int arr[][3], int rows, int columns) {
    cout << "ENTER THE ELEMENTS OF THE ARRAY:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cin >> arr[i][j];
        }
    }
}

void func2(int arr[][3], int rows, int columns) {
    cout << "PRINTING THE ELEMENTS OF THE ARRAY:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows = 3;
    int columns = 3;
    int matrix[rows][columns];    
    func1(matrix, rows, columns);
    func2(matrix, rows, columns);
    return 0;
}

