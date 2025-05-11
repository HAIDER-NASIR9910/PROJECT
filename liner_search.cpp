#include <iostream>
using namespace std;
void linear_search(int arr[10],int number)
{
	for(int i=0;i<10;i++)
	{
		if(arr[i]==number)
		{
			cout<<"FOUND AT THE INDEX"<<" : "<<i<<endl;
			break;
		}
		else if(arr[i]!=number)
		{
			cout<<"NOT FOUND IN THE ARRAY"<<endl;
		}
	}
}

void print_array(int arr[10])
{
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}	
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int number;
	cout<<"ENTER THE NUMBER YOU WANT TO FOUND"<<endl;
	cin>>number;
	linear_search(arr,number);
	int key;
	cout<<"IF YOUN WANT TO PRINT THE ARRAY PRESS THE KEY '1' "<<endl;
	cin>>key;
	switch(key)
	{
		case 1:
		print_array(arr);
		break;
	}



    return 0;
}

