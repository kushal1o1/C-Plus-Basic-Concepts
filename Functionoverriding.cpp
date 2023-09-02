//function overloading 
#include <iostream>
using namespace std;
class demo1{
	 public:
	virtual void func()
	 	{
	 		cout<<"function of super class";
		 }	
		  void show()
	 	{
	 		cout<<"function of super class";
		 }	
};
class demo2:public demo1
{
	public:
		void func()
		{
			cout<<"FUnction of derived class";
		}
		 void show()
	 	{
	 		cout<<"function of derived class";
		 }	
};
int main(){
	demo2 d;
	d.func();//overrides func of superclass and class derived class func
	demo1 *ptr;
	ptr=&d;
	ptr->func();//call base class func cause virtual//runtime bind
	ptr->show();//call parent class if not virtual //compiletime bind
}
