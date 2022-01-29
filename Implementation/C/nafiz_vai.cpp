#include "graphics.h"
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib,"Winmm.lib")

int possy=-700,L=0,llll=0;
int windowx=1024,windowy=700;
int mode=1,bosslife=10;
int bossflag=15;
int blast=0,kp=0,ll;
char x;
int life=4;
int p=510,q=640,r=35,point=0,bull;
int bossActive=0;
char ch;
int bulletActive=0;
int bulletx=0;
int inputcount=0;
int bullety=0,lm;
int flag=0;
int mycolor, myposx, myspeed, myposy,bossposy=0,bossposx=500;
void newname();
void gameover();
void boss_shot();
void scorelead();
void outintxy();
void leaderboard();
void enemy();
void bulletWork();
void enemyEverything();
void menu();
void outintxy();
void start();
void confexit();
void escapepress();
void gameplay();
void boss();
void bosscore();
void loading();
void bossdef();
void story();
void instruction();
void credit();
void story()
{
    if (llll==0)
	{
	    cleardevice();
	PlaySound(0, 0, NULL);
	int p1=100;
	int q1=0;
	int r1=1024;
	int s1=600;
	PlaySound("story.wav", 0, SND_FILENAME|SND_ASYNC);
	readimagefile("story1.jpg",p1,q1,r1+20,s1-20);
	delay(150);
	readimagefile("story1.jpg",p1,q1,r1+15,s1-15);
	delay(150);
	readimagefile("story1.jpg",p1,q1,r1+10,s1-10);
	delay(150);
	readimagefile("story1.jpg",p1,q1,r1+5,s1-5);
	delay(150);
	readimagefile("story1.jpg",p1,q1,r1,s1);
	delay(150);
	readimagefile("story1.jpg",p1,q1,r1-5,s1+5);
	delay(4000);
	cleardevice();
	readimagefile("story2.jpg",p1,q1,r1+20,s1-20);
	delay(150);
	readimagefile("story2.jpg",p1,q1,r1+15,s1-15);
	delay(150);
	readimagefile("story2.jpg",p1,q1,r1+10,s1-10);
	delay(150);
	readimagefile("story2.jpg",p1,q1,r1+5,s1-5);
	delay(150);
	readimagefile("story2.jpg",p1,q1,r1,s1);
	delay(150);
	readimagefile("story2.jpg",p1,q1,r1-5,s1+5);
	delay(4000);
	cleardevice();
	readimagefile("story3.jpg",p1,q1,r1+20,s1-20);
	delay(150);
	readimagefile("story3.jpg",p1,q1,r1+15,s1-15);
	delay(150);
	readimagefile("story3.jpg",p1,q1,r1+10,s1-10);
	delay(150);
	readimagefile("story3.jpg",p1,q1,r1+5,s1-5);
	delay(150);
	readimagefile("story3.jpg",p1,q1,r1,s1);
	delay(150);
	readimagefile("story3.jpg",p1,q1,r1-5,s1+5);
	delay(4000);
	cleardevice();
	readimagefile("story4.jpg",p1,q1,r1+20,s1-20);
	delay(150);
	readimagefile("story4.jpg",p1,q1,r1+15,s1-15);
	delay(150);
	readimagefile("story4.jpg",p1,q1,r1+10,s1-10);
	delay(150);
	readimagefile("story4.jpg",p1,q1,r1+5,s1-5);
	delay(150);
	readimagefile("story4.jpg",p1,q1,r1,s1);
	delay(150);
	readimagefile("story4.jpg",p1,q1,r1-5,s1+5);
	delay(4000);
	cleardevice();
	readimagefile("story5.jpg",p1,q1,r1+20,s1-20);
	delay(150);
	readimagefile("story5.jpg",p1,q1,r1+15,s1-15);
	delay(150);
	readimagefile("story5.jpg",p1,q1,r1+10,s1-10);
	delay(150);
	readimagefile("story5.jpg",p1,q1,r1+5,s1-5);
	delay(150);
	readimagefile("story5.jpg",p1,q1,r1,s1);
	delay(150);
	readimagefile("story5.jpg",p1,q1,r1-5,s1+5);
	delay(4000);
	cleardevice();
	readimagefile("story6.jpg",p1,q1,r1+20,s1-20);
	delay(150);
	readimagefile("story6.jpg",p1,q1,r1+15,s1-15);
	delay(150);
	readimagefile("story6.jpg",p1,q1,r1+10,s1-10);
	delay(150);
	readimagefile("story6.jpg",p1,q1,r1+5,s1-5);
	delay(150);
	readimagefile("story6.jpg",p1,q1,r1,s1);
	delay(150);
	readimagefile("story6.jpg",p1,q1,r1-5,s1+5);
	delay(4000);
	cleardevice();
	readimagefile("story7.jpg",p1,q1,r1+20,s1-20);
	delay(150);
	readimagefile("story7.jpg",p1,q1,r1+15,s1-15);
	delay(150);
	readimagefile("story7.jpg",p1,q1,r1+10,s1-10);
	delay(150);
	readimagefile("story7.jpg",p1,q1,r1+5,s1-5);
	delay(150);
	readimagefile("story7.jpg",p1,q1,r1,s1);
	delay(150);
	readimagefile("story7.jpg",p1,q1,r1-5,s1+5);
	delay(4000);
	cleardevice();
	readimagefile("mestory.jpg",p1,q1,r1+20,s1-20);
	delay(150);
	readimagefile("mestory.jpg",p1,q1,r1+15,s1-15);
	delay(150);
	readimagefile("mestory.jpg",p1,q1,r1+10,s1-10);
	delay(150);
	readimagefile("mestory.jpg",p1,q1,r1+5,s1-5);
	delay(150);
	readimagefile("mestory.jpg",p1,q1,r1,s1);
	delay(150);
	readimagefile("mestory.jpg",p1,q1,r1-5,s1+5);
	delay(4000);
	cleardevice();
	readimagefile("story8.jpg",p1,q1,r1+20,s1-20);
    delay(150);
	readimagefile("story8.jpg",p1,q1,r1+15,s1-15);
	delay(150);
	readimagefile("story8.jpg",p1,q1,r1+10,s1-10);
	delay(150);
	readimagefile("story8.jpg",p1,q1,r1+5,s1-5);
	delay(150);
	readimagefile("story8.jpg",p1,q1,r1,s1);
	delay(150);
	 PlaySound("laugh.wav", 0, SND_FILENAME|SND_ASYNC);
	readimagefile("story8.jpg",p1,q1,r1-5,s1+5);
	delay(3000);
	}
	cleardevice();
	}

