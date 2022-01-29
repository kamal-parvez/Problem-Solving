#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<conio.h>
int main()
{
    int i=250,j=250,x=0,y=-1,gd=DETECT,gm;
    char ch;
initgraph(&gd,&gm,"C:\\TC\\BGI");
    while(1)                                                               //infinite loop
    {
        readimagefile("kamal.jpg", i-100,j-100, i, j);
        //circle(i,j,30);
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

        delay(50);
        cleardevice();
    }
}
