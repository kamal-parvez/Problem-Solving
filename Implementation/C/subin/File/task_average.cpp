#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;


int main()
{
    FILE *fpm,*fpc,*fpp,*fpa;

    char *math="math.txt";
    char *chem="chemistry.txt";
    char *phy="physics.txt";
    char *avg="average.txt";

    fpm=fopen(math,"r");
    fpc=fopen(chem,"r");
    fpp=fopen(phy,"r");
    fpa=fopen(avg,"w");

    char str[20];
    int a,b1,b2,b3;
    double av;

    int i=1;

    while(i<11)
    {
        fgets(str,20,fpm);
        sscanf(str,"%d %d",&a,&b1);

        fgets(str,20,fpc);
        sscanf(str,"%d %d",&a,&b2);

        fgets(str,20,fpp);
        sscanf(str,"%d %d",&a,&b3);

        av=(b1+b2+b3)/3.0;

        fprintf(fpa,"%d %lf\n",a,av);

        cout<<a<<" "<<av<<endl;

        i++;

    }

    fclose(fpm);
    fclose(fpc);
    fclose(fpp);
    fclose(fpa);

    return 0;
}
