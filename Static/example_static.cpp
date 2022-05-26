#include<iostream>
using namespace std;

class Account
{
	private : int accno;
	private : int bal;
	private : string name;
	private : static float roi;
	
	public : void getData()
	{
		cout<<"\n Enter Account Number = ";
		cin>>accno;
		
		cout<<"\n Enter Bank Name = ";
		cin>>name;
		
		cout<<"\n Enter Balance = ";
		cin>>bal;
	}
	
	public : void showData()
	{
		cout<<"\n Account Number is = "<<accno;
		cout<<"\n Bank Name is = "<<name;
		cout<<"\n Balance is = "<<bal;
		cout<<"\n Rate of Interest is = "<<roi;
	}	

};

float Account::roi=4.5; //datatype className::DataMamber=value

int main()
{
	
	Account a1;  //memory allocate to all dm
	
	a1.getData();
	a1.showData();
	
	cout<<"\n---------------------------------\n";
	
	Account a2; //memory allocate to only accno,name,bal
	
	a2.getData();
	a2.showData();
	
	return 0;
}
