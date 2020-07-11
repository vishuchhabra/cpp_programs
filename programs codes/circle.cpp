#include<graphics.h>

 int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    circle(100,80,20);
    closegraph();
    return 0;

}

