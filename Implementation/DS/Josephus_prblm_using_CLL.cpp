//48
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    node *next;
};

struct CLL
{
    node *head;
    node *tail;
    CLL()
    {
        head=NULL;
        tail=NULL;
    }

    void insert_last(int x)
    {
        node *tem=(node *)malloc(sizeof(node));
        tem->val=x;
        tem->next=NULL;

        if(tail==NULL)
        {
            tail=tem;
            head=tem;
        }

        else
        {
            tail->next=tem;
            tail=tem;
            tail->next=head;
        }

    }

    int delete_n(int k)
    {
        while(head!=tail)
        {
            int i;
            for(i=1;i<k;i++)
            {
                tail=head;
                head=head->next;
            }

            head=head->next;
            tail->next=head;
        }
        return head->val;
    }




};

int main()
{
    int x,t;
    int k,i,n;
    scanf("%d %d",&n,&k);
    struct CLL c;

    for(i=1;i<=n;i++)
    {
        c.insert_last(i);
    }

    x=c.delete_n(k);
    printf("%d\n",x);

    return 0;
}


