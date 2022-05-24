#include<iostream>
using namespace std;

class Person
{
	protected : string name;
	protected : string city;
	
	public : void getData()
	{
		cout<<"\n Enter Name = ";
		cin>>name;
		
		cout<<"\n Enter City = ";
		cin>>city;
	}
	
	public : void showData()
	{
		cout<<"\n Name is = "<<name;
		cout<<"\n City is = "<<city;
	}
	
}; //end Person Class

class Student : Person
{
	private : int rollno;
	private : int phy;
	private : int chem;
	private : int math;
	private : string branch;
	private : int tm;
	private : float per;
	
	public : void readData()
	{
		Person::getData();   //base class mf called, code resue
		
		cout<<"\n Enter Roll No = ";
		cin>>rollno;
		
		cout<<"\n Enter Phy Mark = ";
		cin>>phy;
		
		cout<<"\n Enter chem Mark = ";
		cin>>chem;
		
		cout<<"\n Enter math Mark = ";
		cin>>math;
		
		cout<<"\n Enter Branch = ";
		cin>>branch;
	}	
	
	public : void display()
	{
		Person::showData();
		
		cout<<"\n Roll No is = "<<rollno;
		cout<<"\n Phy Mark is = "<<phy;
		cout<<"\n Chem Mark is = "<<chem;
		cout<<"\n Math Mark is = "<<math;
		cout<<"\n Branch is = "<<branch;
	}
	
		public : void tot_mark()
	{
		tm=phy+chem+math;
		cout<<"\n Total Mark is = "<<tm;
	}	
	
	public :void percentage()
	{
		per=tm/3;
		
		cout<<"\n Percentage is = "<<per;
	}
	
}; //end Student class

int main()
{
	Student s1;
		
	s1.readData();
	s1.display();
	s1.tot_mark();
	s1.percentage();
	
	return 0;
}
