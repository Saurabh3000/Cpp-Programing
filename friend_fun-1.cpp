#include<iostream>
using namespace std;

class Circle
{
	private : int r;
	
	public : void getData()
	{
		cout<<"\n Enter Circle Radius = ";
		cin>>r;
	}
	
	public : void area()
	{
		float a=3.14*r*r;
		
		cout<<"\n Area of Circle is = "<<a;
	}
	
	friend void circum(Circle y); //friend function
	
}; //end class

void circum(Circle y)
{
	float c=2*3.14*y.r;
	
	cout<<"\n Circumferance of Circle is = "<<c;
}

int main()
{
	Circle c1;
	
	c1.getData();
	
	c1.area();
	
	circum(c1);
	
	return 0;
}
