#include <iostream>
using namespace std;
void min(float num[5])
{
    float min=num[0];
    for(int i=0; i<5; i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    cout<<"MINIMUM NUMBER IS"<<" : "<<min<<endl;
}

void max(float num[5])
{
    float max=num[0];
    for(int i=0; i<5; i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    cout<<"MAXIMUM NUMBER IS"<<" : "<<max<<endl;
}

int main()
{
    float num[5];
    for(int i=0; i<5; i++)
    {
        cin>>num[i];
    }
    cout<<"FOR FINDING THE MAXIMUM NUMBER"<<endl;
    max(num);
    cout<<"FOR FINDING THE MINIMUM NUMBER"<<endl;
    min(num);
    return 0;
}

