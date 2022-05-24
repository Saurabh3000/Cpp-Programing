#include<iostream>
using namespace std;

class Rectangle
{
	private: int len;
	private: int bre;
	
	public: Rectangle()
	{
		len=4;
		bre=5;
	}
	
	public: void setData(int l, int b)
	{
		len=l;
		bre=b;
	}
	
	public: void area()
	{
		int a=len*bre;	
		cout<<"\n Area of Rectangle = "<<a;
	}
	
	public: void perimeter()
	{
		int p=2*(len+bre);
		
		cout<<"\n Perimeter of Reactangle is = "<<p;
	}
		
}; //end of class

int main()
{
	
	Rectangle r1;
	
	r1.area();
	r1.perimeter();
	
	Rectangle r2;
	r2.setData(2,4);
	r2.area();
	r2.perimeter();
	
	return 0;
}
