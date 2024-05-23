#include <iostream>
using namespace std;
struct A{
	int arr[3] = {1, 2, 3};
//	void func1()
//	{
//	
//	 arr[0]=1;
//	 arr[1]=2;
//	 arr[2]=3;
//}
//	
};
int main()
{
  A a;
  cout<<a.arr[0]<<endl;
  cout<<a.arr[1]<<endl;
  cout<< a.arr[2]<<endl;
}
