#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp_in,*fp_out;

    char *in="shak.jpeg";
    char *out="chunni.png";

    int ch,x;

    fp_in=fopen(in,"rb");

    if(fp_in==NULL)
    {
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fp_out=fopen(out,"wb");

    while(1)
    {
        ch=fgetc(fp_in);
        if(ch==EOF)
            break;

        x=fputc(ch,fp_out);

        //printf("%c %d\n",(char)ch,x);
    }

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
