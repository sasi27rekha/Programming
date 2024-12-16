#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1,n2,n3;
clrscr();
printf("Enter starting no:");
scanf("%d",&n1);
printf("Enter ending no:");
scanf("%d",&n2);
printf("Enter increment no:");
scanf("%d",&n3);
for(n=n1;n<=n2;n=n+n3)
{
printf("\n%d",n);
}
getch();
}
