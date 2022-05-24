#include<iostream>
using namespace std;

class Person
{
	private: string fname;
	private: string lname;
	
	public: void setData(string fn, string ln)
	{
		fname=fn;
		lname=ln;
	}
	
	public: string fullname()
	{
		return fname+" "+lname;
	}
	
};//end class

int main()
{
	Person p1;
	
	p1.setData("Saurabh","Chavan");
	
	p1.fullname();
	
	cout<<"\n Full Name is = "<<p1.fullname();
	
	
		
	return 0;
}
