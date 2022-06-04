#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	string ename;
	int wg;
	int wd;
	int pay;
	
	cout<<"\n Enter Employee Name = ";
	cin>>ename;
	
	cout<<"\n Enter Employee Wages = ";
	cin>>wg;
	
	cout<<"\n Enter Employee Working Days = ";
	cin>>wd;
	
	ofstream wfile;
		
	wfile.open("payment.txt");
	
	wfile<<"\n Employee Name is = ";  
	wfile<<ename;
	
	wfile<<"\n Employee Wages is = ";
	wfile<<wg;
	
	wfile<<"\n Employee Working Days = ";
	wfile<<wd;
	
	pay=wg*wd;
	
	wfile<<"\n Employee Payment is = "<<pay;
	
	cout<<"\n File is Created Successfully";
	cout<<"\n Please Check file";
	
	return 0;
}
