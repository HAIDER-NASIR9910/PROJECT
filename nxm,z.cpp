/*-------------------------------------------------------------------------------------
  WELCOME TO PILOT DATABASE MANAGEMENT SYSTEM THIS FULL SYSTEM IS DEVLOPED BY
  HARSH MISHRA AND ALL THE COPY RIGHT ARE RESERVED AND USER PASSWORD IS 2 AND DEVELOPER
  PASSWORD OF DEVELOPER IS BY DEFAULT IS 2,
  --------------------------------------------------------------------------------------
#########################################################################################
			     ENJOYN PDMS(PILOT DATABASE MANAGEMENT SYSTEM)
#########################################################################################*/
//HEADER FILES
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream.h>
#include<dos.h>
 class pilot {                         char name[40];
				       char grade[11];
				       int age;
				       char planetype[40];
				       int pilotno;
				       int fly_hours ;
				       public:
				void getdata(void)
			       {  char ch;
				  cin.get(ch);
				  cout<<"Enter the name of new pilot(Max 40 letters):";                             cin.getline(name,40);
				   cout<<"Enter the plane type (max 40 letters):";                                  cin.getline(planetype,40);
				  cout<<"Enter grade of new pilot:(exg.officer,copilot,navigator,first officer)";   cin.getline(grade,11);
				  cout<<"Entre the age of new pilot:";                                              cin>>age;
				  cout<<"Enter the pilot number:";                                                  cin>>pilotno;
				  cout<<"Enter the pilot total fly hours(IN HOURS)";                                cin>>fly_hours;
				  cout<<"\n";
				  }
				  void display(void)
				 { cout<<" the name of new pilot:"<<name<<"\n";
				  cout<<" grade of new pilot:"     <<grade<<"\n";
				  cout<<" the age of new pilot:"   <<age<<"\n";
				  cout<<" the plane type :"        <<planetype<<"\n";
				  cout<<"the pilot number:"        <<pilotno<<"\n";
				  cout<<"the total hours of fly"  <<fly_hours;
				  cout<<"\n";
				 }
				 void putdata()
				 {cout<<"\n\n\t\tpilot no------"<<pilotno<<"\n\n\t\tname------"<<name<<"\n\n\t\tgrade------"<<grade<<"\n\n\t\tage------"<<age<<"\n\n\t\tTotal hours of flaying-------------"<<fly_hours<<"\n\n\t\tplane type--------------"<<planetype<<endl;
				 }
				 int pilot::getrno()
		 {return pilotno;}
		 void modify();
			    }s1,stud;
			    void pilot::modify()
			    {cout<<"name"<<name<<endl;
			     cout<<"\n\n\t\tpilot no------"<<pilotno<<"\n\n\t\tname------"<<name<<"\n\n\t\tgrade------"<<grade<<"\n\n\t\tage------"<<age<<"\n\n\t\tTotal hours of flaying"<<fly_hours<<"\n\n\t\tplane type"<<planetype<<endl;
			     cout<<"Enter new detail"<<endl;
			     char gr[11]="";char pl[40]=" ";
			     int hr;
			     cout<<"New grade(exg.officer,copilot,navigator,first officer):(enter '.'to retain old on)";
			     cin>>gr;
			     cout<<"new type of plane(enter '.'to ratain old on)";
			     cin>>pl;
			     cout<<"new total hours of flying(enter '.'to ratain old on)";
			     cin>>hr;
			     if(strcmp(gr,".")!=0)
			       strcpy(grade,gr);
			     if(strcmp(pl,".")!=0)
			       strcpy(planetype,pl);
			       fly_hours=hr;
			    }
