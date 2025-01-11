#include<stdio.h>
#include<conio.h>
void main()
{
int n,*a;
clrscr();
printf("Enter N value:");
scanf("%d",&n);
a=&n;
printf("N value:%d",n);
printf("\nMemory Address:%u",a);
getch();
}
