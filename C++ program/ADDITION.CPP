#include<iostream.h>
#include<conio.h>
int add(int,int);
int add(int,int,int);
void main()
{
int a,b,c,f1,f2;
clrscr();
cout<<"Enter Three Values:";
cin>>a>>b>>c;
f1=add(a,b);
f2=add(a,b,c);
cout<<"Addition of two num:"<<f1<<endl;
cout<<"Addition of three num:"<<f2;
getch();
}
int add(int a,int b)
{
int X;
X=a+b;
return(X);
}
int add(int a,int b,int c)
{
int Y;
Y=a+b+c;
return(Y);
}
