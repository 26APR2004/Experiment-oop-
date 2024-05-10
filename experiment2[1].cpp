#include<bits/stdc++.h>
using namespace std;
int oneticket_price=20;
class movie
{
public:
 string name;
 int no_tickets;
 float per_donation,amout_donate,net_sale;
 float gross_amount;

 void set_up()
{
cout<<setfill('*');
 cout<<"Movie name:"<<setw(30)<<name<<"\n";
 cout<<"Number of Tickets sold:"<<setw(20)<<no_tickets<<"\n";
 gross_amount=no_tickets*oneticket_price;
 cout<<"Gross Amount:"<<setw(30)<<fixed<<setprecision(2)<<"$"<<gross_amount<<"\n";
cout<<"Percentage of Gross Amount Donated:"<<setw(10)<<fixed<<setprecision(2)<< per_donation<<"%"<<endl;
amout_donate=gross_amount/ per_donation;
cout<<"Amount Donated:"<<setw(30)<<fixed<<setprecision(2)<<"$"<<amout_donate<<"\n";
net_sale=gross_amount-amout_donate;
cout<<"Nate sale:"<<setw(30)<<fixed<<setprecision(2)<<"$"<<net_sale<<"\n";
}
};


int main()
{
movie m1;
m1.name="AVENGER";
m1.no_tickets=2650;
m1. per_donation=10.00;

m1.set_up();

return 0;
}
