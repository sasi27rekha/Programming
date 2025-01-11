#include<graphics.h>
void main()
{
int x=0,y=0;
initgraph(&x,&y,"");
setcolor(6);
setbkcolor(7);
rectangle(300,150,210,120);
circle(300,150,10);
circle(205,150,10);
circle(205,120,10);
circle(300,120,10);
getch();
}