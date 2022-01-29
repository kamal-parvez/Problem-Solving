#include<stdio.h>

struct stack
{
    int stk[1000];
    int top;
    stack()
    {
        top=0;
    }

    void push(int x)
    {
        stk[top]=x;
        top++;
    }

    void pop()
    {
        if(top==0)
        {
            printf("Stack is Empty and Deletion is not possible\n");
        }
        else
            top--;
    }

    void p()
    {
        int k=top;
        if(k==0)
        {
            printf("Empty stack");
        }
        else
        {
            while(k!=0)
            {
                k--;
                printf("%d ",stk[k]);
            }
        }
        printf("\n");
    }
};


struct queue
{
    int qu[1000];
    int f;
    int r;

    queue()
    {
        f=0;
        r=-1;
    }

    void enq(int x)
    {
        r++;
        qu[r]=x;
    }

    void deq()
    {
        if(r==-1 || f>r)
        {
            printf("Queue is empty and dequeuing is not possible\n");
        }
        else
            f++;
    }

    void p()
    {
        int j=f;
        if(r==-1)
        {
            printf("Empty queue\n");
        }
        else
        {
            while(j<=r)
            {
                printf("%d ",qu[j]);
                j++;
            }
            printf("\n");
        }
    }
};

int main()
{
    int t,x;
    struct stack s;
    struct queue q;

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

        else if(t==3)
        {
            s.p();
        }

        else if(t==4)
        {
            scanf("%d",&x);
            q.enq(x);
        }
        else if(t==5)
        {
            q.deq();
        }
        else if(t==6)
        {
            q.p();
        }
    }
    return 0;
}
