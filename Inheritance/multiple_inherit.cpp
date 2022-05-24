#include<iostream>
using namespace std;

class Person
{
	protected : string fname;
	protected : string lname;
	protected : string city;
	
	public : void getData()
	{
		cout<<"\n Enter First Name = ";
		cin>>fname;
		
		cout<<"\n Enter Last Name = ";
		cin>>lname;
		
		cout<<"\n Enter City Name = ";
		cin>>city;
	}
	
	public : void showData()
	{
		cout<<"\n First Name = "<<fname;
		cout<<"\n Last Name  = "<<lname;
		cout<<"\n City is = "<<city;
	}
};

class Company
{
	protected : string cname;
	protected : string location;
	
	public : void getData1()
	{
		cout<<"\n Enter Company Name = ";
		cin>>cname;
		
		cout<<"\n Enter Location = ";
		cin>>location;
	}	
	
	public : void displayData()
	{
		
		cout<<"\n Company Name is = "<<cname;
		cout<<"\n Location is = "<<location;
	}
};

class Employee:Company,Person
{
	private : int empid;
	private : string job;
	private : int wg;
	private : int wd;
	
	public : void accept()
	{
		Company::getData1();
		Person::getData();
		cout<<"\n Enter Employee ID = ";
		cin>>empid;
		
		cout<<"\n Enter Employee Job = ";
		cin>>job;
		
		cout<<"\n Enter Employee Wages = ";
		cin>>wg;
		
		cout<<"\n Enter Employee Working Days = ";
		cin>>wd;			
	}
	
	public : void writeData()
	{
		Company::displayData();
		Person::showData();
		
		cout<<"\n Employee ID is = "<<empid;
		cout<<"\n Employee Job is = "<<job;
		cout<<"\n Employee Wages is = "<<wg;
		cout<<"\n Employee Working Days is = "<<wd;
	}
	
	public : void payment()
	{
		int t_pay=wg*wd;
		
		cout<<"\n Employee Payment is = "<<t_pay;
	}
	
};

int main()
{
	Employee e1;
	
	e1.accept();
	e1.writeData();
	e1.payment();
	
	return 0;
}
