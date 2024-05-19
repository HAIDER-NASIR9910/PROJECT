
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   cout << setw(50) << "WE ARE HAVING THREE CATEGORIES OF SEATS IN THE PLANE" << endl;
    cout << setw(50) << "BUSINESS CLASS IN ROW 1 AND 2" << endl;
    cout << setw(50) << "FIRST CLASS IN ROW 3 AND 7" << endl;	
    cout << setw(50) << "ECONOMY CLASS IN ROW 8 AND 13" << endl;
    
    
	string seatclass;
	cout<<"ENTER THE CLASS ACCORDING TH THE ABOVER INFO"<<endl;
	cin>>seatclass;
	cout<<"X INDICATES THE OCCUPIED SEATS IN THE PLANE "<<endl;
	cout<<"* REPRESENTS THE AVALIBALE SEATS IN THE PLANE"<<endl;
	
	
	
	int seatNumbers[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	char arr[13][6]={
	{'*','*','x','*','x','x' },
	{'*','x','*','x','*','x'},
	{'*','*','x','x','*','x'},
	{'x','*','x','x','*','x'},
	{'*','x','*','x','*','*'},
	{'*','x','*','*','*','x'},
	{'x','*','*','*','x','x'},
	{'*','x','*','x','x','*'},
	{'x','*','x','x','*','x'},
    {'*','x','*','x','x','x'},
	{'*','*','x','*','x','*'},
    {'*','*','x','x','*','x'},
	{'*','*','*','*','x','*'},
	};
	for(int i=0;i<13;i++)
	
	{
		cout<<seatNumbers[i]<<"    ";
		for(int j=0;j<6;j++)
		{
			cout<<arr[i][j]<<"    ";
		}
		cout<<endl;
	}
	
	int seat;
	cout<<"ACCORDING TO THE ABOVE INFO SELECT THE SEAT"<<endl;
    cin>>seat;
    if(seat>=1 && seat<=12)
    {
    	cout<<"YOU HAVE CHOSEN THE BUSINEES CLASS"<<endl;
    	cout<<"PRICE OF THE CLASS IS 4000"<<endl;
	}
	else if (seat>=13 && seat<=42)
	{
		cout<<"YOU HAVE CHOSEN THE first CLASS"<<endl;
    	cout<<"PRICE OF THE CLASS IS 3000"<<endl;
	}
	else if(seat>=43 && seat<=78)
	{
		cout<<"YOU HAVE CHOSEN THE ECONOMY CLASS"<<endl;
    	cout<<"PRICE OF THE CLASS IS 2000"<<endl;
	}
	else
	{
		cout<<"ENTER THE CORRECT NUMBER"<<endl;
	}
	
	return 0;
}
