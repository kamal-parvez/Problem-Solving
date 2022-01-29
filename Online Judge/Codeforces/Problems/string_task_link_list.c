#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct str
{
    char val;
    struct str next;
};

int main()
{
    char *head;
    head=(char *)malloc(sizeof(str));
    gets(head);

    printf("%s",head);

    return 0;
}
