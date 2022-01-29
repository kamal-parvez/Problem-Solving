#include<stdio.h>
#include<graphics.h>

int main()
{
    int gm,gd=DETECT;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    outtextxy(100,100,"H");
    delay(1000);

    outtextxy(100,100,"HA");
    delay(1000);
     outtextxy(100,100,"HAP");
    delay(1000);
     outtextxy(100,100,"HAPP");
    delay(1000);
     outtextxy(100,100,"HAPPY");
    delay(1000);
     outtextxy(100,100,"HAPPY   B");
    delay(1000);
     outtextxy(100,100,"HAPPY   BI");
    delay(1000);
    outtextxy(100,100,"HAPPY   BIR");
    delay(1000);
        outtextxy(100,100,"HAPPY   BIRT");
    delay(1000);
        outtextxy(100,100,"HAPPY   BIRTH");
    delay(1000);
        outtextxy(100,100,"HAPPY   BIRTHD");
    delay(1000);
        outtextxy(100,100,"HAPPY   BIRTHDA");
    delay(1000);
        outtextxy(100,100,"HAPPY   BIRTHDAY");
    delay(1000);

    getch();
    closegraph();
    return 0;
}
