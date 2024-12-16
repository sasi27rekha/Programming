#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
first:
printf("Enter no:");
scanf("%d",&n);
if(n>100)
{
printf("Above 100");
}
else
{
goto first;
}
getch();
}