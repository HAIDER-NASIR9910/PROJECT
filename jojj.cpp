#include <iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"ENTER THE ROW "<<endl;
	cin>>r;
	cout<<"ENTER THE COLOUM "<<endl;
	cin>>c;
	bool istrue=true;
	int arr[r][c];
	for(int i=0;i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			cout<<"ENTER THE ELEMENTS OF THE ARRAY "<<endl;
			cin>>arr[i][j];
		}
	}
	
	cout<<"PRINTING THE ARRAY "<<endl;
		for(int i=0;i<r; i++)
	{
		for (int j=0; j<c; j++)
		{

			cout<<arr[i][j];
			
			           if(i==j && arr[i][j]!=1)
           {
           	istrue=0;
		   }
		   else if(i!=j && arr[i][j]==1)
		   {
		   	istrue=0;
		   }
		   
		}
		cout<<endl;
	}
	cout<<"CHECKING THE ARRAY WHEATER ITS IDENTITY OR NOT "<<endl;

	if(istrue)
	{
		cout<<"\nTHIS IS IDENTITY "<<endl;
	}
	else 
	{
		cout<<"\nTHIS IS NOT IDENTITY "<<endl;
	}
	
}
