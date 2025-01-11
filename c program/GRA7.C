#include<graphics.h>
void main()
{
int x=0,y=0;
initgraph(&x,&y,"");
setcolor(8);
setbkcolor(9);
line(100,200,150,250);
line(100,200,60,250);
line(150,250,60,250);
getch();
}