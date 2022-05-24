#include<iostream>
using namespace std;

class College
{
	protected : string cname;
	protected : string loc;
	
	public : void getData()
	{
		cout<<"\n Enter College Name = ";
		cin>>cname;
		
		cout<<"\n Enter College Location = ";
		cin>>loc;
	}
	
	public : void showData()
	{
		cout<<"\n College Name is = "<<cname;
		cout<<"\n College Location is = "<<loc;
	}
	
};

class Student
{
	protected : int rno;
	protected : string sname;
	protected : string branch;
	protected : int phy;
	protected : int chem;
	protected : int math;
	protected : int tm;
	protected : float perc;
	
	public : void enterData()
	{
		cout<<"\n Enter Roll No = ";
		cin>>rno;
		
		cout<<"\n Enter Student Name = ";
		cin>>sname;
		
		cout<<"\n Enter Student Branch = ";
		cin>>branch;
		
		cout<<"\n Enter Phyasics Mark = ";
		cin>>phy;
		
		cout<<"\n Enter Chemistry Mark = ";
		cin>>chem;
		
		cout<<"\n Enter Mathamatics Mark = ";
		cin>>math;
	}
	
	public : void showData1()
	{
		cout<<"\n Student Roll No is = "<<rno;
		cout<<"\n Student Name is = "<<sname;
		cout<<"\n Student Branch is = "<<branch;
		cout<<"\n Student Phyasics Mark is = "<<phy;
		cout<<"\n Student Chenistry Mark is = "<<chem;
		cout<<"\n Student Mathamatics Mark is = "<<math;
	}
	
	public : void totMark()
	{
		tm=phy+chem+math;
		
		cout<<"\n Total Mark is = "<<tm;
	}
	
	public : void per()
	{
		perc=tm/3;
		
		cout<<"\n Percentage is  = "<<perc;
	}
};

class Sport
{
	protected : string spname;
	protected : int rank;
	
	public : void read()
	{
		cout<<"\n Enter Sport Name = ";
		cin>>spname;
		
		cout<<"\n Enter Rank = ";
		cin>>rank;
	}
	
	public : void display()
	{
		cout<<"\n Sport Name is = "<<spname;
		cout<<"\n Rank is = "<<rank;
	}
};

class Result:College,Student,Sport
{
	public : void get()
	{
		College::getData();
		Student::enterData();
		Sport::read();
	}
	
	public : void show()
	{
		College::showData();
		Student::showData1();
		Sport::display();
	}
	
	public : void result()
	{
		Student::totMark();
		Student::per();
	}
};

int main()
{
	Result r1;
	
	r1.get();
	r1.show();
	r1.result();
	
	return 0;
}
