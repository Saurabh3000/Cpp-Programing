#include<iostream>
using namespace std;

class Student
{
	private: int rollno;
	private: string name;
	private: string branch;
	private: string college;
	
	public: Student()
	{
		branch="Computer";
		college="SITS";
	}
	
	public: void setData(string a, string b)
	{
		branch=a;
		college=b;
	}
	
	public: void acceptData()
	{
		cout<<"\n Enter Roll No = ";
		cin>>rollno;
		
		cout<<"\n Enter Name = ";
		cin>>name;
	}
	
	public: void showData()
	{
		cout<<"\n Roll No is = "<<rollno;
		cout<<"\n Name is = "<<name;
		cout<<"\n Branch is = "<<branch;
		cout<<"\n College is = "<<college;
	}
	
}; //end class

int main()
{
	
	Student s1;
	
	s1.acceptData();
	s1.showData();
	
	cout<<"\n----------------------------";
	
	Student s2;
	s2.acceptData();
	s2.showData();
	
	cout<<"\n----------------------------";
	`
	Student s3;
	s3.acceptData();
	s3.setData("Mechanical","MIT");
	s3.showData();
	
	
}
