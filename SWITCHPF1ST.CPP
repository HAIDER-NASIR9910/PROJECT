#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;
int main()
{
    cout<<"for displaying shape of full pyramid press key 1 \n"<<endl;
    cout<<"for displaying shape of upper pyramid press key 2 \n"<<endl;
    cout<<"for displaying shape of lower pyramid press key 3 \n"<<endl;
    cout<<"for displaying shape of upper left triangle press key 4 \n"<<endl;
    cout<<"for displaying shape of lower left triangle key 5 \n"<<endl;
    cout<<"for displaying shape of upper right triangle key 6 \n"<<endl;
    cout<<"for displaying shape of lower right triangle press key 7 \n"<<endl;
    int key;
    cout<<"ENTER ANY KEY ACCORDING TO YOUR REQUIREMENT \n";
    cin>>key;
    switch(key)
    {
        case 1:
        for( int i=1; i<=10; i++)
        {
            for(int k= 10-1; k>0;k--)
            cout<<" ";
            for (int j=1; j<=i; j++)     //HERE THREE LOOPS ARE USED ONE FOR REPETATION,OTHER FOR SPACES AND LAST ONE FOR PRINTION
                                        //IN CASE 1 IT IS PRINTING THE FULL PYRAMIND USING 6 LOOPS ANd three loops for one pyramind and three for other.
            cout<<" *";
            cout<<endl;
        }
        for (int i=10; i>=1;i--)
        {
            for (int k=10-i; k>0; k--)
            cout<<" ";
            for (int j=i; j>0; j--)
            cout<< " *";
            cout<<endl;
        }
        case 2:
         for( int i=1; i<=10; i++)
        {
            for(int k= 10-1; k>0;k--)
            cout<<" ";
            for (int j=1; j<=i; j++) //HERE THREE LOOPS ARE USED ONE FOR REPETATION,OTHER FOR SPACES AND LAST ONE FOR PRINTION
            cout<<" *";
            cout<<endl;
        }
        break;
        case 3:
         for (int i=10; i>=1;i--)
        {
            for (int k=10-i; k>0; k--) 
            cout<<" ";                //HERE THREE LOOPS ARE USED ONE FOR REPETATION,OTHER FOR SPACES AND LAST ONE FOR PRINTION
            for (int j=i; j>0; j--)
            cout<< " *";
            cout<<endl;
        }
        break;
        
        case 4:
        for ( int i=1;i<=10;i++)
        {
            for (int k=10-i;k>0;k--)
            cout<<" ";               //HERE THREE LOOPS ARE USED ONE FOR REPETATION,OTHER FOR SPACES AND LAST ONE FOR PRINTION
            for ( int j=1 ;j<=i ;j++)
            cout<<"*";
            cout<<endl;
        }
        break;
        case 5:
           for (int i=10; i>=1;i--)
        {
            for (int k=10-i; k>0; k--)
            cout<<" ";                  //HERE THREE LOOPS ARE USED ONE FOR REPETATION,OTHER FOR SPACES AND LAST ONE FOR PRINTION
            for (int j=i; j>0; j--)
            cout<< "*";
            cout<<endl;
        }
        break;
        
        case 6:
         for (int i=1;i<=10;i++)
         {
         	for (int j=1;j<=i;j++) //HERE ONLY TWO LOOPS ARE USED BCZ WE DONT NEED ANY OF THE SPACES AT THE FIRST WE ONLY MALEING RIGHT TRIANGLE
         	cout<<"*";
         	cout<<endl;
		 }
		 break;
		 
		 case 7:
		 	for(int i=10;i>=1;i--)
		 	{
		 		for( int j=i;j >0;j--)
		 		cout<<"*";          //HERE ONLY TWO LOOPS ARE USED BCZ WE DONT NEED SPACES AT THE FIRST BUT HERE DECEREMENT IS DONE FOR MAKING UPSIDE DOWN RIGHT TRIANGLE
		 		cout<<endl;
			 }
		 
		 default:
		 	cout<<" please enter the corect key";
		 
    }
    return 0;
}
