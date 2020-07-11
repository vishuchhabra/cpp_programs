#include<graphics.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
 int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    circle(100,80,20);
    closegraph();
    return 0;
}
