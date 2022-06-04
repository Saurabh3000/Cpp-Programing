#include<iostream>
using namespace std;

template<class T>T max(T &a, T &b)
{
	if(a>b)
	{
		cout<<"\n Largest Number is = "<<a;
	}
	else if(b>a)
	{
		cout<<"\n Largest Number is ="<<b;
	}
	else
	{
		cout<<"\n Both are Same = "<<a<<" And "<<b;
	}
	
}

int main()
{
	int a=500, b=500;
	float x=77.88, y=88.77;
	char c='A', d='a';
	
	max(a,b);
	max(x,y);
	max(c,d);
	
	return 0;
}
