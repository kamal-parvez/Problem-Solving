#include<stdio.h>
#include<graphics.h>

int main()
{
    int gd=DETECT ,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    //while(1)
    //{
        int a[10]={500,200,550,150,550,250,500,200};
        fillpoly(4,a);
    //}

    getch();
    closegraph();
}
