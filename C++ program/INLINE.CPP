#include<iostream.h>
#include<conio.h>
inline int fun(int a)
{
return a*a;
}
void main()
{
int n;
clrscr();
cout<<"Enter the any one number:";
cin>>n;
cout<<"Seqare roor value:"<<fun(n);
getch();
}