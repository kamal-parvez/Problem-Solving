#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *left;
    node *right;
};

struct BST
{
    node *root;
    BST()
    {
        root=NULL;
    }

    node *create_node(int x)
    {
        node *temp=(node *)malloc(sizeof(node));
        temp->val=x;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
    }

    void insert(node* p,node* a)
    {
        if(p->left==NULL && a->val <= p->val)
        {
            p->left=a;
            return;
        }
        else if(p->right==NULL && a->val > p->val)
        {
            p->right=a;
            return;
        }
        else if(a->val <= p->val)
            insert(p->left,a);
        else
            insert(p->right,a);
    }

    void print_inorder(node *p)
    {
        if(p==NULL)
            return;
        print_inorder(p->left);
        cout<<p->val<<" ";
        print_inorder(p->right);
    }

    node *deletion(node *p ,int x)
    {
        if(p==NULL)
        {
            cout<<"Not Found"<<endl;
            return p;
        }
        else if(x < p->val)
        {
            p->left = deletion(p->left,x);
        }
        else if(x>p->val)
        {
            p->right = deletion(p->right,x);
        }
        else
        {
            if(p->left==NULL && p->right==NULL)
            {
                p=NULL;
            }
            else if(p->left==NULL)
            {
                p=p->right;
            }
            else if(p->right==NULL)
            {
                p=p->left;
            }
            else
            {
                node *temp=p->right;

                while(temp->left!=NULL)
                {
                    temp=temp->left;
                }
                p->val=temp->val;
                p->right=deletion(p->right,temp->val);
            }
            return p;
        }
    }
};

int main()
{
    int t,x,i;
    BST b;

    while(cin>>t && t!=0)
    {
        if(t==1)
        {
            cin>>x;
            node *a=b.create_node(x);
            if(b.root==NULL)
                b.root=a;
            else
                b.insert(b.root,a);
        }

        else if(t==2)
        {
            cin>>x;
            b.root=b.deletion(b.root,x);
        }

        else if(t==3)
        {
            if(b.root==NULL)
                cout<<"No element"<<endl;
            else
            {
                b.print_inorder(b.root);
                cout<<endl;
            }
        }
    }
}
