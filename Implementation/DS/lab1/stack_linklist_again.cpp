#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    node *next;
};

struct stack
{
    node *top;
    stack()
    {
        top=NULL;
    }

    void push(int x)
    {
        node *tem=(node *)malloc(sizeof(node));
        tem->val=x;
        tem->next=top;
        top=tem;
    }

    void pop()
    {
        top=top->next;
    }

    void p()
    {
        node *cur;
        cur=top;
        if(top==NULL)
        {
            printf("Empty stack");
        }
        else
        {
            while(cur!=NULL)
            {
                printf("%d ",cur->val);
                cur=cur->next;
            }
        }
        puts("");
    }
};

int main()
{
    struct stack s;
    int t,x;
    while(scanf("%d",&t)==1 && t)
    {
        if(t==1)
        {
            scanf("%d",&x);
            s.push(x);
        }
        else if(t==2)
        {
            s.pop();
        }
        else
        {
            s.p();
        }
    }
    return 0;
}
