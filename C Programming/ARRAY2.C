#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],b[2][2],r,c;
clrscr();
printf("Enter first Array:\n");
for(r=0;r<2;r++)
{
for(c=0;c<2;c++)
{
scanf("%d",&a[r][c]);
}
}
printf("Enter second array:\n");
for(r=0;r<2;r++)
{
for(c=0;c<2;c++)
{
scanf("%d",&b[r][c]);
}
}
printf("First array:\n");
for(r=0;r<2;r++)
{
for(c=0;c<2;c++)
{
printf("%d\t",a[r][c]);
}
printf("\n");
}
printf("Second array:\n");
for(r=0;r<2;r++)
{
for(c=0;c<2;c++)
{
printf("%d\t",b[r][c]);
}
printf("\n");
}
printf("Sum of array:\n");
for(r=0;r<2;r++)
{
for(c=0;c<2;c++)
{
printf("%d\t",a[r][c]+b[r][c]);
}
printf("\n");
}
getch();
}