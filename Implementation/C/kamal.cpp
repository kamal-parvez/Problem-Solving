#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int gd = DETECT;
    int gm,k,u,rec;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    initwindow(900,540,"",-3,-3);
    int page=0,barX=200;
    k=1;
    char ch;
		int x=0,y=-1,i=250,j=250;
    while(1)
    {

        setactivepage(page);
        //setvisualpage(1-page);
        cleardevice();
        //readimagefile("cake.jpg", 0, 0, 900, 540);
        readimagefile("kamal.jpg", i, j, i-200, j-200);
        circle(i,j,5);

         if(kbhit())                                            //check if a key is pressed
        {
            ch=getch();
                if(ch=='w')                           //move upward
                {
                    x=0;
                    y=-1;
                }

                if(ch=='a')                           //move left
                {
                    x=-1;
                    y=0;

                }

                if(ch=='d')                           //move right
                {
                    x=1;
                    y=0;
                }

                if(ch=='s')                           //move downward
                {
                    x=0;
                    y=1;
                }
                 if(ch=='x')                           //exit when esc pressed
                    exit(0);
            }
        i=i+5*x;
        j=j+5*y;

        delay(50);
        //cleardevice();
    }

        setcolor(WHITE);
        //Front area
        /*line(450,100,500,100);
        line(450,100,440,105);
        line(450,110,500,110);
        line(450,110,440,105);
        //top front wing
        line(500,100,520,30);
        line(520,30,520,100);
        //NOttom front wing
        line(500,110,520,180);
        line(520,180,520,110);
        //Rear area
        line(520,100,570,100);
        line(520,110,570,110);
        //TOP rear wing
        line(570,100,580,70);
        line(580,70,580,100);
        //Bottom rear  liwing
        line(570,110,580,140);
        line(580,140,580,110);
        //Last area
        line(580,100,585,100);
        line(580,110,585,110);
        line(580,110,585,100);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(500,105,WHITE);*/

        ///delay(400);
       // for(rec=0; rec<5; rec++)
            //{
            //for(i=0; i<=1500; i++)
        //{

            setcolor(BLUE);
            rectangle(250+i*5,10,300+i*5,20);
            setfillstyle(SOLID_FILL,BLUE);
            floodfill(270+i*5,15,BLUE);
            setcolor(RED);
            rectangle(10+i*5,70,50+i*5,80);
            setfillstyle(SOLID_FILL,RED);
            floodfill(30+i*5,75,RED);
            setcolor(5);
            rectangle(100+i*5,80,150+i*5,90);
            setfillstyle(SOLID_FILL,5);
            floodfill(130+i*5,85,5);
            setcolor(CYAN);
            rectangle(200+i*5,30,250+i*5,40);
            setfillstyle(SOLID_FILL,CYAN);
            floodfill(235+i*5,35,CYAN);
            setcolor(GREEN);
            rectangle(-400+i*5,100,-350+i*5,110);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(-370+i*5,105,GREEN);
            setcolor(YELLOW);
            rectangle(450+i*5,110,500+i*5,120);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(470+i*5,115,YELLOW);
            page=1-page;
            delay(6);
            k++;
            //cleardevice();
        //}


    getch();
    closegraph();
}



