#include<iostream>
using namespace std;

class Circle
{
	private : int r;
	
	public : Circle()
	{
		r=4;          //data member intialized
	}
	
	public : void setReadius(int x)
	{
		r=x;
	}
	
	public : void area()
	{
		float a=3.14*r*r;
		cout<<"\n Area of Circle is = "<<a;
	}
	
	public : void circum()
	{
		float c=2*3.14*r;
		cout<<"\n Circumference of Circle is = "<<c;
	}
	
}; //end class


int main()
{
	Circle c1; // r[ ]   r=[ 4 ]
	
	c1.area();
	c1.circum();
	
	Circle c2;  //  r=[ ]  r=[ 4 ]
	c2.setReadius(6);  //r=[ ]
	c2.area();
	c2.circum();
	
	return 0;
}
