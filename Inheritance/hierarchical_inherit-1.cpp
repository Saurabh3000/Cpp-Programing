#include<iostream>
using namespace std;

class Bank
{
	protected : string b_name;
	protected : string loc;
	
	public : void readData()
	{
		cout<<"\n Enter Bank Name = ";
		cin>>b_name;
		
		cout<<"\n Enter Location = ";
		cin>>loc;
	}
	
	public : void showData()
	{
		cout<<"\n Bank Name is = "<<b_name;
		cout<<"\n LOcation is = "<<loc;
	}
	
};

class Saving : Bank
{
	private : int accno;
	private : string name;
	private : int bal;
	private : int dp_amt;
	private : int ramt;
	private : int w_amt;
	
	public : void open()
	{
		Bank::readData();
		
		cout<<"\n Enter Account No = ";
		cin>>accno;
		
		cout<<"\n Enter Name = ";
		cin>>name;
		
		cout<<"\n Enter Balance = ";
		cin>>bal;	
	}
	
	public : void deposit()
	{
		
		cout<<"\n Enter Deposit Amount = ";
		cin>>dp_amt;
		
		bal=bal+dp_amt;	
	}
	
	public : void withdraw()
	{
		cout<<"\n Enter Withdraw Amount = ";
		cin>>w_amt;
		
		bal=bal-w_amt;	
	}
	
	public : void showBal()
	{
		cout<<"\n After Transaction Balance is = "<<bal;
	}
	
	
};

class FixedDeposit:Bank
{
	protected : float roi;
	
	public : void setData()
	{
		roi=0.10;
	}
	
	public : showData1()
	{
		Bank::showData();
	}
};

class Employee:Bank
{
	private : int empid;
	private : string ename;
	private : string job;
	
	public : void readInfo()
	{
		Bank::readData();
		
		cout<<"\n Enter Employee ID = ";
		cin>>empid;
		
		cout<<"\n Enter Employee Name = ";
		cin>>ename;
		
		cout<<"\n Enter Employee Job = ";
		cin>>job;	
	}
	
	public : void showInfo()
	{
		Bank::showData();
		
		cout<<"\n Employee ID is = "<<empid;
		cout<<"\n Employee Name is = "<<ename;
		cout<<"\n Employee Job is = "<<job;
	}	
};

class Customer:FixedDeposit
{
	private : string cname;
	private : int lsamt;
	private : int noy;
	private : int m_amt;
	
	public : void acceptData()
	{
		//Bank::readData();
		
		cout<<"\n Enter Customer Name = ";
		cin>>cname;
		
		cout<<"\n Enter Lmsum Amount = ";
		cin>>lsamt;
		
		cout<<"\n Enter No Of Year = ";
		cin>>noy;	
	}	
	
	public : void show()
	{
		//Bank::showData();
		
		cout<<"\n Customer Name is = "<<cname;
		cout<<"\n Lmsum Amount is = "<<lsamt;
		cout<<"\n No Of Year is = "<<noy;
	}
	
	public : void mat_amt()
	{
		FixedDeposit::setData();
		
		int iamt=lsamt*roi*noy;
		m_amt=lsamt+iamt;
		
		cout<<"\n Maturity Amount is = "<<m_amt;
	}
};

int main()
{
	Saving s1;
	
	s1.open();
	s1.deposit();
	s1.showBal();
	s1.withdraw();
	s1.showBal();
	
	Employee e1;
	
	e1.readInfo();
	e1.showInfo();
	
	Customer c1;
	
	c1.acceptData();
	c1.show();
	c1.mat_amt();
	
	return 0;
	
	
}
