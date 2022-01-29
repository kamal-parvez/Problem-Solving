#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    FILE *fp;

    char filename[]="bristy.txt";

    fp=fopen(filename,"w");

    int a=fprintf(fp,"this is rude");

    cout<<a<<endl;

    fclose(fp);

    fp=fopen(filename,"w");

    fprintf(fp,"PARBO NA");

    int c=fclose(fp);


    cout<<c<<endl;

    return 0;
}
