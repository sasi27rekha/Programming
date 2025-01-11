#include<stdio.h>
#include<conio.h>
void main()
{
FILE*f;
char pn[12];
int q,ra,amt;
clrscr();
f=fopen("Info.txt","w");
printf("Product Name:");
scanf("%s",&pn);
printf("Quantity:");
scanf("%d",&q);
printf("Rate:");
scanf("%d",&ra);
amt=ra*q;
printf("Amount:%d",amt);
printf("\nName:%s\nQuantity:%d\nRate:%d\nAmount:%d",pn,q,ra,amt);
fprintf(f,"Name:%s\tQuantity;%d\tRate:%d",pn,q,ra,amt);
getch();
}