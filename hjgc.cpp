#include <iostream>
using namespace std;
void func1(char *, char *, char *);
 
 int  main()
 {
 	char a='A';
 	char b='B';
 	char c='C';
 	func1(&a , &b , &c);
 }
 void func1(char *p1, char *p2, char *p3)
 {
 	cout<<p1<<endl;
 	cout<<p2<<endl;
 	cout<<p3<<endl;
 	cout<<*&p1<<endl;
 	cout<<*&p2<<endl;
 	cout<<*&p3<<endl;
 	cout<<&*p1<<endl;
 	cout<<&*p2<<endl;
 	cout<<&*p3<<endl;
 	cout<<*p1<<endl;
 	cout<<*p2<<endl;
 	cout<<*p3<<endl;
 	cout<<&p1<<endl;
 	cout<<&p2<<endl;
 	cout<<&p3<<endl;
 }
