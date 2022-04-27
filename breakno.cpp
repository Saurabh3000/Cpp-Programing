//WAP to print sum of first and last number from 4 digit number.

#include<iostream>
using namespace std;

int main()
{
	int n=5467;
	
	int a=n/1000;   //a=5
	
	int b=n%10;     //b=7
	
	int sum=a+b;
	
	cout<<"\n First Number is = "<<a;
	
	cout<<"\n Last Number is = "<<b;
	
	cout<<"\n Sum is = "<<sum;
	return 0;
}
