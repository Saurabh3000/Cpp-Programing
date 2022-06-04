#include<iostream>
using namespace std;

void swap(int *p, int *q)
{
	int z=*p;
	
	*p=*q;
	
	*q=z;
}

int main()
{
	int a=10, b=20;
	
	cout<<"\n Value of A Before Swap is = "<<a;
	cout<<"\n Values of B Befoer Swap is = "<<b;
	
	swap(&a,&b);
	
	cout<<"\n\n Value of A After Swap is = "<<a;
	cout<<"\n Values of B After Swap is = "<<b;
	
	return 0;
}
