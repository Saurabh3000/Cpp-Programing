#include<iostream>
using namespace std;

class Student
{
	private : int rno;
	private : string name;
	private : static string college;
	
	
	public : void getData()
	{
		
		cout<<"\n Enter Student Roll Number = ";
		cin>>rno;
		
		cout<<"\n Enter Student Name  = ";
		cin>>name;
	}
	
	public : void showInfo()
	{
		cout<<"\n Student Roll Number is  = "<<rno;
		cout<<"\n Student Name is = "<<name;
		cout<<"\n Student College Name is = "<<college;
	}
	
	public : void change() //non static method can change value of static DM
	{
		college="MIT";
	}
};

string Student::college="SITS";


int main()
{
	
	Student s1;
	
	s1.getData();
	s1.showInfo();
	
	cout<<"\n--------------------------------\n";
	
	Student s2;
	
	s2.getData();
	s2.change();
	s2.showInfo();
	
	cout<<"\n------------------------------\n";
	
	Student s3;
	
	s3.getData();
	s3.showInfo();
	
	return 0;
}
