#include<iostream>
using namespace std;

class AAA 
{
	protected : int a=100;	
};

class BBB : AAA    // : gives the permission class BBB to access class AAA
{
	private : int b=200;
	
	public : void sum()
	{
		int s=a+b;
		
		cout<<"\n Sum is = "<<s;
	}
};

int main()
{
	BBB obj;
	
	obj.sum();
	
	return 0;
}
