#include<iostream>
using namespace std;

class Person
{
	protected : string name;
	protected : string city;
	
	public : void getData()
	{
		cout<<"\n Enter Name = ";
		cin>>name;
		
		cout<<"\n Enter City Name = ";
		cin>>city;
	}
	
	public : void showData()
	{
		cout<<"\n Name is = "<<name;
		cout<<"\n City is = "<<city;
	}
	
}; //end person class

class Employee:Person
{
	
	protected : int empid;
	protected : string ename;
	protected : string job;
	protected : int wg;
	protected : int wd;
	
	public : void getData1()
	{
		Person::getData();
		
		cout<<"\n Enter Employee ID = ";
		cin>>empid;
		
		cout<<"\n Enter Employee Name = ";
		cin>>ename;
		
		cout<<"\n Enter Job = ";
		cin>>job;
		
		cout<<"\n Enter Wages = ";
		cin>>wg;
		
		cout<<"\n Enter Working Days = ";
		cin>>wd;
	}
	
	public : void showData1()
	{
		Person::showData();
		
		cout<<"\n Employee ID is = "<<empid;
		cout<<"\n Employee Name is = "<<ename;
		cout<<"\n Employee Job is = "<<job;
		cout<<"\n Employee Wages is = "<<wg;
		cout<<"\n Employee Working Days is = "<<wd;
	}
	
	public : void payment()
	{
		int pay=wg*wd;
		
		cout<<"\n Payment is = "<<pay;
	}
	
}; //end class

class Manager:Employee
{
	
	private : string deptname;
	private : int comm;
	
	public : void accept()
	{
		Employee::getData1();
		
		cout<<"\n Enter Department =";
		cin>>deptname;
		
		cout<<"\n Enter Commision = ";
		cin>>comm;
	}
	
	public : void write()
	{
		Employee::showData1();
		Employee::payment();
		
		cout<<"\n Department Name is = "<<deptname;
		cout<<"\n Commision is = "<<comm;
	}
	
}; //end class

int main()
{
	Manager m1;
	
	m1.accept();
	m1.write();	
	
	return 0;
}
