#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
int a,b,add,sub,mul,div,mod;
clrscr();
a=10;
b=5;
add=a+b;
sub=add-b;
mul=sub*b;
div=mul/b;
mod=div%b;
cout<<"Arithmetical Operator"<<endl;
cout<<"Addition is:"<<add<<endl;
cout<<"Subtraction is:"<<sub<<endl;
cout<<"Multiplication is:"<<mul<<endl;
cout<<"Division is:"<<div<<endl;
cout<<"Module is:"<<mod<<endl;
getch();
}