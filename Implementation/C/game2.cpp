#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>

int main()
{
    int i=250,j=250,x=0,y=-1,gd=DETECT,gm,page=0,p;
    char ch;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    initwindow(900,540,"",-3,-3);
//initgraph(&gd,&gm,"C:\\turboc3\\BGI");
while(1)                                                               //infinite loop
    {
       setactivepage(page);
        setvisualpage(page-1);
		//cleardevice();
		for(p=0;p<=1;p++)
		{
		int m=rand();
		int n=rand()%100;
		readimagefile("gift.jpg", m, n, m-40, n-40);
		//delay(10);
		//if(p==4)p=0;
		}
        readimagefile("black_image.jpg", i, j, i-200, j-200);

        outtextxy(400,400,"PressEsc to Exit…..");
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

        page=page-1;
         delay(10);

    }
}
