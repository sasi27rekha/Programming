#include<stdio.h>
#include<conio.h>
struct Info
{
char cn[10];int en;
};
void main()
{
struct Info obj[5];
int r;
clrscr();
printf("\tCandidate Details\n\t================");
for(r=0;r<5;r++)
{
printf("\nEnter Course Name:");
scanf("%s",&obj[r].cn);
printf("Enter Entrollment No:");
scanf("%d",&obj[r].en);
}
printf("\tDetails\n\t========");
for(r=0;r<5;r++)
{
printf("\nCourse:%s",obj[r].cn);
printf("\nEnt No:%d",obj[r].en);
}
getch();
}