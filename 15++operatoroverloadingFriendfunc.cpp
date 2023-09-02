//postfix overloading num++;
#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		void getdata()
			{
	cout<<"enter the number u wanna increment";
 	cin>>a;	
	}
friend 	demo operator ++(demo &obj);
		void show()
	{
		cout<<"the increment is "<<a;
	}
};
demo operator ++(demo &obj)	{
		++obj.a;
		return obj;
	}
int main()
{
	demo d;
	d.getdata();
	++d;
	d.show();
}
