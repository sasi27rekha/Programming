#include<iostream.h>
#include<conio.h>
void add(int a,int b)
{
int c;
c=a+b;
cout<<" Addition:"<<c<<endl;
}
void add(char i,char j)
{
cout<<"Join Character:"<<i<<j<<endl;
}
void main()
{
int n,m;char r,t;
clrscr();
cout<<"Enter the 1 Number:";
cin>>n;
cout<<"Enter the 2 Number:";
cin>>m;
cout<<"Enter the 1 Character:";
cin>>r;
cout<<"Enter the 2 Character:";
cin>>t;
//indirect method
add(n,m);
add(r,t);
//direct mrthod
/*add('K','M');
add(3,4);*/
getch();
}