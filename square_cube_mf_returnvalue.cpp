#include<iostream>
using namespace std;

class Test
{
	
	public: int square(int x)
	{
		return (x*x);
	}
	
	public: int cube(int x)
	{
		return (x*x*x);	
	}
	
};  //end of class

int main()
{	
	Test t1; //t1 is object of Test class

	int n;
	
	cout<<"\n Enter a Number = ";
	cin>>n;
		
	cout<<"\n Square of Given Number is = "<<t1.square(n);
	
	int c=t1.cube(n);
	
	cout<<"\n Cube of Given Number is = "<<c;
		
	return 0;
}
