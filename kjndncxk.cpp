#include <iostream>
using namespace std;
class base{
	protected:
	int x;
	int y;
	public:
	base(int x1,int x2)
	{
		x=x1;
		y=x2;
		cout<<"BASE CLASS"<<endl;
	}
	virtual void display()
	{
		cout<<"X"<<" : "<<x<<endl;
		cout<<"Y"<<" : "<<y<<endl; 
	}
	virtual int getarea()
	{
		return x*y;
	}
	~base()
	{
		cout<<"DESTOR BASE CLASS"<<endl;
	}
};
class derived: public base{
	protected:
	int z;
	public:
	derived(int x1,int x2,int z1) : base(x1,x2),z(z1){
		cout<<"DERIVED CLASS"<<endl;
	}
	virtual int getarea(){
		return x*y*z;
	}
	virtual void display(){
		cout<<"X"<<" : "<<x<<endl;
		cout<<"Y"<<" : "<<y<<endl;
		cout<<"Z"<<" : "<<z<<endl;		
	}
	~derived()
	{
		cout<<"DESTRUCTOR DERIVED CLASS"<<endl;
	}
};
int main()
{
	base *ptr=new derived(1,2,3);
	ptr->display();
	cout<<ptr->getarea()<<endl;
	delete ptr;
    return 0;
}

