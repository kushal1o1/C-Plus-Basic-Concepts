#include<iostream>
using namespace std;
class a{
    public:
    int x,y;
    public:
    void func(){
        cout<<"I AM CALLED CLASS a FUNCTION"<<endl;
        }
    
};
class b{
    public:
    int x,y;
    public:
    void func(){
        cout<<"I AM CALLED CLASS b FUNCTION"<<endl;
     }
};
class c:public a,public b{
 //code
};
int main()
{
    c obj;
    //obj.getdata(); ambuiguity occurs
    obj.a::func();//class a func call
     obj.b::func();//class b func call
}