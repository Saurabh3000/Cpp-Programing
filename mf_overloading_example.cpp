#include<iostream>
using namespace std;

class TestArea
{
	
	public: void area(int r) //one parameter
	{
		float a=3.14*r*r;
		
		cout<<"\n Area of Circle is = "<<a;
	}
	
	public: void area(int l, int b)  //two parameter
	{
		int a=l*b;
		
		cout<<"\n Area of Rectangle is = "<<a;
	}
	
	public: void area(int l, int b, int h)  //three parameter
	{
		int a=l*b*h;
		
		cout<<"\n Area of Box is = "<<a;
	}
	
}; //end class

int main()
{
	TestArea a1;
	
	a1.area(4);
	a1.area(2,3);
	a1.area(4,5,2);
	
	return 0;
}
