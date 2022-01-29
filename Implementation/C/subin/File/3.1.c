#include<stdio.h>

int main()
{
    FILE *fp;
    char filename[]="kamal_parvez.txt";

    fp=fopen(filename,"w");

    fprintf(fp,"I am a bolod. so I am happy.");

    fclose(fp);

    return 0;
}
