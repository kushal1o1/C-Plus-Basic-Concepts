//friend func takes argument as  class obj
//can access private members too

#include <iostream>
using namespace std;
class demo
{ 
    int n1,n2;
    public: 
    void getdata()
    {
        cout<<"Enter the numbers"<<endl;
        cout<<"Num1=";
        cin>>n1;
        cout<<"Num2=";
        cin>>n2;
    }
    friend void compare(demo obj1);
};
void compare(demo obj)
{
     if(obj.n1>obj.n2)
     {
        cout<<obj.n1<<"is Greater than "<<obj.n2;
     }
     else{
              cout<<obj.n2<<"is Greater than "<<obj.n1;
     }
}
int main()
{
    demo obj1;
    obj1.getdata();
    compare(obj1);
    return 0;
}