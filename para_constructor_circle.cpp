#include<iostream>
using namespace std;

class Circle
{
	private: int r;
	
	public: Circle(int x) //para constructor
	{
		r=x;
	}
	
	public: void area()
	{
		float a=3.14*r*r;
		
		cout<<"\n Area of Circle is = "<<a;
	}
	
}; //end of class

int main()
{
	Circle c1(4); //para constructor called
	
	c1.area();
	
	return 0;
}
