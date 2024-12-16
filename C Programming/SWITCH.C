#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
clrscr();
printf("choices\n-----------");
printf("\n\t1.Table\n\t2.Fan\n\t3.Chair\n\t4.TV\n\t5.Fridge");
printf("\nEnter Your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Your Choice is Table");
break;
case 2:
printf("Your Choice is Fan");
break;
case 3:
printf("Your Choice is Chair");
break;
case 4:
printf("Your Choice is TV");
break;
case 5:
printf("Your Choice is Fridge");
break;
default:
printf("Unknown Choice");
}
getch();
}
