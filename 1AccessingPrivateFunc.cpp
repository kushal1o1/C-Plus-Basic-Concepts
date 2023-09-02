#include <iostream>
using namespace std;
class demo
{   void func1()
{
    cout<<"I AM PRIVATE FUNCTION";
}
   public: void func2()
    {
        func1();
    }
};
int main()
{
    demo obj1;
    obj1.func2();//private members cannot be accessed directly by obj 
    return 0;
}