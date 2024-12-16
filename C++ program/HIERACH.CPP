#include<iostream.h>
#include<conio.h>
class base
{
public:
int a,b;
public:
void get()
{
cout<<"Enter the 1 Number:";
cin>>a;
cout<<"Enter the 2 Number:";
cin>>b;
}
void put()
{
cout<<"1 Number:"<<a<<endl;
cout<<"2 Number:"<<b<<endl;
}
};
class derived1:public base
{
public:
int add;
public:
void get1()
{
get();
add=a+b;
}
void put1()
{
put();
cout<<"Addition:"<<add<<endl;
}
};
class derived2:public base
{
public:
int sub;
public:
void get2()
{
get();
sub=a-b;
}
void put2()
{
put();
cout<<"Subtraction:"<<sub<<endl;
}
};
class derived3:public base
{
public:
int mul;
public:
void get3()
{
get();
mul=a*b;
}
void put3()
{
put();
cout<<"Multiplication:"<<mul<<endl;
}
};
void main()
{
int ch;
class derived1 m;
class derived2 n;
class derived3 j;
clrscr();
cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\nEnter your choice:";
cin>>ch;
if(ch==1)
{
m.get1();
m.put1();
}
else if(ch==2)
{
n.get2();
n.put2();
}
else if(ch==3)
{
j.get3();
j.put3();
}
else
{
cout<<"Wrong Choice"<<endl;
}
getch();
}