void credit()
{
	PlaySound("start.wav", 0, SND_FILENAME|SND_ASYNC);
	readimagefile("credit.jpg",0,0,1024,700);
	 setbkcolor(getpixel(40,617));
	setcolor(15);
    settextstyle(10, HORIZ_DIR, 5);

    outtextxy(20,440,"C");
	delay(70);
	outtextxy(20,440,"CR");
	delay(70);
	outtextxy(20,440,"CRE");
	delay(70);
	outtextxy(20,440,"CRED");
	delay(70);
	outtextxy(20,440,"CREDI");
	delay(70);
	outtextxy(20,440,"CREDIT");
	delay(70);
	outtextxy(20,440,"CREDIT :");
	delay(200);
	outtextxy(20,470,"-");
	delay(50);
	outtextxy(20,470,"--");
	delay(50);
	outtextxy(20,470,"---");
	delay(50);
	outtextxy(20,470,"----");
	delay(50);
	outtextxy(20,470,"-----");
	delay(50);
	outtextxy(20,470,"------");
	delay(50);
	outtextxy(20,470,"-------");
	delay(50);
	outtextxy(20,470,"--------");
	delay(700);
	setcolor(15);
    settextstyle(8, HORIZ_DIR, 2.8);
	outtextxy(10,515,"N");
	delay(80);
	outtextxy(10,515,"NA");
	delay(80);
	outtextxy(10,515,"NAF");
	delay(80);
	outtextxy(10,515,"NAFI");
	delay(80);
	outtextxy(10,515,"NAFIZ");
	delay(80);
	outtextxy(10,515,"NAFIZ H");
	delay(80);
	outtextxy(10,515,"NAFIZ HO");
	delay(80);
	outtextxy(10,515,"NAFIZ HOS");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSS");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSA");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAI");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN ");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN &");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & M");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MI");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZ");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZA");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZAN");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZANU");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZANUR");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZANUR ");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZANUR R");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZANUR RA");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZANUR RAH");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZANUR RAHM");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZANUR RAHM");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZANUR RAHMA");
	delay(80);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZANUR RAHMAN");
	delay(1005);
	outtextxy(60,540,"D");
	delay(80);
	outtextxy(60,540,"DE");
	delay(80);
	outtextxy(60,540,"DEP");
	delay(80);
	outtextxy(60,540,"DEPA");
	delay(80);
	outtextxy(60,540,"DEPAR");
	delay(80);
	outtextxy(60,540,"DEPART");
	delay(80);
	outtextxy(60,540,"DEPARTM");
	delay(80);
	outtextxy(60,540,"DEPARTME");
	delay(80);
	outtextxy(60,540,"DEPARTMEN");
	delay(80);
	outtextxy(60,540,"DEPARTMENT");
	delay(80);
	outtextxy(60,540,"DEPARTMENT ");
	delay(80);
	outtextxy(60,540,"DEPARTMENT O");
	delay(80);
	outtextxy(60,540,"DEPARTMENT OF");
	delay(1005);
	outtextxy(10,565,"C");
	delay(80);
	outtextxy(10,565,"CO");
	delay(80);
	outtextxy(10,565,"COM");
	delay(80);
	outtextxy(10,565,"COMP");
	delay(80);
	outtextxy(10,565,"COMPU");
	delay(80);
	outtextxy(10,565,"COMPUT");
	delay(80);
	outtextxy(10,565,"COMPUTE");
	delay(80);
	outtextxy(10,565,"COMPUTER ");
	delay(80);
	outtextxy(10,565,"COMPUTER S");
	delay(80);
	outtextxy(10,565,"COMPUTER SC");
	delay(80);
	outtextxy(10,565,"COMPUTER SCI");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIE");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIEN");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENC");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE ");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE &");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE & ");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE & E");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE & EN");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE & ENG");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE & ENGI");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE & ENGIN");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE & ENGINE");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE & ENGINEE");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE & ENGINEER");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE & ENGINEERI");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE & ENGINEERIN");
	delay(80);
	outtextxy(10,565,"COMPUTER SCIENCE & ENGINEERING");
	delay(10);
	int kk=1030;
	while(kk>401-65)
	{
		settextstyle(10, HORIZ_DIR, 5);

		outtextxy(20,440,"CREDIT :");
	outtextxy(20,470,"--------");
	settextstyle(8, HORIZ_DIR, 2.8);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZANUR RAHMAN");
	outtextxy(60,540,"DEPARTMENT OF");
		outtextxy(10,565,"COMPUTER SCIENCE & ENGINEERING");
		readimagefile("credit.jpg",0,0,1024,700);
	readimagefile("csedu.jpg",kk,475,kk+85,595);
	kk=kk-200;
	}
	settextstyle(10, HORIZ_DIR, 5);
		outtextxy(20,440,"CREDIT :");
	outtextxy(20,470,"--------");
	settextstyle(8, HORIZ_DIR, 2.8);
	outtextxy(10,515,"NAFIZ HOSSAIN & MIZANUR RAHMAN");
	outtextxy(60,540,"DEPARTMENT OF");
		outtextxy(10,565,"COMPUTER SCIENCE & ENGINEERING");
	delay(500);
	outtextxy(40,590,"U");
	delay(80);
	outtextxy(40,590,"UN");
	delay(80);
	outtextxy(40,590,"UNI");
	delay(80);
	outtextxy(40,590,"UNIV");
	delay(80);
	outtextxy(40,590,"UNIVE");
	delay(80);
	outtextxy(40,590,"UNIVER");
	delay(80);
	outtextxy(40,590,"UNIVERS");
	delay(80);
	outtextxy(40,590,"UNIVERSI");
	delay(80);
	outtextxy(40,590,"UNIVERSIT");
	delay(80);
	outtextxy(40,590,"UNIVERSITY");
	delay(80);
	outtextxy(40,590,"UNIVERSITY ");
	delay(80);
	outtextxy(40,590,"UNIVERSITY O");
	delay(80);
	outtextxy(40,590,"UNIVERSITY OF");
	delay(80);
	outtextxy(40,590,"UNIVERSITY OF ");
	delay(80);
	outtextxy(40,590,"UNIVERSITY OF D");
	delay(80);
	outtextxy(40,590,"UNIVERSITY OF DH");
	delay(80);
	outtextxy(40,590,"UNIVERSITY OF DHA");
	delay(80);
	outtextxy(40,590,"UNIVERSITY OF DHAK");
	delay(80);
	outtextxy(40,590,"UNIVERSITY OF DHAKA");
	delay(500);
	outtextxy(30,615,"S");
	delay(80);
	outtextxy(30,615,"SP");
	delay(80);
	outtextxy(30,615,"SPE");
	delay(80);
	outtextxy(30,615,"SPEC");
	delay(80);
	outtextxy(30,615,"SPECI");
	delay(80);
	outtextxy(30,615,"SPECIA");
	delay(80);
	outtextxy(30,615,"SPECIAL");
	delay(80);
	outtextxy(30,615,"SPECIAL ");
	delay(80);
	outtextxy(30,615,"SPECIAL T");
	delay(80);
	outtextxy(30,615,"SPECIAL TH");
	delay(80);
	outtextxy(30,615,"SPECIAL THA");
	delay(80);
	outtextxy(30,615,"SPECIAL THAN");
	delay(80);
	outtextxy(30,615,"SPECIAL THANK");
	delay(80);
	outtextxy(30,615,"SPECIAL THANKS");
	delay(80);
	outtextxy(30,615,"SPECIAL THANKS TO:");
	delay(550);
	outtextxy(70,640,"#T");
	delay(80);
	outtextxy(70,640,"#TI");
	delay(80);
	outtextxy(70,640,"#TIA");
	delay(80);
	outtextxy(70,640,"#TIAS");
	delay(80);
	outtextxy(70,640,"#TIASH");
	delay(80);
	outtextxy(70,640,"#TIASH ");
	delay(80);
	outtextxy(70,640,"#TIASH V");
	delay(80);
	outtextxy(70,640,"#TIASH Va");
	delay(80);
	outtextxy(70,640,"#TIASH Vai");
	delay(80);
	outtextxy(70,640,"#TIASH Vaia");
	while(1)
	{
		  outtextxy(650,600,"PRESS ANY KEY TO GO BACK");

								 if (kbhit())
										{

			 if (ch==27)
			 {
				 confexit();
			 }
			 else

			 {


							 getch();
							 cleardevice();
				break;
			 }
								 }
	}
	cleardevice();
			readimagefile("loading.jpg",0,0,1024,700);
    setbkcolor(getpixel(400,617));
	 settextstyle(10, HORIZ_DIR, 4.5);
    outtextxy(580,600," Loading.        ");
    delay(200);
    outtextxy(580,600," Loading..       ");
    delay(200);
    outtextxy(580,600," Loading...      ");
	delay(500);
	outtextxy(580,600," Loading......       ");
            enemyEverything();
            menu();
}
void instruction(){
	//PlaySound("start.wav", 0, SND_FILENAME|SND_ASYNC);
	 readimagefile("instruction.jpg",0,0,1024,700);
		     setbkcolor(getpixel(10,200));
			 settextstyle(10, HORIZ_DIR, 5.5);

             outtextxy(50,50,"I");
			 delay(100);
			 outtextxy(50,50,"IN");
			 delay(100);
			 outtextxy(50,50,"INS");
			 delay(100);
			 outtextxy(50,50,"INST");
			 delay(100);
			 outtextxy(50,50,"INSTR");
			 delay(100);
			 outtextxy(50,50,"INSTRU");
			 delay(100);
			 outtextxy(50,50,"INSTRUC");
			 delay(100);
			 outtextxy(50,50,"INSTRUCT");
			 delay(100);
			 outtextxy(50,50,"INSTRUCTI");
			 delay(100);
			 outtextxy(50,50,"INSTRUCTIO");
			 delay(100);
			 outtextxy(50,50,"INSTRUCTION");
			 delay(100);
			 outtextxy(50,50,"INSTRUCTIONS");

			 delay(500);
			 setbkcolor(getpixel(10,200));
			 settextstyle(8, HORIZ_DIR, 3);
			 outtextxy(15,120,"U");
			 delay(80);
			 outtextxy(15,120,"Us");
			 delay(80);
			 outtextxy(15,120,"Use");
			 delay(80);
			 outtextxy(15,120,"Use N");
			 delay(80);
			 outtextxy(15,120,"Use Nu");
			 delay(80);
			 outtextxy(15,120,"Use Num");
			 delay(80);
			 outtextxy(15,120,"Use Num 4");
			 delay(80);

			 outtextxy(15,120,"Use Num 4 a");
			 delay(80);

			 outtextxy(15,120,"Use Num 4 an");
			 delay(80);

			 outtextxy(15,120,"Use Num 4 and");
			 delay(80);

			 outtextxy(15,120,"Use Num 4 and N");
			 delay(80);

			 outtextxy(15,120,"Use Num 4 and Nu");
			 delay(80);

			 outtextxy(15,120,"Use Num 4 and Num");
			 delay(80);

			 outtextxy(15,120,"Use Num 4 and Num 7");
			 delay(80);

			 outtextxy(15,120,"Use Num 4 and Num 7 k");
			 delay(80);

			 outtextxy(15,120,"Use Num 4 and Num 7 ke");
			 delay(80);

			 outtextxy(15,120,"Use Num 4 and Num 7 key");
			 delay(80);

			 outtextxy(15,120,"Use Num 4 and Num 7 key t");
			 delay(80);

			 outtextxy(15,120,"Use Num 4 and Num 7 key to");

			 delay(80);

			 outtextxy(15,150,"m");
			 delay(80);
			 outtextxy(15,150,"mo");
			 delay(80);
			outtextxy(15,150,"mov");
						 delay(80);
			outtextxy(15,150,"move");
						 delay(80);
						 outtextxy(15,150,"move t");
			 delay(80);
			 outtextxy(15,150,"move th");
			 delay(80);
			 outtextxy(15,150,"move the");
							 delay(80);
				outtextxy(15,150,"move the s");
							 delay(80);
				outtextxy(15,150,"move the sh");
							 delay(80);
				outtextxy(15,150,"move the sho");
							 delay(80);
				outtextxy(15,150,"move the shoo");
							 delay(80);
				outtextxy(15,150,"move the shoot");
							 delay(80);
				outtextxy(15,150,"move the shoote");
							 delay(80);
				outtextxy(15,150,"move the shooter");
							 delay(80);

							 outtextxy(15,150,"move the shooter l");
							 delay(80);
				outtextxy(15,150,"move the shooter le");
							 delay(80);
				outtextxy(15,150,"move the shooter lef");
							 delay(80);
							 outtextxy(15,150,"move the shooter left");
							 delay(80);
				outtextxy(15,150,"move the shooter left &");
							 delay(80);
				outtextxy(15,150,"move the shooter left & r");
							 delay(80);
							 outtextxy(15,150,"move the shooter left & ri");
							 delay(80);
							 outtextxy(15,150,"move the shooter left & rig");
							 delay(80);
							 outtextxy(15,150,"move the shooter left & righ");
							 delay(80);
							 outtextxy(15,150,"move the shooter left & right");
							 delay(80);
							 outtextxy(15,150,"move the shooter left & right.");
							 delay(80);
							 while(1)
							 {
								 setbkcolor(getpixel(10,200));
			 settextstyle(10, HORIZ_DIR, 5.5);
			 outtextxy(50,50,"INSTRUCTIONS");
			 settextstyle(8, HORIZ_DIR, 3);
			 outtextxy(15,120,"Use Num 4 and Num 7 key to");
			 outtextxy(15,150,"move the shooter left & right.");
								 outtextxy(15,200,"Use space");
								 delay(900);
								 outtextxy(15,200,"To  shoot");
								 delay(900);
								  outtextxy(15,600,"PRESS ANY KEY TO GO BACK");
								 if (kbhit())
										 break;

							 }
							 getch();
							 cleardevice();
							 menu();
			 if (ch==27)
			 {
				 confexit();
			 }
}

