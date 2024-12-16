#include<stdio.h>
#include<conio.h>
void main()
{
int ag;
char na[10],pl[10];
clrscr();
printf("\n Enter the Name:");
scanf("%s",&na);
printf("\n Enter the age:");
scanf("%d",&ag);
printf("\n Enter the place:");
scanf("%s",&pl);
if(ag>18)
{
printf("\n Name:%s",na);
printf("\n Age:%d",ag);
printf("\n place:%s",pl);
printf("\n Available for vote");
}
getch();
}