#include <iostream>
using namespace std;

void grade(double percentage)
{
   if(percentage>=80 && percentage<=90)
   {
   	cout<<" YOUR GRADE IS A1 "<<endl;
   }
   else if(percentage>=70 && percentage<=80)
   {
   	cout<<" YOUR GRADE IS A "<<endl;
   }
   else if(percentage>=60 && percentage<=70)
   {
   	cout<<" YOUR GRADE IS B "<<endl;
   }
   else if(percentage>=50 && percentage<=60)
   {
   	cout<<" YOUR GRADE IS C "<<endl;
   }
   else if(percentage>=50 && percentage<=40)
   {
   	cout<<" YOUR GRADE IS D "<<endl;
   }
   else if(percentage<40)
   {
   	cout<<"YOUR GRDE IS F AND YOURE FAIL"<<endl;
   }
	
}
void func1()
{
	    string arr[7] = {"HAIDER", "ATTA UR REHMAN", "BILAL", "ABDULLAH", "NISAR", "AHMED", "MAJID"};
    char   a[7]={'A','B','C','D','E','F','A'};
    int arry[7][5] = {
        {85, 83, 77, 91, 66},
        {80, 90, 95, 83, 48},
        {78, 81, 11, 90, 73},
        {92, 83, 30, 69, 87},
        {23, 45, 96, 38, 59},
        {77, 31, 52, 74, 83},
        {79, 85, 28, 93, 82}};

    for (int i = 0; i < 7; i++)
    {
        cout << "|" <<arr[i] <<"|"<< " ";
        cout << "|"<<a[i]<<"|"   << " ";
        for (int j = 0; j < 5; j++)
        {
            cout << arry[i][j] << " ";
        }
        cout << endl;
    }
    int sumofrows[7]={0};
        for (int i = 0; i < 7; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {
          sumofrows[i]+=arry[i][j];
        
        }
      
        cout << endl;
            for(int i=0; i<7; i++)
    {
    	cout<<" SUM OF ROWS ARE "<< i+1 <<" : "<<sumofrows[i];
    	cout<<endl;
    	double percentage,a;
    	a=(double)sumofrows[i]/450 ;   //  we are casting one operend to forcfully casting the floating point
    	percentage=a*100;

    	cout<<"  PERCENTAGE OF THE EACH STUDENT IS  "<< " : "<<percentage<<endl;
    	
    	grade(percentage);
    	double average;
    	average =sumofrows[i]/7; 
    	cout<<" AVERAGE OF THE ARRAY IS "<<" : "<<average;
    
	} 
    }
}

int main()
{

 func1();


    return 0;
}

