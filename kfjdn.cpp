#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int n;
	cout<<"ENTER THE NUMBER OF ARRAY YOU WANT TO ENTER"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x;
	cout<<"ENTER THE ELEMNET YOU iWaNT TO ENTER"<<endl;
	cin>>x;
	int pos;
	cout<<"ENTER AT WHAT POSITION YOU WNAT TO ENTER"<<endl;
	cin>>pos;
	for(int i=n;i>pos-1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=x;
	n++;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}

    return 0;
}

