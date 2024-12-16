
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[10],s2[10],s[10];
clrscr();
printf("Enter String 1:");
scanf("%s",&s1);
printf("Enter String 2:");
scanf("%s",&s2);
printf("String 1:%s",s1);
printf("\nString 2:%s",s2);
printf("\nLength:%d",strlen(s1));
printf("\nCopy:%s",strcpy(s,s2));
printf("\nConcatenate:%s",strcat(s,s2));
printf("\nCompare:%d",strcmp(s1,s2));
printf("\nReverse:%s",strrev(s1));
printf("\nLower:%s",strlwr(s2));
printf("\nUpper:%s",strupr(s2));
getch();
}

