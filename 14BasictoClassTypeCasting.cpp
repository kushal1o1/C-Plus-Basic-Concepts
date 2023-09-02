//type casting 
//basic to class typecasting 
#include<iostream>
using namespace std;
class demo{
	int hr,min;
	public:
		demo(int d)
		{
			hr=d/60;
			min=d%60;
		}
		void show(){
			cout<<"time is"<<hr<<":"<<min;
		}
};
int main()
{   int duration;
	cout<<"ENter the duration";
	cin>>duration;
   demo  d=duration;//calls constructor passing duration
	d.show();
}
