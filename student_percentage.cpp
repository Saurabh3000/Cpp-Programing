#include<iostream>
using namespace std;

class Student
{
	private: int rollno;
	private: string name;
	private: int phy;
	private: int chem;
	private: int math;
	
	public: void readData()
	{
		cout<<"\n Enter Student RollNo = ";
		cin>>rollno;
		
		cout<<"\n Enter Student Name = ";
		cin>>name;
		
		cout<<"\n Enter Physicse Mark = ";
		cin>>phy;
		
		cout<<"\n Enter Chemistry Mark = ";
		cin>>chem;
		
		cout<<"\n Enter Mathamatics Mark = ";
		cin>>math;
	}
	
	public: void showData()
	{
		cout<<"\n Student RollNo is = "<<rollno;
		cout<<"\n Studnet Name is = "<<name;
		cout<<"\n Mark of Physices is = "<<phy;
		cout<<"\n Mark of Chemistry is = "<<chem;
		cout<<"\n Mark of Mathamatices is = "<<math;
	}
	
	public: void totalMark()
	{
		int tm=phy+chem+math;
		cout<<"\n Total Mark is = "<<tm;
	}
	
	public: void percentage()
	{
		float per=(phy+chem+math)/3;
		cout<<"\n Percentage is = "<<per;
	}

};  //end of classs

int main()
{
	Student obj;  // obj objcet for studnet class
	
	obj.readData();
	obj.showData();
	obj.totalMark();
	obj.percentage();
	
	
	cout<<"\n-----------------------------------------\n";
	
	Student obj1;  // obj1 2nd objcet for studnet class
	
	obj.readData();
	obj.showData();
	obj.totalMark();
	obj.percentage();
	
	return 0;
}
