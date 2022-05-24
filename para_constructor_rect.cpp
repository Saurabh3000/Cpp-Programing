#include<iostream>
using namespace std;

class Rect
{
	private: int len;
	private: int bre;
	
	public: Rect(int x, int y)
	{
		len=x;
		bre=y;
	}
	
	public: void area()
	{
		int a=2*len*bre;
		
		cout<<"\n Area of Reactangle is = "<<a;
	}
}; //class end

int main()
{
	Rect r1(2,4);
	
	r1.area();
	return 0;
}
