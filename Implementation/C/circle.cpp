#include<stdio.h>
#include<conio.h>
#include<graphics.h>
intxccxxx

 main()
{
    int gd=DETECT,gm,i;
    initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
    for(i=0;i<450;i=i+10){
        setcolor(1);
        circle(100+i,200,50);
        delay(50);
        clearviewport();
    }
    getch();
    closegraph();
}


+                       +                                                                                                                   ++++
