#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *left;
    node *right;
    node *par;
};

struct BST
{
    node *create_node(int x)
    {
        node *a=(node *)malloc(sizeof(node));
        a->val=x;
        a->left=NULL;
        a->right=NULL;
        a->par=NULL;
        return a;
    }

    void insertion(node *root,node *a)
    {
        if(x <= root->val && root->left==NULL)
        {
            root->left=a;
            a->par=root;
            return;
        }
        else if(x > root->val && root->right==NULL)
        {
            root->right=a;
            a->par=root;
            return;
        }

        if(x <= root->val)
            insertion(root->left,a);
        else
            insertion(root->right,a);
    }

    void print_in(node *root)
    {
        if(root==NULL)
            return;
        print_in(root->left);
        cout<<root->val<<" ";
        print_in(root->right);
    }

    void print_po(node *root)
    {
        if(root==NULL)
            return;
        print_po(root->left);
        print_po(root->right);
        cout<<root->val<<" ";
    }

    int se_count(node *root,int x)
    {
        int a=0;
        if(root==NULL)
            return 0;
        if(root->val==x)
            a=1;
        int b=se_count(root->left,x);
        int c=se_count(root->right,x);

        return a+b+c;
    }

    node *search(node *root,int x)
    {
        if(x==root->val)
            return root;
        if(x<=root->val)
            return search(root->left,x);
        else
            return search(root->right,x);

    }

    void deletion(node *root,int x)
    {
        node *a=search(root,x);

        if(a->left==NULL && a->right==NULL)
        {
            a->par->left=NULL;
            free(a);
        }
    }
};

int main()
{
    int t,x,y,z;
    node *root=NULL;
    BST b;

    while(cin>>t && t)
    {
        if(t==1)
        {
            cin>>x;
            node *a=b.create_node(x);
            if(root==NULL)
                root=a;
            else
                b.insertion(root,a);
        }
        else if(t==2)
        {
            b.print_in(root);
        }
        else if(t==3)
        {
            b.print_po(root);
        }
        else if(t==4)
        {
            cin>>x;
            cout<<b.se_count(x)<<endl;
        }
        else if(t==5)
        {
            cin>>x;
            b.deletion(root,x);
        }
    }
    return 0;
}
