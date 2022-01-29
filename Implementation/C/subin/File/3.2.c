#include<stdio.h>

int main()
{
    FILE *fp;
    char filename[]="Shakchunni.txt";

    fp=fopen(filename,"w");
    fprintf(fp,"Kashamry Jannat");
    fclose(fp);

    fp=fopen(filename,"a");
    fprintf(fp," shakchunni");
    fclose(fp);

    fp=fopen(filename,"r");
    char a[100];
    fscanf(fp,"%s",a);
    printf("%s",a);

    return 0;
}
