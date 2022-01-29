#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *fp=fopen("my_file.txt","r");

    if(fp==NULL)
    {
        perror("File is not available");
        return EXIT_FAILURE;
    }

    int ch=fgetc(fp);
    printf("%c\n",(char)ch);

    ch=fgetc(fp);
    printf("%c\n",(char)ch);

    fseek(fp,sizeof(char)*3,SEEK_CUR);

    ch=fgetc(fp);
    printf("%c\n",(char)ch);


    return 0;
}
