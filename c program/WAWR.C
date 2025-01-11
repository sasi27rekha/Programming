#include<stdio.h>
#include<conio.h>
void main()
{
int add(int,int);
int a,b,c;
clrscr();
printf("Enter First No:");
scanf("%d",&a);
printf("Enter Second No:");
scanf("%d",&b);
c=add(a,b);
printf("Addition:%d",c);
getch();
}
int add(int a,int b)
{
int x;
x=a+b;
return(x);
}