#include <iostream>
using namespace std;
int main()
{
	cout<<"its in this form num1/num2 operator num3/num4 ";
	int num1,num2,num3,num4;
	cout<<"ENTER THE NUM1 "<<endl;
	cin>>num1;
	cout<<"ENTER THE NUM2 "<<endl;
	cin>>num2;
	cout<<"ENTER THE NUM3 "<<endl;
	cin>>num3;
	cout<<"ENTER THE NUM4 "<<endl;
	cin>>num4;
	char a;
	cout<<"ENTER THE ANY CAHARCTER FROM +,-,*,/ "<<endl;
	cin>>a;
	float  	intermediate_result,result;
	switch (a)
	{
		case '+':
		intermediate_result=(num1*num4) + (num3*num2);
		result=(intermediate_result)/(num2*num4);
		cout<<"RESULT ACCORDINING TO THE CHOOSE OPERATOR + IS "<<" : "<<result<<endl;
		break;
			case '-':
		intermediate_result=(num1*num4) - (num3*num2);
		result=(intermediate_result)/(num2*num4);
		cout<<"RESULT ACCORDINING TO THE CHOOSE OPERATOR + IS "<<" : "<<result<<endl;
		break;
			case '*':
		intermediate_result=(num1*num4) * (num3*num2);
		result=(intermediate_result)/(num2*num4);
		cout<<"RESULT ACCORDINING TO THE CHOOSE OPERATOR + IS "<<" : "<<result<<endl;
		break;
			case '/':
		intermediate_result=(num1*num4) / (num2*num3);
		result=(intermediate_result);
		cout<<"RESULT ACCORDINING TO THE CHOOSE OPERATOR + IS "<<" : "<<result<<endl;
		break;
		default:
		{
			cout<<"enter the right operator"<<endl;
		 } 		
}

}
