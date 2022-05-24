#include<iostream>
using namespace std;

class Product
{
	private : string pname;
	private : int rate;
	private : int qty;
	
	public : void getData()
	{
		cout<<"\n Enter Product Name = ";
		cin>>pname;
		
		cout<<"\n Enter Product Rate = ";
		cin>>rate;
		
		cout<<"\n Enter Product Quantity = ";
		cin>>qty;	
	}
	
	public : void showData()
	{
		cout<<"\n Product Name is = "<<pname;
		cout<<"\n Prouduct Rate is = "<<rate;
		cout<<"\n Product Quantity is = "<<qty;
	}
	
	public : void bill()
	{
		int bamt=rate*qty;
		
		cout<<"\n Bill is = "<<bamt;
	}
};

int main()
{
	Product p1[5];
	
	for(int i=0;	i<=4;	i++)
	{
		cout<<"\n Enter Product Info"<<i+1;
		
		p1[i].getData();
		p1[i].showData();
		p1[i].bill();
		
		cout<<"\n----------------------------------------\n";
	}
	
	return 0;
}
