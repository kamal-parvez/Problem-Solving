#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    node *next;
};

void print_link_list(node *p)
{
    int flag=0;
    while(p!=NULL)
    {
        printf("%d ",p->val);
        p=p->next;
        flag=1;
    }
    puts("");
    if(flag!=1)
    {
        printf("Empty Link List\n");
    }
}
void insert_last(node *p,int x)
{
    node *a=(node *)malloc(sizeof(node));
    a->val=x;
    a->next=NULL;
    while(p->next !=NULL)
    {
        p=p->next;
    }
    p->next=a;
}

void insert_after(node *p,int x,int y)
{
    node *a=(node *)malloc(sizeof(node));
     a->val=x;
     a->next=NULL;
     while(p->val!=y)
     {
        p=p->next;
     }
     a->next=p->next;
     p->next=a;
}

void insert_before(node *p,int x,int y)
{
    node *a=(node *)malloc(sizeof(node));
    a->val=x;
    a->next=NULL;
    while(p->next->val !=y)
    {
        p=p->next;
    }
    a->next=p->next;
    p->next=a;
}
void delete_node(node *p,int x)
{
    while(p->next->val!=x)
    {
        p=p->next;
    }
    p->next=p->next->next;
}

int main()
{
    node *head=NULL;
    int t,x,y;
    while(scanf("%d",&t)==1)
    {
        if(t==1)
            print_link_list(head);

        else if(t==2)
        {
            scanf("%d",&x);
            if(head==NULL)
            {
                head=(node *)malloc(sizeof(node));
                head->val=x;
                head->next=NULL;
            }
            else
                insert_last(head,x);

        }
        else if(t==3)
        {
            scanf("%d %d",&x,&y);
            insert_after(head,x,y);
        }
         else if(t==4)
        {
            scanf("%d %d",&x,&y);
            insert_before(head,x,y);
        }
         else if(t==5)
        {
            scanf("%d",&x);
            delete_node(head,x);
        }
    }
    return 0;
}
