#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;                          //structure insted of array because both are used to store data
                                              //loops do-while
                                              //switches
                                              //statements
                                              //library <iomanip> ? <<fixed <<setprecision(2)<<bonous<<endl; 
                                              //n this code, setw(n) sets the width of the output fields to n characters each
                                              //bonous of 5% if the user spend 4 or more  than 4 years
                                              //inventry 
                                              //loan
                                              //balance sheet
                                              //function are used    
											  
											  
void func1()
{
	    cout << setw(50) << "For salaries of different positions in different branches:" << endl << endl;

    // Branch 1
    cout << setw(50) << "Branch 1:" << endl;
    cout << setw(55) << "Manager" << " press the key 1" << endl;
    cout << setw(55) << "Assistant Manager" << " press the key 2" << endl;
    cout << setw(55) << "Front Desk Task" << " press the key 3" << endl;
    cout << setw(55) << "Housekeeping Staff" << " press the key 4" << endl;
    cout << setw(55) << "Food and Beverages Staff" << " press the key 5" << endl;
    cout << setw(55) << "Finance Staff" << " press the key 6" << endl << endl;

    // Branch 2
    cout << setw(50) << "Branch 2:" << endl;
    cout << setw(55) << "Manager" << " press the key 7" << endl;
    cout << setw(55) << "Assistant Manager" << " press the key 8" << endl;
    cout << setw(55) << "Front Desk Task" << " press the key 9" << endl;
    cout << setw(55) << "Housekeeping Staff" << " press the key 10" << endl;
    cout << setw(55) << "Food and Beverages Staff" << " press the key 11" << endl;
    cout << setw(55) << "Finance Staff" << " press the key 12" << endl << endl;

    // Branch 3
    cout << setw(50) << "Branch 3:" << endl;
    cout << setw(55) << "Manager" << " press the key 13" << endl;
    cout << setw(55) << "Assistant Manager" << " press the key 14" << endl;
    cout << setw(55) << "Front Desk Task" << " press the key 15" << endl;
    cout << setw(55) << "Housekeeping Staff" << " press the key 16" << endl;
    cout << setw(55) << "Food and Beverages Staff" << " press the key 17" << endl;
    cout << setw(55) << "Finance Staff" << " press the key 18" << endl;
							   }                               
