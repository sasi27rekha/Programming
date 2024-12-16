#include<iostream.h>
#include<conio.h>
class base
{
public:
int a;
public:
void get()
{
cout<<"Enter the starting value:";
cin>>a;
}
void put()
{
cout<<"Starting value:"<<a<<endl;
}
};
class add:public base
{
public:
int b,ad;
public:
void get1()
{
get();
cout<<"Enter the add value:";
cin>>b;
ad=a+b;
}
void put1()
{
put();
cout<<"Add value:"<<b<<endl;
cout<<"Addition:"<<ad<<endl;
}
};
class su:public add
{
public:
int c,su;
public:
void get2()
{
get1();
cout<<"Enter the subtraction value:";
cin>>c;
su=ad-c;
}
void put2()
{
put1();
cout<<"subtraction value:"<<c<<endl;
cout<<"subtraction:"<<su<<endl;
}
};
class mul:public su
{
public:
int d,mul;
public:
void get3()
{
get2();
cout<<"Enter the multiplication value:";
cin>>d;
mul=su*d;
}
void put3()
{
put2();
cout<<"Multiplication value:"<<d<<endl;
cout<<"Multiplication:"<<mul<<endl;
}
};
void main()
{
class mul m;
clrscr();
m.get3();
m.put3();
getch();
}