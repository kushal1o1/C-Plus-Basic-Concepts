//.when we dont know what is in file
#include<fstream>
#include<iostream>
using namespace std;
int main()
{    char x;
	fstream f1;
	f1.open("student.txt",ios::in);
	if(!f1)
	{
		cout<<"file not found";
	}
	else{
		  do{
		  	f1.get(x);   //f2>>x also can be done but it  neglect spaces 
		  	cout<<x;
		  }while(!f1.eof());
	}
}
