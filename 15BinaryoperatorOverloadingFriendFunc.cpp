//using friend function 
#include<iostream>
using namespace std;
class demo {
 int num;
 public:
  void	getdata()
 	{
 		cout<<"ENter the number";
 		cin>>num;
	 }
 friend demo operator +(demo &d,demo &e);
	 void show()
	 {
	 	cout<<"The sum is "<<num;
	 }
};
demo operator +(demo &d,demo &e)
{   demo obj;
   obj.num=d.num+e.num;
	return obj;
}
int main()
{
	demo a,b,c;
	b.getdata();
	c.getdata();
	a=b+c;
	a.show();
}
