#include<iostream.h>
#include<conio.h>
class New
{
private:
char na[10],pl[10];
int ag;
public:
void get()
{
cout<<"Enter Name:";
cin>>na;
cout<<"Enter Age:";
cin>>ag;
cout<<"Enter Place:";
cin>>pl;
}
public:
void dis()
{
cout<<"Name:"<<na<<endl;
cout<<"Age:"<<ag<<endl;
cout<<"Place:"<<pl;
}
};
void main()
{
New x;
clrscr();
x.get();
x.dis();
getch();
}