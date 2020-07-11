#include <graphics.h>
#include <stdio.h>
#include <conio.h>
int main(void)
{

int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\MinGW\\include\");
setcolor(4);
line(30,100,210,100);
line(30,101,210,101);
getch();
}
