#include<iostream.h>
#include<conio.h>
class base1
{
public:
int a;
public:
void get()
{
cout<<"Enter the 1 Number:";
cin>>a;
}
void put()
{
cout<<"1 Number:"<<a<<endl;
}
};
class base2
{
public:
int b;
public:
void get1()
{
cout<<"Enter the 2 Number:";
cin>>b;
}
void put1()
{
cout<<"2 Number:"<<b<<endl;
}
};
class base3
{
public:
int c;
public:
void get2()
{
cout<<"Enter the 3 Number:";
cin>>c;
}
void put2()
{
cout<<"3 Number:"<<c<<endl;
}
};
class derived:public base1,public base2,public base3
{
public:
int d;
public:
void get3()
{
get();
get1();
get2();
d=a*b*c;
}
void put3()
{
put();
put1();
put2();
cout<<"Multiplication value:"<<d<<endl;
}
};
void main()
{
class derived m;
clrscr();
m.get3();
m.put3();
getch();
}