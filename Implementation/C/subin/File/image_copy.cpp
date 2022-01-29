#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *fp_in,*fp_out;

    char *in="C:\\Users\\User\\Pictures\\special\\kj.jpg";
    char *out="C:\\Users\\User\\Pictures\\special\\kp.jpg";

    int ch;

    fp_in=fopen(in,"rb");

    if(fp_in==NULL)
    {
        perror("Failed to open File");
        return EXIT_FAILURE;
    }

    fp_out=fopen(out,"wb");

    while(1)
    {
        ch=fgetc(fp_in);

        if(ch==EOF)
            break;

        fputc(ch,fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);

    return 0;

}
