#include<iostream>
using namespace std;

void swap(int *p, int *q)
{
	if(*p>*q)
	{
		cout<<"\n Max values is "<<*p;
	}
	else
	{
		cout<<"\n Max values is "<<*q;
	}
}

int main()
{
	int a=10, b=20;
	
	cout<<"\n Value of A is = "<<a;
	cout<<"\n Values of B is = "<<b;
	
	swap(&a,&b);
	
	
	
	return 0;
}
