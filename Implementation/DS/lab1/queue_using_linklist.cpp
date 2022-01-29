#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    node *next;
};

struct linklist
{
    node *head;
    linklist()
    {
        head=NULL;
    }

    void insert_last(int x)
    {
        node *tem=(node *)malloc(sizeof(node));
        tem->val=x;
        tem->next=NULL;

        node *cur;
        cur=head;

        if(head==NULL)
        {
            head=tem;
        }
        else
        {
            while(cur->next!=NULL)
            {
                cur=cur->next;
            }

            cur->next=tem;
        }
    }

    void delete_first()
    {
        if(head==NULL)
        {
            printf("Empty Queue and Dequeuing is not possible\n");
        }
        else
        {
            head=head->next;
        }
    }

    void p()
    {

        if(head==NULL)
        {
            printf("Empty Queue\n");
        }
        else
        {
            node* cur;
            cur=head;
            while(cur!=NULL)
            {
                printf("%d ",cur->val);
                cur=cur->next;
            }
        }
        printf("\n");
    }
}l;

struct queue
{
    void enq(int x)
    {
        l.insert_last(x);
    }

    void deq()
    {
        l.delete_first();
    }
    void pr()
    {
        l.p();
    }
};

int main()
{
    int x,t;
   // struct linklist l;
   queue q;

    while(scanf("%d",&t)==1 && t!=0)
    {
        if(t==5)
        {
            q.pr();
        }

        else if(t==1)
        {
            scanf("%d",&x);
            q.enq(x);
        }

        else if(t==2)
        {
            q.deq();
        }

    }

    return 0;
}

