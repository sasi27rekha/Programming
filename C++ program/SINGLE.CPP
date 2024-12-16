#include<iostream.h>
#include<conio.h>
class Base
{
public:
int a,b;
public:void get()
{
cout<<"Enter value 1:";
cin>>a;
cout<<"Enter value 2:";
cin>>b;
}
};
class Derived:public Base
{
private:
int c;
public:void display()
{
c=a+b;
cout<<"Addition value:"<<c;
}
};
void main()
{
Derived obj;
clrscr();
obj.get();
obj.display();
getch();
}