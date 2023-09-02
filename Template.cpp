//template  
#include<iostream>
using namespace std;
template <class t> //for more templates use <class t1,class t2,...>
class temp{
	 t num1, num2;
	 public:
	 	void getdata(t a,t b)
	 	{
	 	    num1=a;
			 num2=b;	
		 }
		 void sum()
		 {
		 	cout<<"THE sum of"<<num1<<"and "<<num2<<" is "<<num1+num2<<endl;
		 }
	
};
int main()
{
	temp<int> obj;  //if more the give like this temp <int,float> obj
	temp<float> obj1;
	obj.getdata(1,2);
	obj.sum();
	obj1.getdata(1.2,1.8);
	obj1.sum();
}
