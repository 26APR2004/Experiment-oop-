#include<bits/stdc++.h>
using namespace std;

class person  //sub class
{
    public:
    int age;
    string name;
    void set_1()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter your age:";
        cin>>age;
    
    }
    void display_1()
    {
        cout<<setfill('-');
        cout<<"\nName:"<<setw(30)<<name<<"\n";
        cout<<"Age:"<<setw(30)<<age<<"\n";
    }
    
};
class student:private person //Derived class
{
    public:
    string course;
    int roll_no;
    int Marks;
    void set_2()
    {
        set_1();
       cout<<"Enter the roll_no:"; 
       cin>>roll_no;
       cout<<"Enter your course:";
       cin>>course;
       cout<<"Enter your marks:";
       cin>>Marks;
    }
    void display_2()
    {
        display_1();
         cout<<setfill('-');
        cout<<"Coures Name:"<<setw(30)<<course<<"\n";
        cout<<"Roll no:"<<setw(30)<<roll_no<<"\n";
        cout<<"Marks:"<<setw(30)<<Marks<<"\n";
    }
    
};
class employee:private student //Derived class
{
    public:
    int ID;
    string job_name;
    void set_3()
    {
        set_2();
       cout<<"Enter the ID no. :"; 
       cin>>ID;
       cout<<"Enter your job name:";
       cin>>job_name;
       
    }
    void display_3()
    {
        cout<<setfill('*')<<"\n";
        cout<<setw(50);
        display_2();
        cout<<"ID:"<<setw(30)<<ID<<"\n";
        cout<<"job_name:"<<setw(30)<<job_name<<"\n";
        cout<<setfill('*')<<"\n";
    }
    
};

int main()
{
    employee e1;
    e1.set_3();
    e1.display_3();
    return 0;
}

