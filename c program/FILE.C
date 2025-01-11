#include<stdio.h>
#include<conio.h>
void main()
{
FILE*f;
char na[10],pl[11];int ag;
clrscr();
f=fopen("Info.txt","w");
printf("File Created");
printf("\nEnter Name:");
scanf("%s",&na);
printf("Enter Age:");
scanf("%d",&ag);
printf("Enter Place:");
scanf("%s",&pl);
printf("Name:%s\nAge:%d\nPlace:%s",na,ag,pl);
fprintf(f,"Name:%s\tAge:%d\tPlace:%s",na,ag,pl);
getch();
}

