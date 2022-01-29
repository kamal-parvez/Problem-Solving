#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *fp=fopen("chunni.png","rb");

    if(fp==NULL)
    {
        perror("File is not available");
        return EXIT_FAILURE;
    }


    fseek(fp,0,SEEK_END);

    printf("Size : %ld bytes\n",ftell(fp));
    printf("Size : %ld killobytes\n",ftell(fp)/1024);

    fclose(fp);

    return 0;
}

