#include<bits/stdc++.h>
using namespace std;

class Date
{
    public:
    int date1,date2;
    int month1,month2;
    int year;
    int differance_date;
    string arr[12]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    void set_up()
    {
        cout<<"enter the starting date: ";
 cin>>date1>>month1>>year;
 cout<<"enter the end date: ";
 cin>>date2>>month2>>year;
 
    }
    void Diff();
    void display()
    {
        cout<<date1<<"-"<<month1<<"-"<<year<<"\n";
        cout<<date1<<"/"<<month1<<"/"<<year<<"\n";
        cout<<date1<<"-"<<arr[month1-1]<<"-"<<year<<"\n";
        
        cout<<"differance of date:"<<differance_date;
    }
};
void Date:: Diff()
{
    int differance=month2-month1;
  if(differance==1)
  {
      int diffdate1=30-date1;
      cout<<"d1"<<diffdate1<<"\n";
     
      int diffdate2=0+date2;
       cout<<"d1"<<diffdate2<<"\n";
       differance_date=diffdate1+diffdate2+(differance-1);
  }
   
}

int main()
{
    Date d1;
    d1.set_up();
    d1.Diff();
    d1.display();
}
