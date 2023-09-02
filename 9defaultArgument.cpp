#include <iostream>
using namespace std;
class area
{
    private:
    int length,breadth;
    public:
    void getdata(int a,int b=10)//default argument 10 will be assign if not passed 
    {
    length=a;
    breadth=b;  
    }
    void display()
    {
        cout<<"THE AREA IS "<<length*breadth<<"sq units\n";
    }
    };
    int main()
    {
        area a;
        a.getdata(2,2);
        a.display();
        a.getdata(2);
         a.display();
    }