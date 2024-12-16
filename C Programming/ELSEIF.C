#include<stdio.h>
#include<conio.h>
void main()
{
char p[10];
int r,qt,amt;
clrscr();
printf("Enter Product:");
scanf("%s",&p);
printf("Enter Rate:");
scanf("%d",&r);
printf("Enter Quantity:");
scanf("%d",&qt);
amt=r*qt;
printf("Amount:%d",amt);
if(amt>=7000&&amt<=10000)
{
printf("\n10'%' discount available");
}
else if(amt>=5000&&amt<7000)
{
printf("\n8'%' discount available");
}
else if(amt>=3000&&amt<5000)
{
printf("\n6'%' discount available");
}
else if(amt>=1000&&amt<3000)
{
printf("\n4'%' discount available");
}
else
{
printf("\n2'%' discount available");
}
getch();
}