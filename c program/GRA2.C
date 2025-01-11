#include<graphics.h>
void main()
{
int x=0,y=0;
initgraph(&x,&y,"");
setcolor(10);
setbkcolor(3);
outtextxy(150,200,"Benefit");
setcolor(5);
outtextxy(150,250,"Card");
getch();
}