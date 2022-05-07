#include<iostream>
using namespace std;

class Student
{
	private : int rollno;
	private : string name;
	private : int phy;
	private : int chem;
	private : int math;
	
	public : void enterData()
	{
		cout<<"\n Enter Roll No = ";
		cin>>rollno;
		
		cout<<"\n Enter Name = ";
		cin>>name;
		
		cout<<"\n Enter Phy mark = ";
		cin>>phy;
		
		cout<<"\n Enter chem mark = ";
		cin>>chem;
		
		cout<<"\n Enter math mark = ";
		cin>>math;	
	}
	
	public : void showData()
	{
		cout<<"\n Roll No is = "<<rollno;
		cout<<"\n Name is = "<<name;
		cout<<"\n Phy mark is = "<<phy;
		cout<<"\n chem mark is = "<<chem;
		cout<<"\n math mark is = "<<math;	
	}
	
	public : int total_mark()
	{
		int tm=phy+chem+math;
		return tm;	
	}
	
	public : void per_gread(float per)
	{
		if(per>=75)
		{
			cout<<"\n A Gread";
		}
		else if(per>=60)
		{
			cout<<"\n B Gread";
		}
		else if(per>=50)
		{
			cout<<"\n C Gread";
		}
		else if(per>=40)
		{
			cout<<"\n D Gread";
		}
	}	
};

int main()
{
	Student s1;
	
	s1.enterData();
	s1.showData();
	
	int tm=s1.total_mark();
	
	cout<<"\n Total Mark is = "<<tm;
	
	float per=tm/3;
	
	cout<<"\n Percentage is = "<<per;
	
	s1.per_gread(per);
	
	return 0;
}
