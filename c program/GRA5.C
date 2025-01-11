#include<graphics.h>
void main()
{
int x=0,y=0,p,q;
initgraph(&x,&y,"");
setcolor(24);
setbkcolor(3);
p=getmaxx()/2;
q=getmaxy()/2;
delay(5000);
circle(p,q,100);
//cleardevice();
getch();
}