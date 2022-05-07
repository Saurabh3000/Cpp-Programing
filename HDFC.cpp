#include<iostream>
using namespace std;

class HDFC
{
	private: int accno;
	private: string name;
	private: int bal;
	
	public: void getData()
	{
		cout<<"\n Enter Account Number = ";
		cin>>accno;
		
		cout<<"\n Enter Name = ";
		cin>>name;
		
		cout<<"\n Enter Balance = ";
		cin>>bal;
	}
	
	public: void showData()
	{
		cout<<"\n Account Number is = "<<accno;
		cout<<"\n Name is = "<<name;
		cout<<"\n Balance is = "<<bal;
	}
	
	public: void deposit()
	{
		int damt;
		cout<<"\n Enter the Amount for Deposit = ";
		cin>>damt;
		
		bal=bal+damt;
	}
	
	public: void withdraw()
	{
		int wamt;
		cout<<"\n Enter the Amount for Withdraw = ";
		cin>>wamt;
		
		if(bal>wamt)
		{
			bal=bal-wamt;	
		}
		else
		{
			cout<<"\n Insufficient Balance in Account";
			cout<<"\n You Trying to Withdraw "<<wamt;
		}		
	}
	
	public: void show_balance()
	{
		cout<<"\n Balance Amount After Trasaction is = "<<bal;
	}
	
};//end of class

int main()
{
	HDFC b1;
	
	b1.getData();
	b1.showData();
	
	b1.deposit();
	b1.show_balance();
	
	b1.withdraw();
	b1.show_balance();
		
	return 0;
}
