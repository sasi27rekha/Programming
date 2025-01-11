#include<stdio.h>
#include<conio.h>
void main()
{
char p[10];
int ra,q,am,dr,na;
clrscr();
printf("Enter Product Name:");
scanf("%s",&p);
printf("Enter Rate:");
scanf("%d",&ra);
printf("Enter Quantity:");
scanf("%d",&q);
printf("\n\t\tBill Details\n\t\t**************");
printf("\nProduct:%s",p);
printf("\nRate:%d",ra);
printf("\nQuantity:%d",q);
am=ra*q;
printf("\nAmount:%d",am);
if(am>=8000&&am<=10000)
{
printf("\nDiscount Rate:8%");
dr=am*8/100;
printf("\nDiscount Amount:%d",dr);
na=am-dr;
printf("\nNet Amount:%d",na);
}
else if(am>=6000&&am<=8000)
{
printf("\nDiscount Rate:6%");
dr=am*6/100;
printf("\nDiscount Amount:%d",dr);
na=am-dr;
printf("\nNet Amount:%d",na);
}
else if(am>=4000&&am<=6000)
{
printf("\nDiscount Rate:4%");
dr=am*4/100;
printf("\nDiscount Amount:%d",dr);
na=am-dr;
printf("\nNet Amount:%d",na);
}
else if(am>=2000&&am<=4000)
{
printf("\nDiscount Rate:2%");
dr=am*2/100;
printf("\nDiscount Amount:%d",dr);
na=am-dr;
printf("\nNet Amount:%d",na);
}
else if(am>=1000&&am<=2000)
{
printf("\nDiscount Rate:1%");
dr=am*1/100;
printf("\nDiscount Amount:%d",dr);
na=am-dr;
printf("\nNet Amount:%d",na);
}
else
{
printf("Below 1000 number:");
}
getch();
}