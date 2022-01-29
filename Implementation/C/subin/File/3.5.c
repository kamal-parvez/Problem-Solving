#include<stdio.h>

int main()
{
    FILE *fp_in,*fp_out;
    char *input_file="in.txt";
    char *output_file="out.txt";
    char line[100];
    int a,b,sum;

    fp_in=fopen(input_file,"r");
    fp_out=fopen(output_file,"w");

    fgets(line,100,fp_in);
    printf("Line : %s\n",line);

    sscanf(line,"%d %d",&a,&b);

    sum=a+b;

    printf("%d + %d = %d\n",a,b,sum);
    fprintf(fp_out,"%d\n",sum);

    fclose(fp_in);
    fclose(fp_out);
    return 0;

}
