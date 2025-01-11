#include<stdio.h>
#include<conio.h>
struct data
{
char na[10]; int ag;
};
void main()
{
struct data obj;
clrscr();
printf("Enter Name:");
scanf("%s",&obj.na);
printf("Enter Age:");
scanf("%d",&obj.ag);
printf("Name:%s",obj.na);
printf("\nAge:%d",obj.ag);
getch();
}