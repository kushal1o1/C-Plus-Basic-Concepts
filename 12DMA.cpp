#include <iostream>
using namespace std;
int main()
{
    int* ptr,i;
    ptr=new int[10];
    for(i=0;i<10;i++)
    {   cout<<"enter the value "<<i+1;
        cin>>*(ptr+i);
    }
     cout<<"the numbers provided is\n";
    for(i=0;i<10;i++)
    {  
    cout<<*(ptr+i);
    cout<<"\n";
    }
    delete[]ptr;
}