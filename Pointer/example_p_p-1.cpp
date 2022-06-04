#include<iostream>
using namespace std;

int main()
{
	int a=100;
	
	int *p;  	//pointer
	
	int **q; 	//pointer to pointer
	
	p=&a;  //storing address of a variable
	
	q=&p;  //storing address of p pointer
	
	cout<<"\n value of A is = "<<a;
	
	cout<<"\n Access A value by Pointer = "<<*p;
	
	cout<<"\n Access value of A by Pointer to Pointer = "<<**q;
	
	return 0;
}
