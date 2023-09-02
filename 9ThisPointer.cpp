#include <iostream>
using namespace std;
class area
{
    private:
    int a,b;
    public:
    void getdata(int a,int b)
    {
    this->a=a;
    this->b=b;  
    }
    void display()
    {
        cout<<"THE AREA IS "<<a*b<<"sq units\n";
    }
    };
    int main()
    {
        area a;
        a.getdata(2,2);
        a.display();
    }