#include<iostream>
using namespace std;

class Person
{
	private : string name;
	private : string city;
	
	public : void getData()
	{
		cout<<"\n Enter Name = ";
		cin>>name;
		
		cout<<"\n Enter a City = ";
		cin>>city;
	}	
	
	public : void showData()
	{
		cout<<"\n Name is = "<<name;
		cout<<"\n City is = "<<city;
		cout<<"\n ----------------------------------\n";
	}
};

int main()
{
	Person p1[5];
	
	for(int i=0;	i<=4;	i++)
	{
		cout<<"Enter the Person - "<<i+1<<"Information";
		
		p1[i].getData();
		
		p1[i].showData();
	}
	
	return 0;
}
