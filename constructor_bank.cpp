#include<iostream>
using namespace std;

class Axis
{
	private : int accno;
	private : string name;
	private : int amt;
	private : int noy;
	
	private : float fd_roi;
	private : float hm_roi;
	private : float sv_roi;
	
	public : Axis() // By default constructor
	{
		fd_roi=0.10;
		hm_roi=0.07;
		sv_roi=0.04;
	}
	
	public : void acceptData()
	{
		cout<<"\n Enter Account Number = ";
		cin>>accno;
		
		cout<<"\n Enter Name  = ";
		cin>>name;
		
		cout<<"\n Enter Amount = ";
		cin>>amt;
		
		cout<<"\n Enter No Of Year = ";
		cin>>noy;
	}
	
	public : void fixedDeposit()
	{
		int iamt=(amt*fd_roi)*noy;
		int mat_amt=amt+iamt;
		
		cout<<"\n Total Intrest Amount is = "<<iamt;
		cout<<"\n Maturity Amount is = "<<mat_amt;		
	}
	
	public : void homeAllowance()
	{
		int hiamt=(amt*hm_roi)*noy;
		int hmat_amt=amt+hiamt;
		
		cout<<"\n Total Home Allowance Amount is = "<<hiamt;
		cout<<"\n Maturity Amount is = "<<hmat_amt;
	}
	
	public : void saveAllowance()
	{
		int svamt=(amt*sv_roi)*noy;
		int sv_amt=amt+svamt;
		
		cout<<"\n Total Saving Allowance Amount is = "<<svamt;
		cout<<"\n Maturity Amount is = "<<sv_amt;
	}
}; //end class

int main()
{
	Axis a1;
	
	a1.acceptData();
	a1.fixedDeposit();
	a1.homeAllowance();
	a1.saveAllowance();
	
	return 0;
}
