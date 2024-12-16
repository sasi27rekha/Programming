#include<iostream.h>
#include<conio.h>
class one
{
public:
char na[10];
int reg,ta,e,m,s,ss,tot,avg;
public:
void two()
{
cout<<"Enter the student name:"<<endl;
cin>>na;
cout<<"Enter the Reg.no:"<<endl;
cin>>reg;
cout<<"Enter the Tamil Mark:"<<endl;
cin>>ta;
cout<<"Enter the English Mark:"<<endl;
cin>>e;
cout<<"Enter the Maths Mark:"<<endl;
cin>>m;
cout<<"Enter the Science Mark:"<<endl;
cin>>s;
cout<<"Enter the Social Science Mark:"<<endl;
cin>>ss;
}
};
class Three:public one
{
public:
void four()
{
two();
tot=ta+e+m+s+ss;
avg=tot/5;
cout<<"total:"<<tot<<endl;
cout<<"average:"<<avg<<endl;
}
};
void main()
{
class Three ob;
clrscr();
ob.four();
getch();
}