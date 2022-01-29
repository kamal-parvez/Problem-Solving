#include<stdio.h>
#include<graphics.h>

int main()
{
    int gm,gd=DETECT;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    getch();
    closegraph();
    return 0;
}
