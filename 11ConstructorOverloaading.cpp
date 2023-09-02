#include <iostream>
using namespace std;
class area
{
    private:
    int length,breadth;
    public:
  area()//default constuctor
    {
        length=0;
        breadth=0;
    }
 area(int a,int b)//parameterized constructor
    {
        length=a;
        breadth=b;  
    }
area(area &obj)//copy constructor
    {
    length=obj.length;
    breadth=obj.breadth;  
    }
  void display()
    {
        cout<<"THE AREA IS "<<length*breadth<<"sq units\n";
    }
    ~area()
    {
        //destructor
    }
    };
    int main()
    {
        area a1;
        a1.display();
        area a2(2,2);
        a2.display();
        area a3(a2);
        a3.display();

    }