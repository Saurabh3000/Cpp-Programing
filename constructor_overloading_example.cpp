#include<iostream>
using namespace std;

class Box
{
	private : int l;
	private : int b;
	private : int h;
	
	public : Box(int x, int y, int z)
	{
		l=x;
		b=y;
		h=z;
	}
	
	public : Box(int x)
	{
		l=x;
		b=x;
		h=x;
	}
	
	public : Box()  
	{
		l=2;
		b=3;
		h=6;
	}
	
	public : void volume()
	{
		int v=l*b*h;
		
		cout<<"\n Volume of Box is = "<<v;
	}
	
}; //end class

int main()
{
	Box b1(4,5,4);
	b1.volume();
	
	cout<<"\n ----------------------------------------\n";
	
	Box b2(4);
	b2.volume();
	
	cout<<"\n ----------------------------------------\n";
	
	Box b3;
	b3.volume();
	
	return 0;
}
