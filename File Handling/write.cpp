#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	
	ofstream wfile;
	
	wfile.open("Student.txt");
	
	string data="We are Learning C++";
	
	wfile<<data;   //send data to file
	
	cout<<"\n File is Created Successfully";
	cout<<"\n Please Check file";
	
	return 0;
}