void loading()
{
	readimagefile("loading.jpg",0,0,1024,700);
    setbkcolor(getpixel(400,617));
	 settextstyle(10, HORIZ_DIR, 4.5);
    outtextxy(580,600," Loading.        ");
    delay(400);
    outtextxy(580,600," Loading..       ");
    delay(400);
    outtextxy(580,600," Loading...      ");
    delay(400);
    outtextxy(580,600," Loading....     ");
    delay(400);
    outtextxy(580,600," Loading.....    ");
    delay(400);
    outtextxy(580,600," Loading......   ");
    delay(600);
}

struct name_score
{
    char name[10];
    int points;
};  name_score number[3];
void confexit()
{
            int x=mousex();
            int y=mousey();
    readimagefile("gpausenext.jpg",300,280,750,460);
        clearmouseclick(WM_LBUTTONDOWN);
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            x=mousex();
            y=mousey();
            if(x>=447 && y>= 414 && x<=514 && y<=448)
            {
                readimagefile("ync.jpg",300,280,750,460);

            }
            if(x>=570 && y>= 414 && x<=632 && y<=447)
            {
                readimagefile("nnc.jpg",300,280,750,460);

            }
        }
        getmouseclick(WM_LBUTTONDOWN,x,y);

        if(x>=447 && y>= 414 && x<=514 && y<=448)
        {
            readimagefile("yc.jpg",300,280,750,460);
			PlaySound("click.wav", 0, SND_FILENAME);
            delay(200);

            readimagefile("gpausenext.jpg",300,280,750,460);
            delay(500);
			gameover();

        }
        if(x>=570 && y>= 414 && x<=632 && y<=447)
        {
            readimagefile("nc.jpg",300,280,750,460);
			PlaySound("click.wav", 0, SND_FILENAME);
            delay(200);
            readimagefile("gpausenext.jpg",300,280,750,460);
            delay(500);
			cleardevice();
			readimagefile("loading.jpg",0,0,1024,700);
    setbkcolor(getpixel(400,617));
	 settextstyle(10, HORIZ_DIR, 4.5);
    outtextxy(580,600," Loading.        ");
    delay(200);
    outtextxy(580,600," Loading..       ");
    delay(200);
    outtextxy(580,600," Loading...      ");
	delay(500);
	outtextxy(580,600," Loading......       ");
            enemyEverything();
            menu();

        }
}
void boss()
{

     bossflag=flag;
	 myposx= bossposx;
    int p_cordinate=p;
    int test=0;
    readimagefile("boss1.jpg",bossposx-60,bossposy-20,bossposx+90,bossposy+50);

    while(bossposy<=21)
    { if (bossposy==0)

	{
		delay(50);
		cleardevice();
		PlaySound("plan.wav", 0, SND_FILENAME|SND_ASYNC);
		readimagefile("storydef.jpg",0,0,1024,700);
		delay(3000);
		PlaySound("laugh2.wav", 0, SND_FILENAME|SND_ASYNC);
		readimagefile("bossdef2.jpg",0,0,1024,700);
		delay(3200);

		readimagefile("bg.bmp",0,possy,1024,possy+1400);
		readimagefile("Fl.jpg",p-40,q-40,p+50,q+50);
	}
        readimagefile("boss1.jpg",bossposx-60,bossposy-20,bossposx+90,bossposy+50);
        bossposy++;
        delay(110);
    }
    int i;
    char ch;
        if (bullety<=100 && bullety>=0)
        {

			if (bulletx>bossposx-60&&bulletx<bossposx+90)
            {
				if (bosslife>=1)
				{
					 PlaySound("bosshot.wav", 0, SND_FILENAME|SND_ASYNC);
					readimagefile("blast11.jpg",bulletx-10,bullety-10,bulletx+10,bullety+10);
				delay(12);
				readimagefile("blast11.jpg",bulletx-15,bullety-15,bulletx+15,bullety+15);
				delay(12);
				readimagefile("blast11.jpg",bulletx-20,bullety-20,bulletx+20,bullety+20);
				delay(12);
				readimagefile("blast11.jpg",bulletx-25,bullety-25,bulletx+25,bullety+25);
				delay(12);
				readimagefile("blast11.jpg",bulletx-40,bullety-40,bulletx+40,bullety+40);
				}
               bosslife--;
			   flag=flag+35;
			   if (bosslife==0){
				   while(kbhit())
                          getch();
				   PlaySound("end.wav", 0, SND_FILENAME|SND_ASYNC);
				   setcolor(0);
				setfillstyle(SOLID_FILL,0);
				bar(bossposx-100,5,bossposx+100,150);
				readimagefile("blastt.jpg",bossposx-10,5,bossposx+40,40);
				delay(35);
				readimagefile("blastt.jpg",bossposx-20,5,bossposx+45,50);
				delay(35);
				readimagefile("blastt.jpg",bossposx-30,5,bossposx+55,60);
				delay(35);
				readimagefile("blastt.jpg",bossposx-40,5,bossposx+65,70);
				delay(35);
				readimagefile("blastt.jpg",bossposx-55,5,bossposx+75,80);
				delay(35);
				readimagefile("blastt.jpg",bossposx-65,5,bossposx+85,90);
				delay(35);
				readimagefile("blastt.jpg",bossposx-75,5,bossposx+95,100);
				delay(35);
				readimagefile("blastt.jpg",bossposx-85,5,bossposx+100,110);
				delay(2000);
				readimagefile("gameoverd.jpg",0,0,1024,700);
				delay(3000);
				 while(kbhit())
                          getch();
				gameover();
			   }
			   bulletx=0;
			   bullety=0;
			   bulletActive=0;
            }
        }
}
void gameplay()
{
	flag=0;
	bosslife=10;
	life=5;
	point=1;
	ll=0;

    setfillstyle(SOLID_FILL,BLACK);
	story();
    while (1)
    {
		delay(20);
		setcolor(BLACK);
		setfillstyle(SOLID_FILL,BLACK);
		readimagefile("bg.bmp",0,possy,1024,possy+1400);
		possy+=10;
		if (possy==0)
			possy= -700;
		 enemy();

		readimagefile("Fl.jpg",p-40,q-40,p+50,q+50);
        outintxy();
        settextstyle(BOLD_FONT,HORIZ_DIR,3);
        setcolor(WHITE);
        outtextxy(850, 100, "points:");
        settextstyle(BOLD_FONT,HORIZ_DIR,3);
        setcolor(WHITE);
        outtextxy(850, 150, "Lives : ");
		if (bossActive==1)
		{
			 settextstyle(10,HORIZ_DIR,3);
        setcolor(WHITE);
        outtextxy(850, 200, "\BOSS/ ");
		outtextxy(850, 230, "lives: ");
		}
        if(kbhit())
        {
            ch=getch();
            while(kbhit())
                getch();
            if(ch==52&&p>20)//left
            {
                p=p-20;
            }
            if (ch==32)//space
            {
				PlaySound("shoot.wav", 0, SND_FILENAME|SND_ASYNC);
                bulletActive = 1;
                bulletx=p; // buletx
                bullety=q; // bulety
                bulletWork();
            }
            if(ch==54&&p<1000)//right
            {

                p=p+20;

            }

            if (ch==27)
            {
                escapepress();
            }
        }

        else
        {
            if (bulletActive==1)
            {
                bulletWork();
            }
            if (flag<250)
			{
		         enemy();
			}
            else
			{

				bossActive=1;
                boss();
				enemy();
			}

        }
     }

}
void escapepress()
{

    readimagefile("gpause.jpg",300,280,750,460);
    int x,y;
    clearmouseclick(WM_LBUTTONDOWN);
    while(!ismouseclick(WM_LBUTTONDOWN));
    getmouseclick(WM_LBUTTONDOWN,x,y);
    if(x>=303 && y>= 406 && x<=413 && y<=456)

    {
        readimagefile("menunc.jpg",300,280,750,460);
		PlaySound("click.wav", 0, SND_FILENAME);
		delay(200);
        readimagefile("gpause.jpg",300,280,750,460);
        delay(500);
		cleardevice();
		readimagefile("loading.jpg",0,0,1024,700);
    setbkcolor(getpixel(400,617));
	 settextstyle(10, HORIZ_DIR, 4.5);
    outtextxy(580,600," Loading.        ");
    delay(200);
    outtextxy(580,600," Loading..       ");
    delay(200);
    outtextxy(580,600," Loading...      ");
	delay(500);
	outtextxy(580,600," Loading......       ");
		cleardevice();
        menu();
    }
    if(x>=465 && y>= 406 && x<=580 && y<=456)
    {
        readimagefile("restartnc.jpg",300,280,750,460);
		PlaySound("click.wav", 0, SND_FILENAME);
		delay(200);
        readimagefile("gpause.jpg",300,280,750,460);
        delay(500);
        cleardevice();
		flag=0;
        enemyEverything();
        gameplay();
    }
    if(x>=632 && y>= 406 && x<=744 && y<=456)
    {
        readimagefile("exitnc.jpg",300,280,750,460);
		PlaySound("click.wav", 0, SND_FILENAME);
		delay(200);
        readimagefile("gpause.jpg",300,280,750,460);
        delay(500);
        confexit();
    }

}
void gameover()
{
	PlaySound("start.wav", 0, SND_FILENAME|SND_ASYNC);
	if (ll>0)
			{
    scorelead();
	settextstyle(8, HORIZ_DIR, 3);
    setbkcolor(getpixel(40,610));

			outtextxy(20,610," P");
			delay(50);
			outtextxy(20,610," Pr");
			delay(50);
			outtextxy(20,610," Pre");
			delay(50);
			outtextxy(20,610," Pres");
			delay(50);
			outtextxy(20,610," Press a");
			delay(50);
			outtextxy(20,610," Press an");
			delay(50);
			outtextxy(20,610," Press any");
			delay(50);
			outtextxy(20,610," Press any k");
			delay(50);
			outtextxy(20,610," Press any ke");
			delay(50);
			outtextxy(20,610," Press any key");
			delay(50);
			outtextxy(20,610," Press any key t");
			delay(50);
			outtextxy(20,610," Press any key to");
			delay(50);
			outtextxy(20,610," Press any key to c");
			delay(50);
			outtextxy(20,610," Press any key to co");
			delay(50);
			outtextxy(20,610," Press any key to con");
			delay(50);
			outtextxy(20,610," Press any key to cont");
			delay(50);
			outtextxy(20,610," Press any key to conti");
			delay(50);
			outtextxy(20,610," Press any key to contin");
			delay(50);
			outtextxy(20,610," Press any key to continu");
			delay(50);
			outtextxy(20,610," Press any key to continue");
			delay(50);
			outtextxy(20,610," Press any key to continue");
			delay(50);
			outtextxy(20,610," Press any key to continue.");
			delay(50);
			outtextxy(20,610," Press any key to continue..");
			delay(50);
			outtextxy(20,610," Press any key to continue...");
			delay(50);
			outtextxy(20,610," Press any key to continue....!");
			delay(50);
	leaderboard();
   ll=0;
	}
			else
				{
					PlaySound("llaugh.wav", 0, SND_FILENAME|SND_ASYNC);
					readimagefile("gameover1.jpg",0,0,1024,700);
                    delay(5000);
				    readimagefile("loser.jpg",0,0,1024,700);
                    delay(5000);
			}
			llll++;
   exit(0);
   }
