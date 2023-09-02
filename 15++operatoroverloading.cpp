//operator overloading 
//binary operator 
//prefix
#include <iostream>
using namespace std ;
class demo
{
 int a;
 public:
 void getdata()
 {
 	cout<<"enter the number u wanna increment";
 	cin>>a;
	 }	
	demo operator ++()   //same for postfix just send int dummydata
	 {
	 	++a;
	 }
	void showdata()
	 {
	 	cout<<"the increment is "<<a;
	 }
};
int main()
{
	demo p;
	p.getdata();
	++p;
	p.showdata();
	return 0;
}
