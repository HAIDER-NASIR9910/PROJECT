#include <iostream>
using namespace std;
struct A{
	string name;
     string  age;
	string rejestration_nO;
};
int main()
{
	A arr[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j].name;
			//cin>>arr[i][j].age;
			//cin>>arr[i][j].rejestration_nO;
		}
	}
		for(int i=0; i<3; i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j].name<<endl;
			cout<<arr[i][j].age<<endl;
			cout<<arr[i][j].rejestration_nO<<endl;
		}
	}
}
