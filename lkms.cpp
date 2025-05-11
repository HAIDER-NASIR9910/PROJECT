#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int n;
	cout<<"ENTER THE NUMBER OF ARRAY YOU WANT TO ENTER"<<endl;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x;
	cout<<"ENTER THE ELEMNET YOU iWaNT TO ENTER"<<endl;
	cin>>x;
	arr[i]=x;
	n++;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}

    return 0;
}

