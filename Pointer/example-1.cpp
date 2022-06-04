#include<iostream>
using namespace std;

int main()
{
	int a=100;
	
	int *p;
	
	p=&a; // p storing address of a variable
	
	cout<<"\n Value of A is = "<<a;
	
	cout<<"\n Value of A is access by pointer = "<<*p;  //access the value of a variable
	
	return 0;
}
