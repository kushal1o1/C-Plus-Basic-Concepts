//unary operator overloading  +
#include<iostream>
using namespace std;
class demo{
	int num;
	public:
		void getdata()
		{
		  cout<<"enter the number "	;
		  cin>>num;
		}
		demo operator +(demo &obj)
		{
		obj.num=num+obj.num;
			return obj;
		}
		void show()
		{
			cout<<"the addition is "<<num;
		}
	
};
int main()
{
	demo a,b,c;
	b.getdata();
	c.getdata();
    a=b+c;   // obj b members auto goes c we have to get through argument
	a.show();
}
