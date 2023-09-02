#include <iostream>
using namespace std;
void swap(int &,int&);
int main() {
    int x=10,y=20;
    swap(x,y);
    cout<<"After Swapping: "<<endl;
    cout<<"\tX = "<<x<<endl;
    cout<<"\tY = "<<y<<endl;
return 0;
}
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    
}