#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int maxx, maxy;
    int x, y;
    int divisor;
    int gd=DETECT , gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    //initwindow(450, 300);
    maxx = getmaxx();
    maxy = getmaxy();
    // Draw a white circle with red inside and a radius of 50 pixels:
    setfillstyle(SOLID_FILL, RED);
    setcolor(WHITE);
    fillellipse(maxx/2, maxy/2, 50, 50);
    // Print a message and wait for a red pixel to be double clicked:
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    outtextxy(20, 20, "Left click in to end.");
    setcolor(BLUE);
    divisor = 2;
    while (!ismouseclick(WM_LBUTTONDOWN))
    {
       bar(0,0,maxx/divisor, maxy/divisor);
        delay(50);
        divisor++;
    }
    getmouseclick(WM_LBUTTONDOWN, x, y);
    cout << "The mouse was clicked at: ";
    cout << "x=" << 100;
    cout << " y=" << 100 << endl;
    //getch();
    closegraph();
}
