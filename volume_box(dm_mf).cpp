#include<iostream>
using namespace std;

class Box
{
	private: int l;
	private: int b;
	private: int h;
	
	public: void setData(int x, int y, int z)
	{
		l=x;
		b=y;
		h=z;
	}
	
	public: void volume()
	{
		int v=l*b*h;
		
		cout<<"\n Volume of Box is = "<<v;
	}
	
};

int main()
{
	Box v1;       //v1 is object of box. Use to reserv the space for data member.
	
	v1.setData(2,3,4);
	v1.volume();
	
	cout<<"\n---------------------------------\n";
	
	Box v2;     //v2 is objcet of box.
	
	v2.setData(4,5,6);
	v2.volume();
	
	return 0;
}
