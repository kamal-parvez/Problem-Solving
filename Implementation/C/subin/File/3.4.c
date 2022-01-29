#include<stdio.h>

int main()
{
    FILE *fp_in, *fp_out;
    char *input_file="in.txt";
    char *output_file="out.txt";

    fp_in=fopen(input_file,"r");
    fp_out=fopen(output_file,"w");

    int a,b,sum;

    fscanf(fp_in,"%d",&a);
    fscanf(fp_in,"%d",&b);
    sum=a+b;
    fprintf(fp_out,"%d",sum);
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
