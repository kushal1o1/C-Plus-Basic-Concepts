//can access private members too

#include <iostream>
using namespace std;
class demo;
class demo1
{
    int n1;
   public: 
   
    void getdata()
    {
        cout<<"Enter the number";
        cin>>n1;

    }
         friend  class demo;
   
};
class demo
{ 
    public: 
    void show(demo1 obj)
    {
       cout<<"\nThe value of variable of class 1st is "<<obj.n1;

    }
   
};

int main()
{
    demo1 obj1;
    obj1.getdata();
    demo obj;
    obj.show(obj1);
    return 0;
}