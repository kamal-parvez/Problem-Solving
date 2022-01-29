#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    node *next;
    node *pre;
};

struct doubly
{
    node *head;
    node *tail;

    doubly()
    {
        head=NULL;
        tail=NULL;
    }

    node* create_node(int x)
    {
        node *tem=(node *)malloc(sizeof(node));
        tem->val=x;
        tem->next=NULL;
        tem->pre=NULL;
        return tem;
    }

    void insert_fast(int x)
    {
        node *tem=create_node(x);

        if(head==NULL)
        {
            head=tem;
            tail=tem;
        }
        else
        {
            head->pre=tem;
            tem->next=head;
            head=tem;
        }
    }

    void insert_last(int x)
    {
        node *tem=create_node(x);

        if(head==NULL)
        {
            head=tem;
            tail=tem;
        }

        else
        {
            tem->pre=tail;
            tail->next=tem;
            tail=tem;
        }
    }

    void delete_first()
    {
        if(head==NULL)
        {
            printf("Link list is empty and deletion is not possible\n");
        }
        else if(head==tail)
        {
            head=NULL;
            tail=NULL;
        }
        else
        {

            head=head->next;
            head->pre=NULL;

        }
    }

    void delete_last()
    {
        if(head==NULL)
        {
            printf("Empty Link List and so Deletion is not possible\n");
        }

        else if(head==tail)
        {
            head=NULL;
            tail=NULL;
        }

        else
        {
            tail=tail->pre;
            tail->next=NULL;

        }
    }



    void p()
    {
        if(head==NULL)
        {
            printf("Empty link list\n");
        }
        else
        {
            node *cur;
            cur=head;

            while(cur!=NULL)
            {
                printf("%d ",cur->val);
                cur=cur->next;
            }
            puts("");
        }
    }
};

int main()
{
    struct doubly d;

    int t,x,i;

    while( scanf("%d",&t)==1 && t)
    {
        if(t==1)
        {
            d.p();
        }

        else if(t==2)
        {
            scanf("%d",&x);
            d.insert_fast(x);
        }

        else if(t==3)
        {
            scanf("%d",&x);
            d.insert_last(x);
        }

        else if(t==4)
        {
            d.delete_first();
        }

        else if(t==5)
        {
            d.delete_last();
        }
    }

    return 0;
}
