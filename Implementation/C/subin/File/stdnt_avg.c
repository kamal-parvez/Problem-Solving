#include<stdio.h>

/*struct rolltype
{
    int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
}math,chem,physics,avg;
;*/

struct sub
{
    char line[10][20];
}math,chem,physics,avg;

int main()
{
    FILE *fp_c,*fp_m,*fp_p,*fp_a;
    char *fm="math.txt";
    char *fc="chemistry.txt";
    char *fp="physics.txt";
    char *fa="average.txt";

    fp_m=fopen(fm,"r");
    fp_c=fopen(fc,"r");
    fp_p=fopen(fp,"r");
    fp_a=fopen(fa,"w");

    int i;
     int roll[10],p[10],c[10],m[10];
     double a[10];

    //char line_c[20],line_m[20],line_p[20];


    for(i=0;i<10;i++)
    {
        fgets(chem.line[i],20,fp_c);
    }

    for(i=0;i<10;i++)
    {
        fgets(math.line[i],20,fp_m);
    }

    for(i=0;i<10;i++)
    {
        fgets(physics.line[i],20,fp_p);
    }



    for(i=0;i<10;i++)
    {
        sscanf(math.line[i],"%d %d",&roll[i],&m[i]);
        sscanf(chem.line[i],"%d %d",&roll[i],&c[i]);
        sscanf(physics.line[i],"%d %d",&roll[i],&p[i]);
    }

    for(i=0;i<10;i++)
    {
        a[i]=(m[i]+c[i]+p[i])/3.0;
    }

    for(i=0;i<10;i++)
    {
        fprintf(fp_a,"%d  %.2lf\n",roll[i],a[i]);

    }


    return 0;
}
