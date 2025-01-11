#include<graphics.h>
void main()
{
int x=0,y=0;
initgraph(&x,&y,"");
setcolor(2);
setbkcolor(5);
line(150,200,250,300);
rectangle(250,150,200,170);
circle(70,40,60);
arc(90,50,70,50,50);
getch();
}