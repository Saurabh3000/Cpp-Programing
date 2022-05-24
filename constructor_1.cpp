#include<iostream>
using namespace std;

class ABC
{
	public : ABC()
	{
		cout<<"\n Constructor get Called";
	}
	
	public : void showMeg()
	{
		cout<<"\n Welcome to Pune";
	}
}; //end class

int main()
{
	ABC obj; //obj - Object of ABC Class. When obj created constructor called automatically
	
	obj.showMeg();
	
	return 0;
}
