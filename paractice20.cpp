#include <iostream>
using namespace std;
class student{
	private:
	string name;
	int id;
	string course;
	public:
	void details(string name1,int i)
	{
		name=name1;
		id=i;
		cout<<"YOUR NAME IS"<<" : "<<name<<endl;
		cout<<"YOUR ID ID"<<" : "<<id<<endl;
	}


};
class teacher : public student{
	private:
	string teacher_name;
	string course;
	public:
	void avaliable(string nam, string cou)
	{
		teacher_name=nam;
		cou=course;
		cout<<"  SIR  "<<teacher_name<<" having this couse "<<course; 
	}
		void rejister(string cou,string nam)
	{
		course=cou;
		teacher_name=nam;
		details(nam, 12);
		cout<<"YOU WANT TO REJISTER THIS COUSE"<<course<<endl;
		cout<<"WITH THIS TEACHER"<<teacher_name<<endl;
	}
		void drop(string cou,string nam)
	{
		course=cou;
		teacher_name=nam;
		details(nam, 12);
		cout<<"YOU WANT TO drop THIS COUSE"<<course<<endl;
		cout<<"FROM THIS TEACHER"<<teacher_name<<endl;
	}
};
int main()
{

    teacher t;
    t.avaliable("John Doe", "Mathematics");
    t.rejister("/Mathematics", "Jane Doe");
    t.drop("Mathematics", "Jane Doe");
    return 0;
}
