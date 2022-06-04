#include<iostream>
using namespace std;

template<class T>T swapx(T &a, T &b)
{
	cout<<"\n\n Values Befor Swap is = "<<a;
	cout<<"\n Values Befor Swap is = "<<b;
		
	T x;
	
	x=a;
	
	a=b;
	
	b= x;
	
	cout<<"\n\n Values After Swap is = "<<a;
	cout<<"\n Values After Swap is = "<<b;
}

int main()
{
	
	int c=2, d=4;
	float z=2.2, y=3.2;
	
  	swapx(c,d);
	
	swapx(z,y);
	
	return 0;
}
