#include<iostream>
using namespace std;

class Product
{
	private: string pname;
	private: int rate;
	private: int qty;
	
	public: void readData()
	{
		cout<<"\n Enter Product Name = ";
		cin>>pname;
		
		cout<<"\n Enter Product Rate = ";
		cin>>rate;
		
		cout<<"\n Enter Product Quantity = ";
		cin>>qty;
	}
	
	public: void showData()
	{
		cout<<"\n Product Name is  = "<<pname;
		cout<<"\n Product Rate is = "<<rate;
		cout<<"\n Product Quantity is = "<<qty;	
	}
	
	public: int bill_fun()
	{
		int bamt;
		
		bamt=rate*qty;
		
		return bamt;
	}
	
	public: void discount(int amt)
	{
		int disamt=amt*0.30;
		int fbill=amt-disamt;
		
		cout<<"\n Discount Amount is = "<<disamt;
		cout<<"\n Your Final Bill is = "<<fbill;
	}
	
	
};

int main()
{
	Product p;
	
	p.readData();
	p.showData();
	int bamt=p.bill_fun();
	
	cout<<"\n Your Bill is = "<<bamt;
	
	if(bamt>=10000)
	{
		p.discount(bamt);
	}
	return 0;
}
