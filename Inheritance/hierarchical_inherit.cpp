#include<iostream>
using namespace std;

class College
{
	protected : string college_name;
	protected : string city;
	
	public : void getData()
	{
		cout<<"\n Enter College Name = ";
		cin>>college_name;
		
		cout<<"\n Enter City = ";
		cin>>city;
	}
	
	public : void showData()
	{
		cout<<"\n College Name is = "<<college_name;
		cout<<"\n City name is = "<<city;
	}
	
};

class Student : College
{
	private : string name;
	private : int phy;
	private : int chem;
	private : int math;
	
	public : void readData()
	{
		College::getData();
		
		cout<<"\n Enter Student Name = ";
		cin>>name;
		
		cout<<"\n Enter Phyasic Mark = ";
		cin>>phy;
		
		cout<<"\n Enter chemistry Mark = ";
		cin>>chem;
		
		cout<<"\n Enter Mathamatics Mark = ";
		cin>>math;
	}
	
	public : void showData1()
	{
		College::showData();
		
		cout<<"\n Student Name is = "<<name;
		cout<<"\n Mark of Phyasic is = "<<phy;
		cout<<"\n Mark of Chemistry is = "<<chem;
		cout<<"\n Mark of Mathamatics is = "<<math;
	}
	
	public : void scoreCard()
	{
		int tm=phy+chem+math;
		
		cout<<"\n Total Mark is = "<<tm;
		
		float per=tm/3;
		
		cout<<"\n Percentage is = "<<per;
	}
	
};

class Teacher : College
{
	private : int tid;
	private : string tname;
	private : int wg;
	private : int wd;
	
	public : void inputData()
	{
		College::getData();
		
		cout<<"\n Enter Teacher ID = ";
		cin>>tid;
		
		cout<<"\n Enter Teacher Name = ";
		cin>>tname;
		
		cout<<"\n Enter Teacher Wages = ";
		cin>>wg;
		
		cout<<"\n Enter Teacher Working Days = ";
		cin>>wd;
	}
	
	public :void display()
	{		
		College::showData();
		
		cout<<"\n Teacher ID is = "<<tid;
		cout<<"\n Teacher Name is = "<<tname;
		cout<<"\n Teacher Wages is = "<<wg;
		cout<<"\n Teacher Working Days is = "<<wd;
	}
	
	public : void salary()
	{
		int sal=wg*wd;
		
		cout<<"\n Teacher Salary is = "<<sal;
	}
};

int main()
{
	Student s1;
	
	s1.readData();
	s1.showData1();
	s1.scoreCard();
	
	Teacher t1;
	
	t1.inputData();
	t1.display();
	t1.salary();
	
	return 0;
}
