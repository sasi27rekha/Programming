#include<iostream.h>
#include<conio.h>
int fact(int n)
{
if(n==0||n==1)
{
return 1;
}
else
{
return n*fact(n-1);
}
}
void main()
{
int m;
clrscr();
cout<<"Enter the any one number:";
cin>>m;
cout<<"Factorial value:"<<fact(m);
getch();
}