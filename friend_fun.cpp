#include<iostream>
using namespace std;

class TestSum
{
	private : int a;
	private : int b;
	
	friend void sum(TestSum x, TestSum y); //friend function

}; //end class

void sum(TestSum x, TestSum y)
{
	x.a=10;
	y.b=20;
	
	int c=x.a	+	y.b;
	
	cout<<"\n Sum of Two Number is = "<<c;
}

int main()
{
	TestSum t1;
	
	sum(t1,t1); //while calling friend function
	
	return 0;
}
