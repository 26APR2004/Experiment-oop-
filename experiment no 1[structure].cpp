//person ,student ,employee c++ program by using structure
#include<bits/stdc++.h>
using namespace std;

struct person
{
    public:
  string name;
  int age;
  string gender;
};

struct student
{
  string course;
  int prn;

};
struct employee
{
  string package;
  int id;

};

void displayperson(struct person p1)
{
    cout<<"Name:"<<p1.name<<"\n";
    cout<<"Age:"<<p1.age<<"\n";
    cout<<"Gender:"<<p1.gender<<"\n";
}



void displaystudent(struct student s1)
{
    cout<<setfill('*');
    cout<<setw(50)<<"\n";
    cout<<"cours name:";
   cin>>s1.course;
   cout<<"prn number:";
   cin>>s1.prn;
   
    cout<<"Coures:"<<s1.course<<"\n";
    cout<<"PRN:"<<s1.prn<<"\n";
    }
    void displayemployee(struct employee e1)
{
    cout<<setfill('*');
    cout<<setw(50)<<"\n";
    cout<<"package:";
   cin>>e1.package;
   cout<<"id number:";
   cin>>e1.id;
   
    cout<<"pcakage:$"<<e1.package<<"\n";
    cout<<"PRN:"<<e1.id<<"\n";
    }
int main()
{
    struct person p1;
    struct student s1;
    struct employee e1;
    p1.name="sujal";
    p1.age=20;
    p1.gender="male";
    
     displayperson(p1);
     
     displaystudent(s1);
     
     displayemployee(e1);
}
