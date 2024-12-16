#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter Number:");
scanf("%d",&a);
if(a>100)
{
printf("Given Value is above 100");
}
else
{
printf("Given Value is below 100");
}
getch();
}