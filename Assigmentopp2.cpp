#include <iostream>
#include <cstdlib>
using namespace std;
class String{
	private:
	char* ptr;
	public:
	String(char arr[])
	{
		int length=0;
		while(arr[length] != '\0')
		{
			length++;
		}
		ptr=new char[length +1];
		for(int i=0; i<=length; i++)
		{
			ptr[i]=arr[i];
		
		}
	}
	
	~String() {
        delete[] ptr;
    }
    
    bool operator ==(String c2)
    {
    	if(ptr==c2.ptr)
    	{
    		return true;
		}
		else
		{
			return false;
		}
	}
	bool operator <(String c2)
	{
		if(ptr<c2.ptr)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	bool operator >(String c2)
	{
		if(ptr>c2.ptr)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
int main()
{
	char arr1[]="HAIDER NASIR";
	char arr2[]="UMER";
	String c1(arr1);
	String c2(arr2);
	int choice;
	cout<<"FOR CHECKING ARRAY1 > ARRAY2 PRESS KEY '1' IT WILL PRINT TRUE OR FALSE"<<endl;
	cout<<"FOR CHECKING ARRAY2 > ARRAY1 PRESS KEY '2' IT WILL PRINT TRUE OR FALSE"<<endl;
	cout<<"FOR CHECKING ARRAY1 == ARRAY2 PRESS KEY '3' IT WILL PRINT TRUE OR FALSE"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
		if(c1>c2)
		{
			cout<<"TRUE"<<endl;
		}
		else
		{
			cout<<"False"<<endl;
		}
		break;
		
		case 2:
		if(c1<c2)
		{
			cout<<"TRUE"<<endl;
		}
		else
		{
			cout<<"False"<<endl;
		}
		break;
		
		case 3:
	    if(c1==c2)
		{
			cout<<"TRUE"<<endl;
		}
		else
		{
			cout<<"False"<<endl;
		}
		break;
	}
	exit(1);
    return 0;
}

