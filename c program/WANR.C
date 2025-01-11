#include<stdio.h>
#include<conio.h>
void main()
{
void star(int);
clrscr();
star(50);
printf("\n\t\t welcome\n");
star(50);
getch();
}
void star(int a)
{
int r;
for(r=1;r<=a;r++)
{
printf("*");
}
}