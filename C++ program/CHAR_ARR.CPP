#include<iostream.h>
#include<conio.h>
void main()
{
char a[10];
int r;
clrscr();
cout<<"Enter text:";
cin>>a;
cout<<"Without NullValue:";
for(r=0;a[r]!='\0';r++)
{
cout<<"\n"<<a[r];
}
getch();
}