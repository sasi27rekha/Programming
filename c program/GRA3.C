#include<graphics.h>
void main()
{
int x=0,y=0;
initgraph(&x,&y,"");
setcolor(15);
setbkcolor(20);
settextstyle(5,0,12);
outtextxy(50,60,"style");
settextstyle(7,1,11);
outtextxy(50,80,"camlin");
getch();
}