#include <iostream>
using namespace std;
class demo{
    public:
    void display1(){
        cout<<"INSIDE FUNCTION"<<endl;
    }
    void display2();
};
void demo::display2()
{
 cout<<"EXTERNAL FUCNTION";
}
int main()
{
    demo obj;
    obj.display1();
    obj.display2();
}