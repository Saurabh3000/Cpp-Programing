#include<iostream>
using namespace std;

void area(int r)
{
	
	
	float a=3.14*r*r;
	
	cout<<"\n Area of Circle is = "<<a;

} //end area function


void circum(int r)
{

	float c=2*3.14*r;
	
	cout<<"\n Circumference of Circle is = "<<c;

} //end circumference function

int main()
{
	int r;  // r is a radius
	
	cout<<"\n Enter the Radius = ";
	cin>>r;
	
	try
	{
		
		if(r==0)
		{
			throw "Radius can not Be Zero";
		}
		
		if(r<0)
		{
			throw "Radius can not Be Negative";
		}
		
		if(r>100)
		{
			throw "Radius Range Must Be in 1 to 100";
		}
		
		area(r);
		circum(r);
	}
	catch(const char *msg)
	{
		cout<<msg<<"\n";
	}	
	
	return 0;
}
