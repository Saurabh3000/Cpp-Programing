#include<iostream>
using namespace std;

template<class T>
class Myclass
{
	private : T num1, num2;
	
	public : Myclass(T x, T y)
	{
		num1=x;
		
		num2=y;
	}
	
	public : void show()
	{
	
	cout<<"\n The Addition of Two Number is = "<<add();
	
	cout<<"\n The Subtraction of Two Number is = "<<sub();
	
	cout<<"\n The Multiplication of Two Number is = "<<mul();
	
	cout<<"\n The Division of Two Number is = "<<div();
	}
	
	public : T add()
	{
		return num1+num2;
	}
	
	public : T sub()
	{
		return num1-num2;
	}
	
	public : T mul()
	{
		return num1*num2;
	}
	
	public : T div()
	{
		return num1/num2;
	}
	
};//end class

int main()
{
	Myclass<int> obj1(10,20);
	
	cout<<"\n Operation on Ingeter Object \n";
	obj1.show();
	
	Myclass<float> obj2(3.5,2.2);
	
	cout<<"\n\n Operation on Float Object \n";
	obj2.show();
	
	return 0;
}
