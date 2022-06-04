#include<iostream>
using namespace std;

void division(int a, int b)
{
	try{
	
		if(b==0)
		{
			throw "You are trying to divied by zero";
		}
	}
	catch(const char *msg)
	{
		cout<<msg<<"\n";
	}
	
		int z= a/b;
	
		cout<<"\n Result ="<<z;	
}

int main()
{
	
	int a, b;
	
	cout<<"\n Enter the value for A and B = ";
	cin>>a>>b;
	
	division(a,b);
		
	return 0;
	
}
