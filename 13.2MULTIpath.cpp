#include<iostream>
using namespace std;
class Student
{
private:
int roll;
public:
void setroll()
{
cout<<"Enter roll number"<<endl;
cin>>roll;
}
void showroll()
{
cout<<"Roll= "<<roll<<endl;
}

};
class Theory: public virtual Student
{
protected:
float comth,ength;
public:
void setdatatheory()
{
cout<<"Enter Theory marks of computer and English "<<endl;
cin>>comth>>ength;
}
void showmarkstheory()
{
cout<<"Computer(Theory)= "<<comth<<endl;
cout<<"English(THeory)= "<<ength<<endl;
}

};
class Practical: public virtual Student
{

protected:
float compr,engpr;
public:
void setdatapractical()
{
cout<<"Enter Practical marks of computer and English "<<endl;
cin>>compr>>engpr;
}
void showmarkspractical()
{
cout<<"Computer(Practical)= "<<compr<<endl;
cout<<"English(Practical)= "<<engpr<<endl;
}

};
class Result: public Theory, public Practical
{
public:
void showtotal()
{
float tot;
tot=comth+ength+compr+compr;
cout<<"Total obtained marks= "<<tot<<endl;
}

};

int main()
{
Result res;
res.setroll(); //ambiguous because multipath exist to reach setroll() from derived class
//so must use virtual base class to overcome this
res.setdatatheory();
res.setdatapractical();
res.showroll();
res.showmarkstheory();
res.showmarkspractical();
res.showtotal();
}