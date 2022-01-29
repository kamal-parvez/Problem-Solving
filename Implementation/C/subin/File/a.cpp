#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    FILE *fp;

    char fname []="in.txt";
    fp=fopen(fname,"w");

    int a=500,b=600,c,d;

    fprintf(fp,"%d %d",a,b);
    //fprintf(fp,b);


    fclose(fp);

    fp=fopen("in.txt","r");

    char str[100];

    int x=fscanf(fp,"%d %d",&c,&d);

    cout<<c<<" "<<d<<" "<<c+d<<endl;
    cout<<x<<endl;

    fclose(fp);

    return 0;
}
