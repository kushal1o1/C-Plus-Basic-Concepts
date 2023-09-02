#include<iostream>
using namespace std;
class GCES ;
class GBS
{int num_of_students;
  public:
  void getdata()
  {
    cout<<"ENTER THE NUMBERS OF STUDENTS IN GBS";
    cin>>num_of_students;
  }
  friend void compare(GCES gc,GBS gb);
};
class GCES {
int num_of_students;
  public:
  void getdata()
  {
    cout<<"ENTER THE NUMBERS OF STUDENTS IN GCES";
    cin>>num_of_students;
  }
   friend void compare(GCES gc,GBS gb);
};
 void compare(GCES gc,GBS gb)
 {
    if(gc.num_of_students>gb.num_of_students)
    {
  cout<<"STUDENTS AT GCES ARE MORE THAN GBS";
    }else{
        cout<<"STUDENTS AT GBS ARE MORE THAN GCES";
    }
 }
 int main()
 {
  GCES gc;
  GBS gb;
  gc.getdata();
  gb.getdata();
  compare(gc,gb);
 }