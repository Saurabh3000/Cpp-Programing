#include<iostream>
using namespace std;

template<class T>T mean(T &a, T &b, T &c)
{
	T add= a + b + c;
	
	T m=add/3.0;
	
	return m;
}

int main()
{
	int a=22, b=23, c=24;
	float x=3.2, y=4.2, z=5.2;
	
	cout<<"\n Mean is = "<<mean(a,b,c);
	cout<<"\n Mean is = "<<mean(x,y,z);
	
	return 0;
}
