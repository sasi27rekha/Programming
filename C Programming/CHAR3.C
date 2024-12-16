#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int r;
clrscr();
printf("Enter text:");
scanf("%s",&a);
printf("Without NullValue:");
for(r=0;a[r]!='\0';r++)
{
printf("\n%c",a[r]);
}
getch();
}