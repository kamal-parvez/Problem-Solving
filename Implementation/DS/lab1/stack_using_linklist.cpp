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
}l;

struct stack
{
    void push(int x)
    {
        l.insert_first(x);
    }

    void pop()
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
   struct stack s;

    while(scanf("%d",&t)==1 && t!=0)
    {
        if(t==5)
        {
            s.pr();
        }

        else if(t==1)
        {
            scanf("%d",&x);
           // l.insert_first(x);
           s.push(x);
        }

        else if(t==2)
        {
           // l.delete_first();
           s.pop();
        }

    }

    return 0;
}

