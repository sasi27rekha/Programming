#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],r;
clrscr();
printf("Enter Number:\n");
for(r=0;r<10;r++)
{
scanf("%d",&a[r]);
}
printf("Above 15:");
for(r=0;r<10;r++)
{
if(a[r]>15)
{
printf("\n%d",a[r]);
}
}
getch();
}