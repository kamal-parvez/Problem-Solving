#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *next;
};


void add(struct node *p,int x)
{
    struct node* a;
    a=(struct node*)malloc(sizeof(node));
    a->val=x;
    a->next=NULL;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=a;
}

void insert_before(node *p,int v,int b)
{
    struct node *a=(node *)malloc(sizeof(node));
    a->val=v;
    a->next=NULL;
    while(p->next->val!=b)
    {
        p=p->next;
    }
    a->next=p->next;
    p->next=a;
}

void insert_after(node *p,int v,int b)
{
    node *a=(node *)malloc(sizeof(node));
    a->val=v;
    a->next=NULL;
    while(p->val!=b)
    {
        p=p->next;
    }
    a->next=p->next;
    p->next=a;
}
void delete_node(node *p,int v)
{
    while(p->next->val!=v)
    {
        p=p->next;
    }
    p->next=p->next->next;
}

void printlist(struct node *p)
{
    int flag=0;
    while(p!=NULL)
    {
        printf("%d ",p->val);
        p=p->next;
        flag=1;
    }
    if(!flag)

        printf("There is many ghorar dim");
    printf("\n");
}

int main()
{
    struct node *head=NULL;

    int x,y,t;

    while(scanf("%d",&t)==1)
    {
        if(t==1)
        {
            printlist(head);
        }

        else if(t==2)
        {
            scanf("%d",&x);
            if(head==NULL)
            {
                head=(struct node*)malloc(sizeof(node));
                head->val=x;
                head->next=NULL;
            }
            else{
                add(head,x);
            }
        }
        else if(t==3)
        {
            scanf("%d %d",&x,&y);
            insert_before(head,x,y);
        }
        else if(t==4)
        {
            scanf("%d %d",&x,&y);
            insert_after(head,x,y);
        }
        else if(t==5)
        {
            scanf("%d",&x);
            delete_node(head,x);
        }
    }
    return 0;

}
