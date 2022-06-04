#include<iostream>
using namespace std;

void pay(int wg, int wd)
{
	
	int payment = wg * wd;
	
	cout<<"\n Payment of Employee is = "<<payment;

}

int main()
{
	
	string ename;
	int wg;
	int wd;
	
	cout<<"\n Enter Employee Name = ";
	cin>>ename;
	
	cout<<"\n Enter Employee Wages = ";
	cin>>wg;
	
	cout<<"\n Enter Employee Working Days = ";
	cin>>wd;
	
	try{
		if(wg<=0)
		{
			throw "Wages Must Be Positive";
		}
		if(wd<=0)
		{
			throw "Working Days Must Be Positive";
		}
		if(wd>31)
		{
			throw "Working Days can not be more than 31";
		}
		
		pay(wg,wd);
	}
	catch(const char *msg)
	{
		cout<<msg<<"\n";
	}
	
	return 0;
}

