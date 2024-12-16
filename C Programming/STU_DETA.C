#include<stdio.h>
#include<conio.h>
void main()
{
char na[8];
int ta,e,m,s,ss,tot,avg;
clrscr();
printf("\nName:");
scanf("%s",&na);
printf("\nTamil:");
scanf("%d",&ta);
printf("\nEnglish:");
scanf("%d",&e);
printf("\nMaths:");
scanf("%d",&m);
printf("\nScience:");
scanf("%d",&s);
printf("\nSocial Science:");
scanf("%d",&ss);
tot=ta+e+m+s+ss;
avg=tot/5;
printf("\n Name:%s",na);
printf("\n Tamil:%d",ta);
printf("\n English:%d",e);
printf("\n Maths:%d",m);
printf("\n Science:%d",s);
printf("\n Social Science:%d",ss);
printf("\n Total:%d",tot);
printf("\n Average:%d",avg);
getch();
}