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
	HDFC h1;
	
	int ch,lch;
	
	do
	{
		
	cout<<"\n 1. Get Data";
	cout<<"\n 2. Show Data";
	cout<<"\n 3. Deposit";
	cout<<"\n 4. Withdraw";
	
	cout<<"\n Enter Operation No = ";
	cin>>ch;
	
	switch(ch)
	{	
	
	case 1: h1.getData();
			break;
	
	case 2: h1.showData();
			break;
	
	case 3: h1.deposit();
			h1.show_balance();
			break;
	
	case 4: h1.withdraw();
			h1.show_balance();
			break;
			
	default: cout<<"\n You Enter Wrong Operation No ";
					break;
					
	}
	
	cout<<"\n Press - 1 For Continue \n Press - 2 For Exit";
	cin>>lch;
	
	}while(lch==1);
	
	return 0;
}
