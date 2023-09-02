//type casting 
//class to basic typecasting 
#include<iostream>
using namespace std;
class demo{
	int hr,min;
	public:
		demo(int a,int b)
		{
			hr=a;
			min=b;
		}
		operator int ()
		{
			return hr*60+min;
		}
		void show(){
			cout<<"time is"<<hr<<":"<<min;
		}
};
int main()
{   int hr,min,duration;
	cout<<"ENter the hr";
	cin>>hr;
		cout<<"ENter the min";
	cin>>min;
	demo d(hr,min);
    duration=d;
	cout<<"DURATION IS "<<duration;
}
