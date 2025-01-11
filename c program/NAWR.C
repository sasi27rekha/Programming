#include<stdio.h>
#include<conio.h>
void main()
{
int add();
int c;
clrscr();
c=add();
printf("Addition:%d",c);
getch();
}
int add()
{
int a,b,x;
printf("Enter two values:");
scanf("%d%d",&a,&b);
x=a+b;
return(x);
}