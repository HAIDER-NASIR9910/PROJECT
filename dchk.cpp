#include <iostream>
using namespace std;
struct student{
	string name;
	string rollno;
	string classname;
}s;                                        //making the instance first with the variable
int main()
{
                                      //creating the instance of the structure 
	cout<<"ENTER THE NAME OF CLASS"<<endl;
	cin>>s.classname;
	cout<<"ENTER YOURS NAME"<<endl;
	cin.ignore();                       //enter key will enter is input so we have to  write this to take the input if not it will throe an error
	getline(cin,s.name);                //if taking the input through get line if it is first no needed if it is second of fourth it is needed
	cout<<"ENTER THE ROLLNO"<<endl;
	cin>>s.rollno;
}
