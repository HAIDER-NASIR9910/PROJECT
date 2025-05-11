#include <iostream>
using namespace std;
int main()
{
    float arr[5];
    cout<<"ENTER 5 floating numbers"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    float temp=arr[0];
    float temp2=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
        else if(arr[i]<temp2)
        {
            temp2=arr[i];
        }
    }
    cout<<"MAXIMUM IS"<<" : "<<temp<<endl;
    cout<<"MINIMUM IS"<<" : "<<temp2<<endl;

}

