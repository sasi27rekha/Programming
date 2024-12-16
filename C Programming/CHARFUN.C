#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("Enter Character:");
scanf("%c",&ch);
printf("Given Character:%c",ch);
printf("\n Isdigit:%d",isdigit(ch));
printf("\n Isspace:%d",isspace(ch));
printf("\n Isalpha:%d",isalpha(ch));
printf("\n Islower:%d",islower(ch));
printf("\n Isupper:%d",isupper(ch));
printf("\n Tolower:%c",tolower(ch));
printf("\n Toupper:%c",toupper(ch));
getch();
}

