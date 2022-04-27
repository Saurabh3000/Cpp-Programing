//WAP to print sum of square of second and second last number from 5 digit number.

#include<iostream>
using namespace std;

int main()
{
	int n=56789;
	
	int a=(n/1000)%10;    //a=6
	
	int b=(n/10)%10;      //b=8
	
	int sa=a*a;
	int sb=b*b;
	
	int sum=sa+sb;
	
	cout<<"\n Square of Second Number is = "<<sa;
	cout<<"\n Square of Second Last Number is = "<<sb;
	
	cout<<"\n Sum is = "<<sum;
	
	return 0;
}
