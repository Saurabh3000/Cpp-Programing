#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	
	ofstream wfile;
	ofstream wfile1;
	
	wfile.open("homeAddress.txt");
	
	wfile1.open("collegeAddress.txt");
	
	string data="B-204, Rutumbara Gruhlankar Apartment, Pune";
	
	string data1="SCOAC Behind Bank of Maharashtra, Pune";
	
	wfile<<data;   //send data to file
	
	wfile1<<data1;
	
	cout<<"\n File is Created Successfully";
	cout<<"\n Please Check file";
	
	return 0;
}
