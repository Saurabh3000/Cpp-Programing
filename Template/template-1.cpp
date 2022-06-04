#include<iostream>
using namespace std;

template<class T>T sum(T &a, T &b)
{
	T z = a + b;
	cout<<"\n Sum of All Number is = "<<z;
}

int main()
{
	int a=5, b=100;
	float x=5.2, y=3.2;
	
	sum(a,b);
	sum(x,y);
	
	return 0;
}
