#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char val;
     node *next;
};

int main()
{
    node *head=(node *)malloc(sizeof(node));
    char str[202];
    gets(str);
    //head->val=str;
    strcpy(*head,str);
    printf("%s",*head);

    return 0;
}
