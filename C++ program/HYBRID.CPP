#include<iostream.h>
#include<conio.h>
class one
{
public:
char na[10];
int reg,t,e,m,s,ss;
public:
void two()
{
cout<<"Enter the student Name:"<<endl;
cin>>na;
cout<<"Enter the Reg no:"<<endl;
cin>>reg;
cout<<"Enter the Tamil Mark:"<<endl;
cin>>t;
cout<<"Enter the English Mark:"<<endl;
cin>>e;
cout<<"Enter the Maths Mark:"<<endl;
cin>>m;
cout<<"Enter the Science Mark:"<<endl;
cin>>s;
cout<<"Enter the Social Mark:"<<endl;
cin>>ss;
}
};
class three:public one
{
public:
int tot,avg;
public:
void four()
{
two();
tot=t+e+m+s+ss;
avg=tot/5;
cout<<"Total:"<<tot<<endl;
cout<<"Average:"<<avg<<endl;
}
};
void main()
{
class three ob;
clrscr();
ob.four();
getch();
}