int main()
{
	
	struct {
        int salaryofManager;
		int salary_of_Assistant_Manager;
		int salary_of_Frontdesktask;
		int salary_of_housekeepeingstaff;
        int salary_of_foodandbeveragestaff;
        int salary_of_financestaff;
		}Branch1,Branch2,Branch3;
		
		
		
    // Define a structure to represent assets
    struct Asset {
    double cash;
    double inventory;
    //double property;
};

    // Define a structure to represent liabilities
    struct Liability {
    double loan;
    //double mortgage;
    //double creditCard;
};  
		
		
		
		Branch1.salaryofManager = 10000000;
		Branch1.salary_of_Assistant_Manager= 50000;
		Branch1.salary_of_Frontdesktask = 30000;
		Branch1.salary_of_housekeepeingstaff = 25000;
		Branch1.salary_of_foodandbeveragestaff = 20000;
		Branch1.salary_of_financestaff= 15000;
		
		Branch1.salaryofManager = 1000000;
		Branch2.salary_of_Assistant_Manager = 50000;
		Branch2.salary_of_Frontdesktask = 30000;
		Branch2.salary_of_housekeepeingstaff = 25000;
		Branch2.salary_of_foodandbeveragestaff = 20000;
		Branch2.salary_of_financestaff = 15000;
		
		Branch3.salaryofManager = 1000000;
		Branch3.salary_of_Assistant_Manager = 50000;
		Branch3.salary_of_Frontdesktask = 30000;
		Branch3.salary_of_housekeepeingstaff= 25000;
		Branch3.salary_of_foodandbeveragestaff = 20000;
		Branch3.salary_of_financestaff = 15000;
		
		//CALLING THE FUCTION ONE HERE
		func1();
		
	   do{
	   	
	int  a;
 cout << setw(85) << "Enter the data according to the given data above & if you have taken the salary then press any other key or you want to withdraw the amount " << endl;
	cin>>a;
	if(a>=1 && a<=18)
	{
			switch (a)
	{
	    case 1 :
	  	if (a = 1)
	  	{cout<<"your salary is granted  and  your salary is\n " <<Branch1.salaryofManager<<endl;
		  }
	  else 
	  {
	  	cout<<"your salary is denied" << endl;
	
	  }
	  break ;
	    case 2:
	  	if (a  = 2)
	  	{
	  		cout<<"your salary is granted and your salary is \n"<<	Branch1.salary_of_Assistant_Manager<<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		
	}
	    break;
	
	 	case 3:
	  	if (a  = 3)
	  	{
	  		cout<<"your salary is granted and your salary is \n"<<	Branch1.salary_of_Frontdesktask<<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		
	}
	    break ;
	    case 4:
	  	if (a  = 4)
	  	{ 
	  		cout<<"your salary is granted and your salary is \n"<<	Branch1.salary_of_housekeepeingstaff<<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		  }	
		  break ;
		  case 5:
	  	if (a  = 5)
	  	{
	  		cout<<"your salary is granted and your salary is \n"<<	Branch1.salary_of_foodandbeveragestaff <<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		
	}
	    break;
		case 6:
	  	if (a  = 6)
	  	{
	  		cout<<"your salary is granted and your salary is \n"<<	Branch1.salary_of_financestaff<<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		  
	}
              //change	
	

	    case  7:
	  	if (a = 7)
	  	{cout<<"your salary is granted  and  your salary is \n " <<Branch1.salaryofManager <<endl;
		  }
	  else 
	  {
	  	cout<<"your salary is denied" << endl;
	
	  }
	  break ;
	    case 8:
	  	if (a  = 8)
	  	{
	  		cout<<"your salary is granted and your salary is \n"<<	Branch2.salary_of_Assistant_Manager<<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		
	}
	    break;
	
	 	case 9:
	  	if (a  = 9)
	  	{
	  		cout<<"your salary is granted and your salary is \n"<<	Branch2.salary_of_Frontdesktask<<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		
	}
	    break ;
	    case 10:
	  	if (a  = 10)
	  	{ 
	  		cout<<"your salary is granted and your salary is \n"<<	Branch2.salary_of_housekeepeingstaff<<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		  }	
		  break ;
		  case 11:
	  	if (a = 11)
	  	{
	  		cout<<"your salary is granted and your salary is \n"<<	Branch2.salary_of_foodandbeveragestaff<<endl ;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		
	}
	    break;
		case 12:
	  	if (a  = 12)
	  	{
	  		cout<<"your salary is granted and your salary is \n"<<	Branch2.salary_of_financestaff<<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		  
	}
	  
	  
	
	//change
	


	
	    case 13:
	  	if (a = 13)
	  	{cout<<"your salary is granted  and  your salary is\n " <<Branch3.salaryofManager<<endl;
		  }
	  else 
	  {
	  	cout<<"your salary is denied" << endl;
	
	  }
	  break ;
	    case 14:
	  	if (a = 14)
	  	{
	  		cout<<"your salary is granted and your salary is \n"<<	Branch3.salary_of_Assistant_Manager<<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		
	}
	    break;
	
	 	case 15:
	  	if (a  = 15)
	  	{
	  		cout<<"your salary is granted and your salary is \n"<<	Branch3.salary_of_Frontdesktask<<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		
	}
	    break ;
	    case 16:
	  	if (a  = 16)
	  	{ 
	  		cout<<"your salary is granted and your salary is \n"<<	Branch3.salary_of_housekeepeingstaff<<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		  }	
		  break ;
		  case 17:
	  	if (a = 17)
	  	{
	  		cout<<"your salary is granted and your salary is \n"<<	Branch3.salary_of_foodandbeveragestaff<<endl ;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		
	}
	    break;
		case 18:
	  	if (a  = 18)
	  	{
	  		cout<<"your salary is granted and your salary is \n"<<	Branch3.salary_of_financestaff<<endl;
		  }
		  else 
		 {
		  cout<<"your salary is denied"<<endl;
		  
	}
	  break;
	  default:
	  	cout<<"your salary is rejected"<<endl;
	  
}


	}
	else {
		cout<<"enter the number a again"<<endl;
	}
	   }
	   while(true);


          // Define variables to store assets and liabilities
    Asset assets;
    Liability liabilities;
    
    // Take input for assets
    cout << "Enter cash: ";
    cin >> assets.cash;
    cout << "Enter inventory: ";
    cin >> assets.inventory;
    //cout << "Enter property value: ";
    //cin >> assets.property;
    
    // Take input for liabilities
    cout << "Enter loan amount: ";
    cin >> liabilities.loan;
    //cout << "Enter mortgage amount: ";
    //cin >> liabilities.mortgage;
    //cout << "Enter credit card debt: ";
    //cin >> liabilities.creditCard;
    
    // Calculate total assets and liabilities
    double totalAssets = assets.cash + assets.inventory ;
    double totalLiabilities = liabilities.loan ;
    
    // Print the balance sheet
    cout << "\nBalance Sheet\n";
    cout << "--------------\n";
    cout << "Assets\n";
    cout << "  Cash: $" << fixed << setprecision(2) << assets.cash << endl;
    cout << "  Inventory: $" << fixed << setprecision(2) << assets.inventory << endl;
    
    cout << "  Total Assets: $" << fixed << setprecision(2) << totalAssets << endl << endl;
    
    cout << "Liabilities\n";
    cout << "  Loan: $" << fixed << setprecision(2) << liabilities.loan << endl;
   
    cout << "  Total Liabilities: $" << fixed << setprecision(2) << totalLiabilities << endl << endl;
    
    cout << "Net Worth: $" << fixed << setprecision(2) << totalAssets - totalLiabilities << endl;
    
    
    double Net_worth;
    Net_worth = (totalAssets - totalLiabilities );
    
	
	int tenureYears;
    cout << "Enter years of service: ";
    cin >> tenureYears;
    int actual;
    actual = 2024 - tenureYears;    
    // Add bonus if tenure is more than two years
    
    double Total_End_Result;
    if (actual >= 4) {
        double bonus = 0.05 * (totalAssets - totalLiabilities) ; // 5% bonus
        Total_End_Result = bonus + Net_worth ;
        cout << "Congratulations! You have received a bonus of $" << fixed << setprecision(2) << bonus << endl;
        cout << Total_End_Result;
        
    }
    else 
    { cout<<"youre not eligible\n";
	}

	return 0;
}  
