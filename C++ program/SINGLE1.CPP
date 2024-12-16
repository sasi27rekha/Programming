#include<iostream.h>
#include<conio.h>
class two
{
public:
int a,b;
void get()
{
cout<<"Enter the 1 Number:";
cin>>a;
cout<<"Enter the 2 Number:";
cin>>b;
}
};
class add:public two
{
public:
int c;
public:
void put()
{
get();
c=a+b;
cout<<"Addition:"<<c<<endl;
}
};
void main()
{
class add o;
clrscr();
o.put();
getch();
}