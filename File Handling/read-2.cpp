#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream rfile;
	
	rfile.open("student-1.txt");
	
	int u=0,l=0,d=0;
	
	char ch;
	
	while(rfile)
	{
		rfile.get(ch);
		
		
		if(!rfile.eof())  //eof - end of file
		{
			if(ch>=65 && ch<=90)
		{
			u++;
		}
		else if(ch>=97 && ch<=122)
		{
			l++;
		}
		else
		{
			d++;
		}
			cout<<ch;
		}

	}
	
	cout<<"\n Total Number of Upper Case charater = "<<u;
	
	cout<<"\n Total Number of Lower Case charater = "<<l;
	
	cout<<"\n Total Number of Digit = "<<d;
	
	rfile.close();
	
	return 0;
}
