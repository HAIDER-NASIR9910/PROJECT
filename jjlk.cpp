#include <iostream>
using namespace std;
struct Voulme{
     int arr[3];
     void func1()
     {
     	cout<<"LENGHT OF THR CUBE IS "<<" : "<<arr[0]<<endl;
     	cout<<"HEIGHT OF THE CUBE IS"<<" : "<<arr[1]<<endl;
     	cout<<"WIDTH OF THE CUBE IS "<<" : "<<arr[2]<<endl;
	 }
	      void func2()
     {
     	cout<<"VOULME OF THE CUBE IS "<<" : "<<arr[0]*arr[1]*arr[2]<<endl;
	 }
};
int main()
{
	Voulme v;
	v.arr[0]=3;
	v.arr[1]=2;
	v.arr[2]=1;
	v.func1();
	v.func2();
}
