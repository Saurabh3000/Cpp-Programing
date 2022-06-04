#include<iostream>
using namespace std;

void bill(string pname, int rate, int qty)
{
	cout<<"\n Product Name is = "<<pname;
	cout<<"\n Product Rate is "<<rate;
	cout<<"\n Product Quantity is = "<<qty;
	
	int b=rate * qty;
	
	cout<<"\n Bill Amount is = "<<b;
	
}

int main()
{
	string pname;
	int rate;
	int qty;
	
	cout<<"\n Enter Product Name = ";
	cin>>pname;
	
	cout<<"\n Enter Rate = ";
	cin>>rate;
	
	cout<<"\n Enter a Quantity of Product = ";
	cin>>qty;
	
	try{
		
		if(rate<=0 && qty<=0)
		{
			throw "Rate And Quantity are Invalid";
		}
		if(rate<0) 
		{
			throw "Invalid Rate";
		}
		if(rate==0)
		{
				throw "Rate Not Be Zero";
		}
		if(qty<0) 
		{
			throw "Invalid Quantity";
		}
		if(qty==0)
		{
				throw "Quantity Not Be Zero";
		}	
		
		bill(pname,rate,qty);
	}
	catch(const char *msg)
	{
		cout<<msg<<"\n";
	}
	
	return 0;
}
