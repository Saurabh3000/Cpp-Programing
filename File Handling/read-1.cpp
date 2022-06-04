#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream rfile;
	
	rfile.open("SCOAC.txt");
	
	int c=1;
	
	char ch;
	
	while(rfile)
	{
		rfile.get(ch);
		
		if(ch==' ')
		{
			c++;
		}
		
		if(!rfile.eof())  //eof - end of file
		{
			cout<<ch;
		}

	}
	
	cout<<"\n Total Number of charater = "<<c;
	
	rfile.close();
	
	return 0;
}
