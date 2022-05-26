#include<iostream>
using namespace std;

class Test
{
	public : static void square(int n)  //static method mf
	{
		
		int s=n*n;
		
		cout<<"\n Square is = "<<s;
	}
	
	public : void cube(int n)  //non static mf
	{
		
		int c=n*n*n;
		
		cout<<"\n Cube is = "<<c;
	}
};

int main()
{
	Test::square(4);
	
	Test t1;
	t1.cube(6);
	
	return 0;
}
