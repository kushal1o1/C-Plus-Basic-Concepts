#include <iostream>
using namespace std;
class area
{
    private:
    int length,breadth;
    public:
    void getdata()
    {
        length=0;
        breadth=0;
    }
    void getdata(int a)
    {
        length=a;
        breadth=a;  
    }
    void getdata(int a,int b)
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
        a.getdata();
        a.display();
        a.getdata(2);
        a.display();
        a.getdata(2,2);
        a.display();
    }