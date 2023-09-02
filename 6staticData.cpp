#include <iostream>
using namespace std;
class demo
{ static int i;
   public: void show()
    {
        i++;
    }
    void display()
    {
        cout<<"THE PROGRAM RUNS "<<i<<" TIMES";
    }
};
int  demo:: i=0;
int main()
{
    demo obj1,obj2,obj3,obj4;
    obj1.show();
    obj2.show();
   obj3.show();
   obj4.show();
 obj2.show();
 obj3.show(); 
 obj1.display();
    return 0;
}