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
printf("Even Number:\n");
for(r=0;r<10;r++)
{
if(a[r]%2==0)
{
printf("%d\n",a[r]);
}
}
printf("Odd Number:\n");
for(r=0;r<10;r++)
{
if(a[r]%2==1)
printf("\n%d",a[r]);
}
getch();
}