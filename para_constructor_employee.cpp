#include<iostream>
using namespace std;

class Employee
{
	private: int eid;
	private: string ename;
	private: string job;
	private: int wages;
	private: int wdays;
	private: string company;
	
	public: Employee(string x)
	{
		company=x;
	}
	
	public: void getdata()
	{
		cout<<"\n Enter Employee ID = ";
		cin>>eid;
		
		cout<<"\n Enter Employee Name = ";
		cin>>ename;
		
		cout<<"\n Enter Employee Job = ";
		cin>>job;
		
		cout<<"\n Enter Employee Wages = ";
		cin>>wages;
		
		cout<<"\n Enter Employee Working Days = ";
		cin>>wdays;
	}
	
	public: void showData()
	{
		cout<<"\n Employee ID is = "<<eid;
		cout<<"\n Employee Name is = "<<ename;
		cout<<"\n Employee Job is = "<<job;
		cout<<"\n Employee Wages is = "<<wages;
		cout<<"\n Employee Working Days is = "<<wdays;
		cout<<"\n Employee Company Name is = "<<company;
	}
	
	public: void payment()
	{
		int pay=wages*wdays;
		
		cout<<"\n Employee Payment is = "<<pay;
	}
	
}; //end class

int main()
{
	Employee e1("IBM");
	
	e1.getdata();
	e1.showData();
	e1.payment();
	
	return 0;
}
