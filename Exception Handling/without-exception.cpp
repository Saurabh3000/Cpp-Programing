#include<iostream>
using namespace std;

int division(int a, int b)
{
	int z= a/b;
	
	cout<<"\n Result ="<<z;
}

int main()
{
	
	int a=10, b=0;
	
	division(a,b);
	
	return 0;
	
}

/* Note : - If value of b is 2 then, it work successfully
		   If value of b is o then, program gets terminated */
