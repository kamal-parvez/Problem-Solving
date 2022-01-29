#include<stdio.h>

int main()
{
    char *file="chunni.png";

    int a=remove(file);


    if(a!=0)
    {
        perror("File removed failed");
        return 1;
    }

    printf("%s removed\n",file);


    return 0;
}
