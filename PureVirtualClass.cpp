//pure virtual classor abstract class
#include <iostream>
using namespace std;
class demo
{
   public:
  virtual void func()=0;//can be again used or modify when derived later	
};
class demo2:public demo
{
	public:
		void func()
		{
			cout<<"The func is remodified or reuse as ";
		}
};
int main()
{

	demo2 d;
	demo *p;
	p=&d;
	p->func();
}
