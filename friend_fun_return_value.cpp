#include<iostream>
using namespace std;

class ABC
{
	private : int n;
	
	public : void getData()
	{
		cout<<"\n Enter a Number = ";
		cin>>n;
	}
	
		friend int square(ABC x); //friend function
		
		friend int cube(ABC y);  //friend function
	
}; //end class

int square(ABC x)
{
	
	int s=x.n	*	x.n;
	
	return s;
}

int cube(ABC y)
{
	int c=y.n *	y.n * y.n;
	
	return c;	
}


int main()
{
	
	ABC obj;
	
	obj.getData();
	
	cout<<"\n Square of Number is = "<<square(obj);
	cout<<"\n Cube of Number is = "<<cube(obj);
	
	return 0;
}
