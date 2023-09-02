#include <iostream>
using namespace std;
//Base class
class Parent
{
public:
int id_p=9;
};
// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
public:
int id_c=8;
};
//main function
int main()
{

Child obj1;
cout << "Child id is " << obj1.id_c << endl;
cout << "Parent id is " << obj1.id_p << endl;
return 0;
}