void start()
{
    int flag=0;
    int pp,qq,i;

    initwindow(1024,700,"Space Invasion");
    enemyEverything();
    PlaySound("start.wav", 0, SND_LOOP|SND_ASYNC);
	readimagefile("Untitled.jpg",0,0,1024,700);
	settextstyle(10, HORIZ_DIR, 2.5);
	setbkcolor(getpixel(780,650));
		outtextxy(780,650,"BY NAFIZ & MAYAZ");
    delay(100);
	settextstyle(8, HORIZ_DIR, 2.5);
    setbkcolor(getpixel(40,617));

			outtextxy(20,610," P");
			delay(50);
			outtextxy(20,610," Pr");
			delay(50);
			outtextxy(20,610," Pre");
			delay(50);
			outtextxy(20,610," Pres");
			delay(50);
			outtextxy(20,610," Press a");
			delay(50);
			outtextxy(20,610," Press an");
			delay(50);
			outtextxy(20,610," Press any");
			delay(50);
			outtextxy(20,610," Press any k");
			delay(50);
			outtextxy(20,610," Press any ke");
			delay(50);
			outtextxy(20,610," Press any key");
			delay(50);
			outtextxy(20,610," Press any key t");
			delay(50);
			outtextxy(20,610," Press any key to");
			delay(50);
			outtextxy(20,610," Press any key to c");
			delay(50);
			outtextxy(20,610," Press any key to co");
			delay(50);
			outtextxy(20,610," Press any key to con");
			delay(50);
			outtextxy(20,610," Press any key to cont");
			delay(50);
			outtextxy(20,610," Press any key to conti");
			delay(50);
			outtextxy(20,610," Press any key to contin");
			delay(50);
			outtextxy(20,610," Press any key to continu");
			delay(50);
			outtextxy(20,610," Press any key to continue");
			delay(50);
			outtextxy(20,610," Press any key to continue");
			delay(50);
			outtextxy(20,610," Press any key to continue.");
			delay(50);
			outtextxy(20,610," Press any key to continue..");
			delay(50);
			outtextxy(20,610," Press any key to continue...");
			delay(50);
			outtextxy(20,610," Press any key to continue....!");
			delay(50);
				while(1)
					 {
						 readimagefile("Untitled.jpg",0,0,1024,700);
						 settextstyle(10, HORIZ_DIR, 2.5);
                         setbkcolor(getpixel(780,650));
			             outtextxy(780,650,"BY NAFIZ & MAYAZ");
						 delay(900);
						 settextstyle(8, HORIZ_DIR, 2.5);
                         setbkcolor(getpixel(40,617));
						 outtextxy(20,610," Press any key to continue...!");
						 delay(900);
					if (kbhit())
					{
						    PlaySound(NULL, 0, 0);
							PlaySound("enter.wav", 0, SND_FILENAME);
							break;
					    }
				     }
				while(kbhit())
                        getch();
    cleardevice();
      readimagefile("loading.jpg",0,0,1024,700);
    setbkcolor(getpixel(400,617));
	 settextstyle(10, HORIZ_DIR, 4.5);
    outtextxy(580,600," Loading.        ");
    delay(200);
    outtextxy(580,600," Loading..       ");
    delay(200);
    outtextxy(580,600," Loading...      ");
	delay(500);
	outtextxy(580,600," Loading......       ");
    delay(400);

	while(kbhit())
		getch();
}
void menu()
{
	ll=0;
	PlaySound("start.wav", 0, SND_FILENAME|SND_ASYNC);
    while(1)
    {
		while(kbhit())
			getch();

        readimagefile("menu.jpg",0,0,1024,700);
        int x,y;
        clearmouseclick(WM_LBUTTONDOWN);
        while(!ismouseclick(WM_LBUTTONDOWN))
        {

            x= mousex();
            y= mousey();
            if(x>=158 && y>= 307 && x<=305 && y<=360)
            {
				readimagefile("ngnc.jpg",0,0,1024,700);
            }
		 if(x>=158 && y>= 364 && x<=306 && y<=410)
            {
				readimagefile("inc.jpg",0,0,1024,700);
            }
		 if(x>=158 && y>= 413 && x<=306 && y<=458)
            {

                readimagefile("lnc.jpg",0,0,1024,700);
            }
           if(x>=158 && y>= 462 && x<=306 && y<=518)
            {

                readimagefile("cnc.jpg",0,0,1024,700);
            }

            if(x>=158 && y>= 516 && x<=306 && y<=566)
            {
                readimagefile("enc.jpg",0,0,1024,700);
            }
			 if (kbhit())
			{
				ch = getch();
		    if (ch==27)
				{
					PlaySound("esc.wav", 0, SND_FILENAME);
					confexit();
			    }
			else
				{
					readimagefile("menu.jpg",0,0,1024,700);
					getch();
			}
        }
		}
        getmouseclick(WM_LBUTTONDOWN,x,y);
        if(x>=158 && y>= 307 && x<=305 && y<=360)
            {
            readimagefile("ngc.jpg",0,0,1024,700);
            delay(50);
			PlaySound("click.wav", 0, SND_FILENAME);
            readimagefile("menu.jpg",0,0,1024,700);
            delay(100);
            cleardevice();
			flag=0;
			bossActive=0;
			enemyEverything();
			loading();
            gameplay();
        }

        else if(x>=158 && y>= 413 && x<=306 && y<=458)
            {
            readimagefile("lc.jpg",0,0,1024,700);
            delay(50);
			PlaySound("click.wav", 0, SND_FILENAME);
            readimagefile("menu.jpg",0,0,1024,700);
            delay(100);
            point=0;
            leaderboard();
            mode=0;
            cleardevice();
        }
       else if(x>=158 && y>= 364 && x<=306 && y<=410)
            {
            readimagefile("ic.jpg",0,0,1024,700);
            delay(50);
			PlaySound("click.wav", 0, SND_FILENAME);
            readimagefile("menu.jpg",0,0,1024,700);
            instruction();
        }
        else if(x>=158 && y>= 516 && x<=306 && y<=566)
            {
            readimagefile("ec.jpg",0,0,1024,700);
            delay(50);
			PlaySound("click.wav", 0, SND_FILENAME);
            readimagefile("menu.jpg",0,0,1024,700);
            delay(100);
            confexit();
            return ;
        }
	    else if(x>=158 && y>= 462 && x<=306 && y<=518)
            {
            readimagefile("cc.jpg",0,0,1024,700);
			PlaySound("click.wav", 0, SND_FILENAME);
            delay(50);
            readimagefile("menu.jpg",0,0,1024,700);
            delay(100);
            credit();

        }
    }
}
void outintxy()
{
	setcolor(15);
    char digit_string[40];
	itoa(flag,digit_string,10);
    outtextxy(950,100, digit_string);
	itoa(life,digit_string,10);
    outtextxy(950,150, digit_string);
	if (bossActive==1)
		{
			itoa(bosslife,digit_string,10);
    outtextxy(950,230, digit_string);
	}
}
void bulletWork ()
{
    //int flag=0;
    int i;
    for(i=0; i<1; i++)
    {
        int pp = bulletx;
        int qq = bullety;
        if (qq<=5)
            bulletActive=0;
        if (bullety<myposy+45 && bulletx>myposx-39 && bulletx<myposx+27&&bossActive==0)
        {
			 flag=flag+10;
			 PlaySound("invaderkilled.wav", 0, SND_FILENAME|SND_ASYNC);
			  ll=flag;
               readimagefile("blast11.jpg",myposx-5,myposy-5,myposx+5,myposy+5);
			   delay(8);
				readimagefile("blast11.jpg",myposx-10,myposy-10,myposx+10,myposy+10);
				delay(8);
				readimagefile("blast11.jpg",myposx-15,myposy-15,myposx+15,myposy+15);
				delay(8);
				readimagefile("blast11.jpg",myposx-20,myposy-20,myposx+20,myposy+20);
				delay(8);
				readimagefile("blast11.jpg",myposx-25,myposy-25,myposx+25,myposy+25);
				delay(8);
				readimagefile("blast11.jpg",myposx-30,myposy-30,myposx+30,myposy+30);
				delay(15);


            bulletx=-1;
			bullety=-1;
			enemyEverything();
			return;
        }
		if (bullety<myposy+5 && bulletx>myposx-5 && bulletx<myposx+5&&bossActive==1)
        {
			 flag=flag+5;
               readimagefile("blast11.jpg",myposx-5,myposy-5,myposx+5,myposy+5);
			   delay(8);
				readimagefile("blast11.jpg",myposx-10,myposy-10,myposx+10,myposy+10);
				delay(8);
				readimagefile("blast11.jpg",myposx-15,myposy-15,myposx+15,myposy+15);
				delay(8);
				readimagefile("blast11.jpg",myposx-20,myposy-20,myposx+20,myposy+20);
				delay(8);
				readimagefile("blast11.jpg",myposx-25,myposy-25,myposx+25,myposy+25);
				delay(8);
				readimagefile("blast11.jpg",myposx-30,myposy-30,myposx+30,myposy+30);
				delay(15);


            bulletx=-1;
			bullety=-1;
			enemyEverything();
			return;
        }
        setcolor(14);
        rectangle(pp+3,qq-45,pp+6.5,qq-34);
        setfillstyle(SOLID_FILL, 14);
        floodfill(pp+5,qq-44,YELLOW);
        bullety=bullety-15;
		if (bullety<600)
			{
				bullety=bullety-17;
		if (bullety<500)
			{
				bullety=bullety-19;
				if (bullety<400)
			{
				bullety=bullety-19;
				if (bullety<300)
			{
				bullety=bullety-21;
				if (bullety<200)
			{

				}
				}
				}
		}
    }
}
}
void enemyEverything()
{
    //mycolor=rand()%15;
	if (bossActive==0)
	{
		myposx=rand()%830;
		 myposy=0;
    if (flag<=50)
        myspeed=6;
		if (flag<=100&&flag>50)
        myspeed=7;
		if (flag<=150&&flag>100)
        myspeed=8;
		if (flag<=220&&flag>150)
        myspeed=9;
		if (flag<=250&&flag>220)
        myspeed=10;
	}

	if (bossActive==1)
	{

		 myposx=bossposx;
		 myposy=bossposy+45;
	}

}
void enemy()
{
    int p_cordinate=p;
    int q_cordinate=q;
    int i;
    char ch;
    for(i=0; i<1; i++)
    {
		kp++;


             outintxy();
			if (bossActive==1 )
			{
				if (myposy>680)
				{
					int c = rand()%2;
				if (c==0)
					bossposx= p+ rand()%60;
				else
					bossposx= p- rand()%60;
				if (bossposx > 830)
					bossposx= 700;
				if (bossposx<=30)
					bossposx= 100;
				}

				setcolor(WHITE);
				setfillstyle(SOLID_FILL,WHITE);
				bar(myposx+11,myposy+13,myposx+16,myposy+35);
				myposy=myposy+17;
				if (kp%2==0)
				{
					 setcolor(WHITE);
				      setfillstyle(SOLID_FILL,WHITE);
				     bar(myposx+30,myposy,myposx+35,myposy+15);
					 setcolor(WHITE);
				     bar(myposx-8,myposy+10,myposx-3,myposy+25);
				     myposy=myposy+17;
				}
			}
		if (bossActive==0)
		{
        setcolor(mycolor);
        setfillstyle(SOLID_FILL,mycolor);
        fillellipse(myposx,myposy,32,9);
		mycolor=rand()%15;
		setcolor(mycolor);
		fillellipse(myposx,myposy-9,12,12);
        myposy+=myspeed;
		}
        if (myposy>=590)
            {
		if ((p_cordinate-50<myposx+30&&p_cordinate+40>myposx+25)||(p_cordinate-50<myposx+2&&p_cordinate+40>myposx-3)&&bossActive==1)
			{
				enemyEverything();
				PlaySound("imshot.wav", 0, SND_FILENAME|SND_ASYNC);
				setcolor(0);
				setfillstyle(SOLID_FILL,0);
				bar(p_cordinate-40,q_cordinate-40,p_cordinate+55,q_cordinate+55);
				readimagefile("blast.jpg",p_cordinate-5,q_cordinate-5,p_cordinate+5,q_cordinate+5);
				delay(10);
				readimagefile("blast.jpg",p_cordinate-10,q_cordinate-10,p_cordinate+10,q_cordinate+10);
				delay(10);
				readimagefile("blast.jpg",p_cordinate-15,q_cordinate-15,p_cordinate+15,q_cordinate+15);
				delay(10);
				readimagefile("blast.jpg",p_cordinate-20,q_cordinate-20,p_cordinate+20,q_cordinate+20);
				delay(10);
				readimagefile("blast.jpg",p_cordinate-25,q_cordinate-25,p_cordinate+25,q_cordinate+25);
				delay(8);
				readimagefile("blast.jpg",p_cordinate-30,q_cordinate-30,p_cordinate+30,q_cordinate+30);
				delay(8);
				readimagefile("blast.jpg",p_cordinate-35,q_cordinate-35,p_cordinate+35,q_cordinate+35);
				delay(8);
				readimagefile("blast.jpg",p_cordinate-32,q_cordinate-32,p_cordinate+32,q_cordinate+32);
				delay(8);
				readimagefile("blast.jpg",p_cordinate-40,q_cordinate-40,p_cordinate+40,q_cordinate+40);
				delay(8);
				readimagefile("blast.jpg",p_cordinate-42,q_cordinate-42,p_cordinate+42,q_cordinate+42);
				delay(7);
				readimagefile("blast.jpg",p_cordinate-45,q_cordinate-45,p_cordinate+45,q_cordinate+45);
				delay(8);
                life--;
                if (life==0)
                    {
						while(kbhit())
                          getch();

						setcolor(0);
				setfillstyle(SOLID_FILL,0);
				bar(p-40,q-40,p+50,q+50);
				readimagefile("blastt.jpg",p-10,q-10,p+20,q+20);
				delay(35);
				readimagefile("blastt.jpg",p-20,q-20,p+30,q+30);
				delay(35);
				readimagefile("blastt.jpg",p-30,q-30,p+40,q+40);
				delay(35);
				readimagefile("blastt.jpg",p-40,q-40,p+50,q+50);
				delay(35);
				readimagefile("blastt.jpg",p-50,q-50,p+60,q+60);
				delay(35);
				readimagefile("blastt.jpg",p-60,q-60,p+70,q+70);
				delay(35);
				readimagefile("blastt.jpg",p-65,q-65,p+75,q+75);
				delay(35);
				readimagefile("blastt.jpg",p-70,q-70,p+80,q+80);
				delay(2000);
				while(kbhit())
                          getch();
				PlaySound("llaugh.wav", 0, SND_FILENAME|SND_ASYNC);
						readimagefile("gameoverr.jpg",0,0,1024,700);
						delay(5000);
						readimagefile("gameover1.jpg",0,0,1024,700);
						delay(5000);
						gameover();
				    }
				}
				if (p_cordinate+50>myposx-25&&p_cordinate-40<myposx+15&&bossActive==0)
            {
				enemyEverything();
				PlaySound("imshot.wav", 0, SND_FILENAME|SND_ASYNC);
				setcolor(0);
				setfillstyle(SOLID_FILL,0);
				bar(p_cordinate-40,q_cordinate-40,p_cordinate+55,q_cordinate+55);
				readimagefile("blast.jpg",p_cordinate-5,q_cordinate-5,p_cordinate+5,q_cordinate+5);
				delay(10);
				readimagefile("blast.jpg",p_cordinate-10,q_cordinate-10,p_cordinate+10,q_cordinate+10);
				delay(10);
				readimagefile("blast.jpg",p_cordinate-15,q_cordinate-15,p_cordinate+15,q_cordinate+15);
				delay(10);
				readimagefile("blast.jpg",p_cordinate-20,q_cordinate-20,p_cordinate+20,q_cordinate+20);
				delay(10);
				readimagefile("blast.jpg",p_cordinate-25,q_cordinate-25,p_cordinate+25,q_cordinate+25);
				delay(8);
				readimagefile("blast.jpg",p_cordinate-30,q_cordinate-30,p_cordinate+30,q_cordinate+30);
				delay(8);
				readimagefile("blast.jpg",p_cordinate-35,q_cordinate-35,p_cordinate+35,q_cordinate+35);
				delay(8);
				readimagefile("blast.jpg",p_cordinate-40,q_cordinate-40,p_cordinate+40,q_cordinate+40);
				delay(8);
				readimagefile("blast.jpg",p_cordinate-45,q_cordinate-45,p_cordinate+45,q_cordinate+45);
				delay(8);
				readimagefile("blast.jpg",p_cordinate-50,q_cordinate-50,p_cordinate+50,q_cordinate+50);
				delay(7);
                life--;
                if (life==0)
                    {
						PlaySound("llaugh.wav", 0, SND_FILENAME|SND_ASYNC);
						readimagefile("gameoverr.jpg",0,0,1024,700);
						delay(5000);
						readimagefile("gameover1.jpg",0,0,1024,700);
						delay(5000);
						gameover();
				    }
            }
		}
    }
    if (myposy>=730)
    {
        blast=0;
        if (myposy>700 && bossActive==0)
        {
            blast=1;
            life--;
            if (life==0)
                {
					while(kbhit())
                getch();
					readimagefile("gameover1.jpg",0,0,1024,700);
					delay(2000);
					gameover();
			    }
        }
        enemyEverything();
    }
}

