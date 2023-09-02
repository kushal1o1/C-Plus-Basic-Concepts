//error handeling 
#include<iostream>
using namespace std;
class div
{
	int nu ,de;
	public:
		void getdata()
		{ cout<<"Enter the numerator";
		  cin>>nu;
			cout<<"Enter the denominator";
			cin>>de;	
		}
		void result()
		{
			try{
		if(de==0){
		throw de;		
		}
		else
		{
				cout<<nu<<"divided by "<<de<<"is"<<(nu/de);	
		}}
		catch(int a)
		{
	cout<<nu<<"divided by "<<de<<"is"<<"INFINITY";	
	}
}
};
int main()
{
	div d;
	d.getdata();
	d.result();
}

