#include<iostream>
using namespace std;

class Area
{
	
	private : int l;
	private : int b;
	private : int h;
	private : int r;
	
	public : void getData()
	{
		cout<<"\n Enter Radius =";
		cin>>r;
		
		cout<<"\n Enter Length = ";
		cin>>l;
		
		cout<<"\n Enter Breath = ";
		cin>>b;
		
		cout<<"\n Enter Height = ";
		cin>>h;
	}
	
	// friend function name is same but different parameter this is called member function overloading
	
	friend void area(Area x);
	
	friend void area(Area a, Area b);
	
	friend void area(Area c, Area d, Area e);
	
}; //end class


void area(Area x)
{
	float ca=3.14*x.r*x.r;
	
	cout<<"\n Area of Circle is = "<<ca;
}

void area(Area a, Area b)
{
	
	float ar=a.l*b.b;
	
	cout<<"\n Area of Rectangle is = "<<ar;
}

void area(Area c, Area d, Area e)
{
	float ab=c.l*d.b*e.h;
	
	cout<<"\n Area of Box is = "<<ab;
}

int main()
{
	Area a1;
	
	a1.getData();
	
	area(a1);
	
	area(a1,a1);
	
	area(a1,a1,a1);
	
	return 0;
}
