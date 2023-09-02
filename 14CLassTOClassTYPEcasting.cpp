//type casting 
//class to class typecasting 
#include<iostream>
#include<math.h>
using namespace std;
class polar
{
public:
float r,th;

void getdata()
{
	cout<<"ENter the r, th";
	cin>>r>>th;
}
void show()
{
cout<<"In polar form:\nr="<<r<<" and theta="<<th;
}
};
class rectangular
{
float x,y;
public:
rectangular(){}//default constructor
rectangular(polar p)//if operator used void operator =(polar p){//code}
{
x=p.r*cos(p.th);
y=p.r*sin(p.th);             
}
void show()
{
cout<<"\nIn Rectangular form:\nx="<<x<<"and y="<<y;
}
};
int main()
{
polar p;
p.getdata();
p.show();
rectangular r;
r=p;
r.show();
}/*
class product{
public:	int num1,num2;
 public:	void getdata(){
		cout<<"ENter the numbers num1=";
		cin>>num1;
		cout<<"num2=";
		cin>>num2;
	}
};
class item 
{
	int num3,num4;
  public:
  	item(){}
  	item(product o)
  	{
  		num3=o.num1;
  		num4=o.num2;
	  }
  	void show ()
	{
		cout<<"num3="<<num3;
		cout<<"num4="<<num4;
	}
};
int main()
{
	product p;
	p.getdata();
	item i;
	i=p;
	i.show();
	
}*/
