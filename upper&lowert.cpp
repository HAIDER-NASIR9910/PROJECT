#include<iostream>
#include<cmath>
#include<cctype>
#include<iomanip>
using namespace std;
int main()
{
    char a,b;
    cout<<" enter the character a"<<endl;
    cin>>a;
    cout<<" enter the character b"<<endl;
    cin>>b;
    if (isupper(a))
    {
        cout<<" you have enter the upper character"<<endl;
    }
    else if (islower(a))
    {
        cout<<" you have enter the lower case character"<<endl;
    }
    return 0;

}
