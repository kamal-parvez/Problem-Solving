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

    void insert_first(int x)
    {
        node *tem=(node *)malloc(sizeof(node));
        tem->val=x;
        tem->next=head;
        head=tem;
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
            printf("Empty Link List and deletion is not possible\n");
        }
        else
        {
            head=head->next;
        }
    }

    void delete_last()
    {
        if(head==NULL)
        {
            printf("Empty Link List and deletion is not possible\n");
        }

        else if(head->next==NULL)
        {
            head=NULL;
        }
        else
        {
            node *cur;
            cur=head;
            while(cur->next->next!=NULL)
            {
                cur=cur->next;
            }
            cur->next=NULL;
        }
    }


    void p()
    {

        if(head==NULL)
        {
            printf("Empty Link List\n");
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
};

int main()
{
    int x,t;
    struct linklist l;

    while(scanf("%d",&t)==1 && t!=0)
    {
        if(t==5)
        {
            l.p();
        }

        else if(t==1)
        {
            scanf("%d",&x);
            l.insert_first(x);
        }

        else if(t==2)
        {
            scanf("%d",&x);
            l.insert_last(x);
        }

        else if(t==3)
        {
            l.delete_first();
        }
        else if(t==4)
        {
            l.delete_last();
        }

    }

    return 0;
}
