#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
cout<<setfill('#')<<setw(2)<<100<<setw(4)<<200<<endl;
cout<<setfill('Q')<<setw(10)<<100<<setw(10)<<200<<endl;
cout<<setfill('*')<<setw(12)<<100<<setw(10)<<200<<endl;
cout<<setfill('!')<<setw(14)<<100<<setw(10)<<200<<endl;
getch();
}