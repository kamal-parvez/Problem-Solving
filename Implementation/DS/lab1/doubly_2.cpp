#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node* next;
    struct node* prev;
};
struct node* head;
struct node* GetNewnode(int x)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->value = x;
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
}
void insert_first(int x)
{
    struct node* newnode = GetNewnode(x);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}
void insert_last(int x)
{
    struct node* temp = head;
    struct node* newnode = GetNewnode(x);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
}
void Print()
{
    struct node* temp = head;

    while(temp != NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
void reverse_print()
{
    struct node* temp = head;
    if(temp == NULL) return;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }


    while(temp != NULL)
    {
        printf("%d ",temp->value);
        temp = temp->prev;
    }
    puts(" ");
}

void delete_last()
{
    struct node* temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp-> next;
    }


    temp->next=NULL;
}

void delete_first()
{
    struct node* temp = head;

    temp = temp->next;
    temp->prev = NULL;
    head = temp;
}

void searchfirst(int x)
{
    int c;
    c=0;
    struct node* temp = head;
    while(temp->value!=x)
    {
        temp = temp->next;
        c++;

    }
    printf("Found at %d\n",c+1);

}
void searchlast(int x)
{
    int c;
    c = 0;
    struct node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    while(temp->value!=x)
    {
        temp = temp-> prev;
        c++;
    }
    printf("Found at %d",c+1);

}

int main()
{

    int n,a;
    head = NULL;

    while(n!=0)
    {
        scanf("%d",&n);
        if(n==1) Print();
        else if(n==2) reverse_print();
        else if(n==3)
        {
            scanf("%d",&a);
            insert_first(a);
        }
        else if(n==4)
        {
            scanf("%d",&a);
            insert_last(a);
        }

        else if(n==5)
        {
            scanf("%d",&a);
            searchfirst(a);

        }
        else if(n==6)
        {
            scanf("%d",&a);
            searchlast(a);
        }
        else if(n==7)
        {
            delete_first();

        }
        else if(n==8)
            delete_last();
    }

    return 0;
}

