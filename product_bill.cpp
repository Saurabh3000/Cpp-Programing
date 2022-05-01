#include<iostream>
using namespace std;

class Product
{ 
	private: string pname;
	private: int rate;
	private: int qty;
	
	public: void enterData()
	{
		cout<<"\n Enter Product Name = ";
		cin>>pname;
		
		cout<<"\n Enter Product Rate = ";
		cin>>rate;
		
		cout<<"\n Enter Product Quantity = ";
		cin>>qty;
	}
	
	public: void displayData()
	{
		cout<<"\n Product Name is = "<<pname;
		cout<<"\n Product Rate is = "<<rate;
		cout<<"\n Product Quantity is = "<<qty;
	}
	
	public: int bill_fun()
	{	
		return (rate*qty);
	}
	
};  //end of class

int main()
{
	Product p1;
	
	p1.enterData();
	p1.displayData();
	
	int billp1=p1.bill_fun();       //billp1 means 1st product bill
	
	cout<<"\n Bill Amount is = "<<billp1;
	
	cout<<"\n---------------------------------------------\n";
	
	Product p2;
	
	p2.enterData();
	p2.displayData();
	
	int billp2=p2.bill_fun();        //billp2 means 2st product bill
	
	cout<<"\n Bill Amount is = "<<billp2;
	
	cout<<"\n------------------------------------------------\n";
	
	int t_bill=billp1+billp2;
	
	cout<<"\n Total Bill Amount is = "<<t_bill;
	
	return 0;
}
