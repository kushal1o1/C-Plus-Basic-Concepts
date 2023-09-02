#include <iostream>
using namespace std;
class time
{
    private:
    int hour,min;
    public:
    void getdata(int a,int b)
    {
    hour=a;
    min=b;  
    }
    void display(time a,time b)
    {   
        min=(a.min+b.min)%60;
        hour=a.hour+b.hour+min/60;
        cout<<"THE added time is "<<hour<<":"<<min;
    }

     };
    int main()
    {
        time t1,t2,t3;
        t1.getdata(2,00);
        t2.getdata(2,30);
        t3.display(t1,t2);
 }