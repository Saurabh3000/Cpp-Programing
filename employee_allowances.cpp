//create one object print all allowance. print payment.

#include<iostream>
using namespace std;

class Employee
{
	private: string name;
	private: int bsal;
	
	public: void enterData(string n, int x)
	{	
		name=n;
		bsal=x;
	}
	
	public: void showData()
	{
		
		cout<<"\n Employee Name is = "<<name;
		cout<<"\n Employee Basic Salary is = "<<bsal;
		
	}	
	
	public: int hra_fun() //30% of bsal
	{
		int hra=bsal*0.30;
		
		return hra;
	}
	
	public: int ta_fun() //20% of bsal
	{
		int ta=bsal*0.20;
		
		return ta;
	}
	
	public: int pf_fun() //10% of bsal
	{
		int pf=bsal*0.10;
		
		return pf;
	}
	
};  //end class

int main()
{
	Employee e1;  //e1object of Employee class
	
	string name;
	int sal;
	
	cout<<"\n Enter Employee Name = ";
	cin>>name;
	
	cout<<"\n Enter Basic Salary = ";
	cin>>sal;
		
	e1.enterData(name,sal);
	e1.showData();
	int hra_amt=e1.hra_fun();
	int ta_amt=e1.ta_fun();
	int pf_amt=e1.pf_fun();
	
	cout<<"\n House Rent Allowance is = "<<hra_amt;
	cout<<"\n Travelling Allowance is = "<<ta_amt;
	cout<<"\n Provident Fund is = "<<pf_amt;
	
	int t_all=hra_amt+ta_amt+pf_amt;
	
	cout<<"\n Total Allowance is = "<<t_all;
	
	int t_pay=t_all+sal;
	
	cout<<"\n Total Payment is = "<<t_pay;
	
	return 0;
}
