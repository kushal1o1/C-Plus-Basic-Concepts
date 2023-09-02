//modes ios 
/* ios::out   for writting
ios:in      for reading
ios:app     for appending i.e read +write */
#include <iostream>
#include <fstream>//  ifstream for input ofstream for output
using namespace std;
class student
{
    char name[10];
    int roll,age;
    public:
    void getdata()//to take data
    {
        cout<<"ENter data of student";
        cout<<"ENter the name of student";
        cin>>name;
        cout<<"ENter the roll number of "<<name;
        cin>>roll;
        cout<<"ENter the age of "<<name;
        cin>>age;
    }
    void showdata()//to show data
{
	cout<<"THe data of student is:"<<endl;
	cout<<"NAME:"<<name<<endl;
	cout<<"ROLL:"<<roll<<endl;
	cout<<"AGE:"<<age<<endl;
}

};
int main()
{
    student s;
    ofstream f1;
    f1.open("student.txt",ios::out);//opening file in write mode
    if(!f1)
    {
        cout<<"ERROr has occured ";
    }
    else{
        s.getdata();
        f1.write((char*) &s,sizeof(s));
        f1.close();
            }
 ifstream f2;
 f2.open("student.txt",ios::in);
 if(!f2)
 {
 	cout<<"file not found";
 }
 else{
 f2.read((char*) &s,sizeof(s));
 s.showdata();
 }
 
}
