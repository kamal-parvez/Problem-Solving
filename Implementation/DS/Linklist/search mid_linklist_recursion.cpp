#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *next;
    node *pre;
};

struct linklist
{
    struct node *head;
    linklist()
    {
        head=(node *)malloc(sizeof(node));
        head->val=10;
        head->next=NULL;
        head->pre=NULL;
    }

    node *search_mid()
    {
        int cnt=1;
        struct node *mid;
        if(head->next==NULL)
        {
            mid=head;
        }

        else
        {
            node *temp;
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
                cnt++;
            }
            int i;
            for(i=0;i<cnt/2;i++)
                temp=temp->pre;
            mid=temp;
        }
        return mid;
    }

    void insert_node(node *mid,int x)
    {
        int j=1;
       while(j<=2)
       {
            node *a=(node *)malloc(sizeof(node));
        a->val=j*x;
        a->next=NULL;
        a->pre=NULL;

        if(mid==head)
        {
            head->pre=a;
            a->next=head;
            head=a;
            mid=head;
        }
        else
        {
            mid->pre->next=a;
            a->pre=mid->pre;
            a->next=mid;
            mid->pre=a;
            mid=a;
        }
        j++;
       }

    }

    void p()
    {
        node *temp;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};

int main()
{
    linklist l;
    int t;
    while(1)
    {
        struct node *s=l.search_mid();

        cin>>t;
         cout<<s->val<<endl;
        l.insert_node(s,t);
       l.p();
    }
    return 0;
}
