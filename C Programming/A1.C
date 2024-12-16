#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,add,sub,mul,div,mod;
clrscr();
a=10;
b=5;
add=a+b;
sub=add-4;
mul=sub*5;
div=mul/2;
mod=div%10;
printf("\n Arithmatical Operator\n ====================");
printf("\n 1 Number:%d",a);
printf("\n 2 Number:%d",b);
printf("\n Addition(a+b):%d",add);
printf("\n Subtraction(add-4):%d",sub);
printf("\n Multiplication(sub*5):%d",mul);
printf("\n Division(mul/2):%d",div);
printf("\n Modulas(div mod 10):%d",mod);
getch();
}