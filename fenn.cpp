#include <iostream>
using namespace std;

int febo(int n){
	if (n<=1){
		return n;
	}
	return (febo(n-1) + febo(n-2));
}
int main()
{
	cout << "Enter number of limits: ";
	int num;
	cin >> num;
	for(int i = 0; i<num; i++){
		cout << febo(i) << endl;
	}
    return 0;
}

