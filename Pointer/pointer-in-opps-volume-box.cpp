#include<iostream>
using namespace std;

class Box
{
	private : int l;
	private : int b;
	private : int h;
	
	public : void setData(int l, int b, int h)
	{
		this->l=l;
		this->b=b;
		this->h=h;
	}
	
	public : void volume()
	{
		int v=this->l*this->b*this->h;
		
		cout<<"\n Volume of Box is = "<<v;
	}
}; //end class

int main()
{
	Box obj;
	Box *p;
	
	p=&obj;  //storing the address of class object
	
	p->setData(2,4,6);
	
	p->volume();
	
	return 0;
}
