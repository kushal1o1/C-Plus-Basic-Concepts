#include <iostream>
using namespace std;
class demo
{
   public: void show()
    {
        cout << "HELLO WORLD!!"<<endl;
    }
};
int main()
{
    demo obj[10];
    for (int i=0;i<10;i++)
    { cout<<(i+1)<<"\t";
    obj[i].show();        
    }
    return 0;
}