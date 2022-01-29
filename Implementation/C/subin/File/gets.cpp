#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
    FILE *fp_in;
    FILE *fp_out;

    char *in="input.txt";
    char *out="output.txt";

    char line[100];

    fp_in=fopen(in,"r");
    fp_out=fopen(out,"w");

    char *str=fgets(line,100,fp_in);

    cout<<line<<endl;

    int num1,num2,sum;

    int a=sscanf(line,"%d %d",&num1,&num2);

    sum=num1+num2;

    cout<<num1<<" "<<num2<<" "<<sum<<endl;


    fprintf(fp_out,"%d\n",sum);

    fclose(fp_in);
    fclose(fp_out);

    cout<<str<<endl;
    cout<<a<<endl;

    return 0;

}
