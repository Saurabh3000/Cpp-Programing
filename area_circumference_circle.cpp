#include<iostream>
using namespace std;

class Circle
{
	private: int r;
	
	public: void setRedius(int x)
	{
		r=x;
	}
	
	public: void area()
	{
		float a=3.14*r*r;
		
		cout<<"\n Area of Cicle is = "<<a;
	}
	
	public: void circum()
	{
		float c=2*3.14*r;
		
		cout<<"\n Circumference of Circle is = "<<c;
	}
};

int main()
{
	Circle obj;   //obj is Objcet of Circle.
	
	obj.setRedius(2);
	obj.area();
	obj.circum();
	
	return 0;
}
