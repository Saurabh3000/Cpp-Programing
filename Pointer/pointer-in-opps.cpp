#include<iostream>
using namespace std;

class ABC
{
	private : int a;
	private : int b;
	
	public : void setData(int a, int b)
	{
		this->a=a;
		this->b=b;
	}
	
	public : void sum()
	{
		int add=this->a+this->b;
		
		cout<<"\n Sum of Two Number is = "<<add;
	}
}; //end class

int main()
{
	ABC obj;
	ABC *p;
	
	p=&obj;  //storing the address of class object
	
	p->setData(2,4);
	
	p->sum();
	
	return 0;
}
