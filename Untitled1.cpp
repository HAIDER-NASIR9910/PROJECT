#include <iostream>
using namespace std;
int main()
{
	 int num;
	 cout<<"ENTER THE NUMBER TO CHECK WHEATHER IT IS ARMSTRONG OR NOT"<<endl;
	 cin>>num;
//	 int totalnum;
//	 cout<<"ENTER THE TOTAL NUMBER IN THE NUMBER "<<endl;
//	 cin>>totalnum;
	 for(int i=0; i<3; i++)
	 {
	 	if(num>0)
	 	{
	 	cout << num % 10 << " "; // Output the last digit
        num /= 10; // Remove the last digit
        	 	int v;
	 	v=num^3;
	 		 	cout<<v<<endl;
		 }
	 	
	 }
}
