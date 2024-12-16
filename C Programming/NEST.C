#include<stdio.h>
#include<conio.h>
void main()
{
char na[10];
long int sal;
int ag,id;
clrscr();
printf("Enter Name:");
scanf("%s",&na);
printf("Enter id:");
scanf("%d",&id);
printf("Enter age:");
scanf("%d",&ag);
printf("Enter salary:");
scanf("%d",&sal);
if(id>=3000&&id<=4000)
{
if(ag>=25&&ag<=30)
{
if(sal>=35000)
{
printf("You're selected");
}
else
{
printf("Your salary is not enough");
}
}
else
{
printf("Age is not approved");
}
}
else
{
printf("Invalid no check given id");
}
getch();
}