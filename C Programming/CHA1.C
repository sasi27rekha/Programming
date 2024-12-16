#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];int r;
clrscr();
printf("Enter Anyone text:");
scanf("%s",&a);
printf("Given Array:");
for(r=0;r<10;r++)
{
printf("\n%c",a[r]);
}
getch();
}