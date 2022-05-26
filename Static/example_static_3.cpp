#include<iostream>
using namespace std;

class Employee
{
	private : int empid;
	private : string ename;
	private : int bsal;
	private : static float hra;
	private : static float ta;
	private : static float pf;
	private : int hra_Amt;
	private : int ta_Amt;
	private : int pf_Amt;
	
	public : void getData()
	{
		cout<<"\n Enter Employee ID = ";
		cin>>empid;
		
		cout<<"\n Enter Employee Name = ";
		cin>>ename;
		
		cout<<"\n Enter Basic Salary = ";
		cin>>bsal;
	}
	
	public : void showData()
	{
		cout<<"\n Employee ID is = "<<empid;
		cout<<"\n Employee Name is = "<<ename;
		cout<<"\n Employee Basic Salary is = "<<bsal;
		cout<<"\n Employee HRA is = "<<hra*100<<"%";
		cout<<"\n Employee TA is = "<<ta*100<<"%";
		cout<<"\n Employee PF is = "<<pf*100<<"%";
	}
	
	public : void allowance()
	{
		hra_Amt=bsal*hra;
		ta_Amt=bsal*ta;
		pf_Amt=bsal*pf;
		
		cout<<"\n Employee Get HRA is = "<<hra_Amt;
		cout<<"\n Employee Get TA is = "<<ta_Amt;
		cout<<"\n Employee Get PF is = "<<pf_Amt;
		
		int t_all=hra_Amt+ta_Amt+pf_Amt;
		
		cout<<"\n Total Allowance is = "<<t_all;
	}
	
	public : void payment()
	{
		int pay=bsal+hra_Amt+ta_Amt+pf_Amt;
		
		cout<<"\n Total Payment is = "<<pay;
	}
};

float Employee::hra=0.30;
float Employee::ta=0.20;
float Employee::pf=0.10;

int main()
{
	
	Employee e1;
	
	e1.getData();
	e1.showData();
	e1.allowance();
	e1.payment();
		
	return 0;
}