int main ()
{
clrscr ();
cout<<"\n\n\n\n\n\t\t\tLOADING";
delay(500);
cout<<"\n\n\n\t\t\tCREATING DEVLOPER DATABASE-----";
delay(500);
cout<<"100%";
delay(500);
cout<<"\n\n\n\t\t\tCREATING USER DATABASE-----";
delay(500);
cout<<"100%";
delay(300);
{
 mainmenu:
clrscr ();
int a,b=2,i=2;
cout<<
      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEM\n"<<
"--------------------------------------------------------------------------------";
cout<<"\t\t\n\n\n\n\n\n\n\n\t\t\tENTER YOUR ACCESS PASSWORD\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t all copy right reserved to harsh mishra";
cin>>a,b;
if(a==b)
{
accessarea:
int access;
clrscr ();
cout<<
      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEM\n"<<
"--------------------------------------------------------------------------------";
cout<<"access granted \n";
cout<<"harsh mishra developer \n";
cout<<"enter your access area"<<"\n\n\n\n\n\t\t\t\t1.DEVELOPER:\n\n\n\t\t\t\t2.USER:\n\n\n\t\t\t\t3.EXIT THE PDMS SYSTEM";
/*--------------------------------------------------------------------------------------
		       DEVLOPER AREA STARTED (ONLY FOR DEVLOPER)
 --------------------------------------------------------------------------------------*/
cin>>access;
switch (access)
{
  case 1:   clrscr();
	    cout<<
      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEAM\n"<<
"--------------------------------------------------------------------------------";
	    cout<<"\n\n\n\n\t\t\tEnter your developer password\n\n\t\t\t";
	    int a,i=2;
	    cin>>a;
	   cout<<"\n\n\t\t";system("pause") ;
	    if(a==i)
	    {
	    devmenu:
	    clrscr ();
	    cout<<
      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEAM\n"<<
"--------------------------------------------------------------------------------";
	    cout<<"acess granted";
	    cout<<"\n\n\t\tWELCOME TO DEVELOPER MODE YOU HAVE SOME SPECIAL RIGHT";
	    cout<<"\n\n\n\t\t1.CHANGE THE LOGIN PASSWORD.\n\n\n\t\t2.MODIFY THE PILOT DATA\n\n\n\t\t3.DELET OR VIEW THE PILOT DATA\n\n\n\n\t\t4.RETURN TO MAIN MENU";
	    int devchoice;
	    cin>>devchoice;
	    switch (devchoice)
	      {
		 case 1:   clrscr();
			   cout<<
      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEAM\n"<<
"--------------------------------------------------------------------------------";
			    cout<<"\n\nPLease enter your old login password:";
			    int oldpass1,newpass1;
			    cin>>oldpass1;
			    if(oldpass1==a)
			       {
				 cout<<"\n\nEnter your new login password:";
				 cin>>newpass1;
				 newpass1=a;
				 cout<<"Your new password is saves succesfull:";
				 system("pause");
				 goto mainmenu;
			       }
			     else
				 {
				   cout<<"\n\nYou have enterd wrong passwrd:";
				   system("pause");
				   goto mainmenu;
				 }
		   case 2:   clrscr();
			   cout<<
      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEAM\n"<<
"--------------------------------------------------------------------------------";
			    fstream fio3("pilot.txt",ios::in|ios::out|ios::binary);
			    int rno;long pos;char found ='f';
			    cout<<"Enter the pilot Number to modified\n";
			    cin>>rno;
			    while(!fio3.eof())
			    {    pos=fio3.tellg();
				 fio3.read((char*)&s1,sizeof(s1));
				 if(s1.getrno()==rno)
				   {s1.modify();
				 fio3.seekg(pos);
				 fio3.write((char*)&s1,sizeof(s1));
				 found='t';
				 system("pause");
				 goto devmenu;
				}
			       }
			       if(found=='f')
				  cout<<"REcord not found!!!!\n";
			       fio3.seekg(0);
			       cout<<"now the file containes\n";
			       while(!fio3.eof())
				 {
				     fio3.read((char*)&stud,sizeof(stud));
				     stud.putdata();
				  }
				  fio3.close();
				  system("pause");
				  goto devmenu;
	      case 3:               clrscr();
				    cout<<
      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEAM\n"<<
"--------------------------------------------------------------------------------";
				    cout<<"\n\n\t\t\tWhat operation do u want to perform\n\n\n\n\t\t1.SEARCH FOR PILOT DATA\n\n\n\n\t\t2.DELET THE PILOT DATA\n\n\n\t\t";
				    int devans;
				    cin>>devans;
				    switch (devans)
				   { case 1:clrscr();
					   cout<<
      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEAM\n"<<
"--------------------------------------------------------------------------------";
					  int rn1;char found='n';
					  ifstream fio1("pilot.txt",ios::in);
					  cout<<"enter the pilot number to searched";
					  cin>>rn1;
					  while(!fio1.eof())
					  {fio1.read((char*)&s1,sizeof(s1));
					  if(s1.getrno()==rn1)
					  {
					    s1.putdata();
					  found='y';
					  system("pause");
					  break;
					  }
					  }
					  {  if(found=='n')
					    cout<<"pilot no not found in the file"<<endl; }
					    fio1.close();
					   system("pause");
					   goto devmenu;
				  case 2:   clrscr();
					     cout<<
      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEAM\n"<<
"--------------------------------------------------------------------------------";
					    int rno;
					    cout<<"Enter the pilot no to be deleted\n";
					    cin>>rno;
					    ifstream fio("pilot.txt",ios::in||ios::out);
					    fstream fp2;
					    fp2.open("temp.txt",ios::out);
					    fio.seekg(0,ios::beg);
					    while(!fio.eof())
					    { fio.read((char*)&s1,sizeof(s1));
					      {
					      if(s1.getrno()!=rno)
					      {
					       fp2.write((char*)&s1,sizeof(s1));
					       }
					       }
					       }
						 fio.close();
						 fp2.close();
						 remove("pilot.txt");
						 rename("temp.txt","pilot.txt");
						 goto devmenu;
				     default :   cout<<"wrong option selected";
						 system("pause");
						 goto devmenu;
				     }
		   case 4:      goto accessarea;;
		  default :      cout<<"Wrong option selected";}
	    }
	    else
	    {clrscr ();
	    cout<<"wrong password";
	    }break;
/*
 ------------------------------------------------------------------------------------------
		       USER WORK AREA STARTED
 ------------------------------------------------------------------------------------------*/
  case 2:   usermenu:
	    clrscr ();
	    cout<<
      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEAM\n"<<
"--------------------------------------------------------------------------------";
	      cout<<"welcome user";
	    cout<<"\n\n\n\n\n\t\t\t1: ENTER NEW PILOT DATA \n\n\n\t\t\t2:SEE OLD PILOT DATA\n\n\n\n\t\t\t3.BOOK PILOT FOR ME\n\n\n\n\t\t\t4.RETURN TO MAIN MENU";
	       int userinput;
	       cin>>userinput;
	       clrscr();
	       switch (userinput)
	       {
		 case 1:  enterdata:
		 cout<<
      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEAM\n"<<
"--------------------------------------------------------------------------------";
				  ofstream fo("pilot.txt",ios::app||ios::binary);
				   char ans='y';
				   while(ans=='y')
				   {  s1.getdata();
				      int birthmonth,birthyear;
				      int currentmonth,currentyear;
				      int agey,agem;
				      cout<<"Enter Your Birth Year(Eg:1989):";
				      cin>>birthyear;
				      cout<<"\n\nEnter Your Birth Month(Eg:7):";
				      cin>>birthmonth;
				      cout<<"\nEnter The Current Month(Eg:7):";
				      cin>>currentmonth;
				      cout<<"\nEnter The Current Year(Eg:2010):";
				      cin>>currentyear;
				      agey=currentyear-birthyear;
				      agem=((12-currentmonth)-(birthmonth));
				      cout<<"\n\n\t\tYour Age is "<<agey<<" Years And "<<agem<<" Months ";
				      fo.write((char*)&s1,sizeof(s1));
				      cout<<"record added to the file\n";
				      cout<<"want to enter more recored(y/n)";
				      cin>>ans;
				    }
				      fo.close();
				      clrscr();
cout<<      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEAM\n"<<
"--------------------------------------------------------------------------------";
				   cout<<"\n\n\n\tYOUR NEW PILOT DATA IS BEEN STORED IN pilot.text\n\n\n";
				   system("pause");cout<<"to go back to user menu";
				   goto usermenu;
	   case 2 :                 cout<<
      "--------------------------------------------------------------------------------"<<
"\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEAM\n"<<
"--------------------------------------------------------------------------------";
				int rn;char found='n',ans2='y';
				while(ans2=='y'||ans2=='Y')
			      { ifstream fi("pilot.txt",ios::in);
			       cout<<"enter the pilot number to searched";
			       cin>>rn;
			       while(!fi.eof())
			       {fi.read((char*)&s1,sizeof(s1));
				if(s1.getrno()==rn)
				  { s1.putdata();
				  found='y';
				  system("pause");
				  cout<<"\n\n\t\tDo you want more search(y/n)";
				  cin>>ans2;break;
				  }
				 }
				 if(found=='n')
				  { cout<<"pilot no not found in the file"<<endl;}
				   fi.close(); }
				  system("pause");
				  goto usermenu;
       case 3:                 label:
			       
				 clrscr();
			       cout<<
			       "--------------------------------------------------------------------------------"<<
			       "\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEM\n"<<
			       "--------------------------------------------------------------------------------";
				 cout<<"Dear user you are in new genration fast online booking system";
				 cout<<"Please select your orgin\n1.DELHI\n2.PUNE\n3.BOMBAY\n4.KOLKATA\n5.PATNA\n6.BANGLURU\n7.HYDERABAD\n8.GANDHINAGAR";
				 char orgin,desti;
				 int pt,ph;
				 cin>>pt;
				 if(pt<=8)
				 {cin>>orgin;
				   cout<<"Now select your desitination";
				 cout<<"\n1.DELHI\n2.PUNE\n3.BOMBAY\n4.KOLKATA\n5.PATNA\n6.BANGLURU\n7.HYDERABAD\n8.GANDHINAGAR";
				 cin>>ph;
				 if(ph<=8)
				{ cin>>desti;}
				    else
				    { cout<<"wrong option";
					goto label;}
				  if(pt==ph)
				    {cout<<"Dear user your orgin and destination are same pleae try again later";
				      system("pause");
				     goto label;}
				   else
				{ cout<<"your orgin is "<<orgin<<"\tyour desitination is"<<desti;
				 system("pause");}
				 clrscr();
				 cout<<
			       "--------------------------------------------------------------------------------"<<
			       "\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEM\n"<<
			       "--------------------------------------------------------------------------------";
			     cout<<"\n\t\t\tCONGULATION!!!!!!!!!!!!!!\n\nYOUR PILOT IS BOOKED\nYour total amount is";
			     int p,y;
			     char ans1='y';
			     p=pt+ph;
			     if(p<8)
			       {int basic,tax;
			       basic=(p*1245);
			       tax=(basic/100);
			       cout<<"\n\n1.Basic pilot charges is:------RS"<<basic;
				cout<<"\n\n2.Aviation Tax is:----------RS"<<tax;
				cout<<"\n\n3.YOUR GRANDTOTAL is:---------:RS"<<(basic+tax);
				}
				else
				{int basic,tax;
			       basic=(p*1560);
			       tax=(basic/100);
				 cout<<"\n\n1.Basic pilot charges:-----------RS"<<basic;
				cout<<"\n\n2.Aviation Tax is:---------------RS"<<tax;
				cout<<"\n\n3.YOUR GRANDTOTAL IS:-------------RS"<<(basic+tax);
				 }
				 cout<<"\n\nwant to book more pilot(y/n)";
				 cin>>ans1;
				 while(ans1=='y'||ans1=='Y')
				 {goto label;
				 }}
				 else
				  goto usermenu;
		 case 4:           goto accessarea;
		 default:         clrscr();
				  cout<<"wrong option";
	       }
	   case 3:          clrscr();
			    cout<<
			       "--------------------------------------------------------------------------------"<<
			       "\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEM\n"<<
			       "--------------------------------------------------------------------------------";
			    cout<<"\n\n\n\n\t\t\THANK YOU FOR USING PILOT DATABASE MANAGEMENT SYSTEM";
				 break;
	  default :         clrscr();
			    cout<<
			       "--------------------------------------------------------------------------------"<<
			       "\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEM\n"<<
			       "--------------------------------------------------------------------------------";
			    cout<<"\n\n\t\tWRONG OPTION\n\n\t\t";
			    system("pause");
			    goto mainmenu;
}
}
else
{clrscr();
			    cout<<
			       "--------------------------------------------------------------------------------"<<
			       "\t\tWELCOME TO PILOT DATABASE MANAGEMENT SYSTEM\n"<<
			       "--------------------------------------------------------------------------------";
			    cout<<"\n\n\t\tWRONG PASSWORD\n\n\t\t";
			     cout<<"SYSTEM IS ABORTING FROM PDMS\n\n\t\t";
			    system("pause");
 }
getche ();
return 0;
}}

