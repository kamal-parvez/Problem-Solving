#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *prev;
    struct node *next;
}*font,*temp,*rear;

void creat(int a)
{
    temp=(struct node *)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->next=NULL;
    temp->value=a;
}
void insert_last(int a)
{
    if(font==NULL && rear==NULL)
    {
        creat(a);
        font=temp;
        rear=temp;
    }
    else
    {
        creat(a);
        struct node *p;
        p=rear;
        p->next=temp;

        rear=p->next;
    }
}
void display()
{

    if(font==NULL && rear==NULL)
    {
        printf("Empty list");
    }

    else
    {
        temp=font;
        while(temp!=rear)
        {
            printf("%d\n",temp->value);
            temp=temp->next;
        }
        printf("%d\n",rear->value);
    }
}
void delete_first()
{
    if(font==NULL && rear==NULL)printf("LinkList is empty\n");
    else
    {
        temp=font;
        free(temp);
        font=temp->next;
    }
}
main()
{
    int choice,a;
    printf("2.press to nq\n3.press to print the list\n4.press to delete first node\n");
    while(1)
    {
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 2:
            printf("Enter the element to nq\n");
            scanf("%d",&a);
            insert_last(a);
            break;
        case 3:
            display();
            break;
        case 4:
            delete_first();
            break;
        }
    }
}