void scorelead()
{
    readimagefile("scoreboard.jpg",0,0,1024,700);
    char player[10]= {'\0'};
    char points1[50];
    int position=0,initial=0,i;
     //name_score number[3];
    FILE *in;
    in=fopen("lead.txt","r");
    for(i=0; i<3; i++)
    {
        fscanf(in,"%s %d",&number[i].name,&number[i].points);
    }
    fclose(in);
    int point=flag;
   // scanf("%d",&point);

    setbkcolor(BLACK);
    setcolor(WHITE);
    settextstyle(BOLD_FONT,HORIZ_DIR,4);
    outtextxy(350,200,"YOUR NAME: ");
    while(position<10)
    {
        if(kbhit)
        {
            player[position]=getch();
            if (player[position]==13)
            {
                break;
            }
            if(player[position]==8)
            {
                player[position]='\0';
                player[position-1]='\0';
                position=position-1;
                initial=1;
            }
            readimagefile("scoreboard.jpg",0,0,1024,700);
            outtextxy(350,200,"YOUR NAME: ");
            outtextxy(460,300,player);
            if(initial==0)
            {
                position=position+1;
            }
            else
            {
                initial=0;
            }
        }

    }
    sprintf(points1,"%d",point);
    outtextxy(350,400,"YOUR SCORE: ");
    outtextxy(350,500,points1);
    getch();
    for(i=0;i<3;i++)
    {
        printf("%s %d\n",number[i].name,number[i].points);
    }
    if(point>number[2].points)
    {
        if(point>number[1].points)
        {
            if(point>number[0].points)
            {
                in=fopen("score.txt","w");
                number[2].points=number[1].points;
                number[1].points=number[0].points;
                strcpy(number[2].name,number[1].name);
                strcpy(number[1].name,number[0].name);
                strcpy(number[0].name,player);
                number[0].points=point;
                for(i=0; i<3; i++)
                {
                    fprintf(in,"%s %d\n",number[i].name,number[i].points);
                }
                fclose(in);
                return;
            }
            else
            {
                in=fopen("score.txt","w");
                number[2].points=number[1].points;
                strcpy(number[2].name,number[1].name);
                strcpy(number[0].name,player);
                number[1].points=point;
                for(i=0; i<3; i++)
                {
                    fprintf(in,"%s %d\n",number[i].name,number[i].points);
                }
                fclose(in);
                return;
            }
        }
        else
        {
            in=fopen("score.txt","w");
            strcpy(number[0].name,player);
            number[2].points=point;
            for(i=0; i<3; i++)
            {
                fprintf(in,"%s %d\n",number[i].name,number[i].points);
            }
            fclose(in);
            return;
        }
        getch();
    }

    return;
}
void leaderboard()
{
	PlaySound("start.wav", 0, SND_FILENAME|SND_ASYNC);
	L=1;
	cleardevice();
    readimagefile("leaderboard.jpg",0,0,1024,700);
    char name1[10],name2[10],name3[10],score1[50],score2[50],score3[50];
    FILE *in;
	int i,h=0;

    setbkcolor(BLACK);
    setcolor(WHITE);
    settextstyle(BOLD_FONT ,HORIZ_DIR,4);
    outtextxy(180,100,"HIGH SCORES");
    in=fopen("lead.txt","r");
    for(i=0;i<3;i++)
    {
        fscanf(in,"%s %d",&number[i].name,&number[i].points);
    }
    for(i=0;i<3;i++)
    {
        outtextxy(150,200+h,number[i].name);
        sprintf(score1,"%d",number[i].points);
        outtextxy(320,200+h,score1);
        h=h+50;
    }
	         setcolor(15);
             settextstyle(8, HORIZ_DIR, 3);
			 delay(1000);
			 while(1)
	{
		  outtextxy(650,650,"PRESS ANY KEY TO GO BACK");

								 if (kbhit())
										{

			 if (ch==27)
			 {
				 confexit();
			 }
			 else

			 {


							 getch();
							 cleardevice();
				break;
			 }
								 }

	}
	cleardevice();
			readimagefile("loading.jpg",0,0,1024,700);
    setbkcolor(getpixel(400,617));
	 settextstyle(10, HORIZ_DIR, 4.5);
    outtextxy(580,600," Loading.        ");
    delay(200);
    outtextxy(580,600," Loading..       ");
    delay(200);
    outtextxy(580,600," Loading...      ");
	delay(500);
	outtextxy(580,600," Loading......       ");
            enemyEverything();
            menu();

}

int main()
{
    start();
    menu();
	return 0;
}
