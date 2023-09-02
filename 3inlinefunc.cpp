#include <iostream>
using namespace std;
class demo
{
 public: inline void show() //inline func used for fast execution 
    {
        cout << "HELLO WORLD!!";
    }
};
int main()
{
    demo obj1;
    obj1.show();//simply copies code here instead of moving to that line 
    return 0;
}