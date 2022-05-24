#include<iostream>
using namespace std;

class Company
{
	protected : string company_name;
	protected : string location;
	
	public : void acceptData()
	{
		cout<<"\n Enter Company Name = ";
		cin>>company_name;
	
		cout<<"\n Enter Location = ";
		cin>>location;
	}
	
	public : void showData()
	{
		cout<<"\n Compay Name is = "<<company_name;
		cout<<"\n Location is "<<location;
	}
	
}; //end Company Class

class Employee : Company
{
	private : int empid;
	private : string ename;
	private : int wg;
	private : int wd;
	
	public : void getData()
	{
		Company::acceptData();
		
		cout<<"\n Enter Employee ID = ";
		cin>>empid;
		
		cout<<"\n Enter Employee Name = ";
		cin>>ename;
		
		cout<<"\n Enter Wages = ";
		cin>>wg;
		
		cout<<"\n Enter Working Days = ";
		cin>>wd;
	}	
	
	public : void showData1()
	{
		Company::showData();
		
		cout<<"\n Employee ID is = "<<empid;
		cout<<"\n Employee Name is = "<<ename;
		cout<<"\n Employee Wages is = "<<wg;
		cout<<"\n Employee Working Days is = "<<wd;
	}
	
	public : void payment()
	{
		int pay=wg*wd;
		
		cout<<"\n Payment is = "<<pay;
	}
	
}; //end Employee Class

int main()
{
	Employee e1;
	
	e1.getData();
	e1.showData1();
	e1.payment();
		
	return 0;
}
