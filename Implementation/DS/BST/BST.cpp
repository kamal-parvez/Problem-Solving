#include<iostream>
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
    node* create_node(int x)
    {
        node *a=(node *)malloc(sizeof(node));
        a->val=x;
        a->left=NULL;
        a->right=NULL;
        a->par=NULL;
        return a;
    }

    void insert_leaf(node *root,node *a)
    {
        if(root->left==NULL && a->val <= root->val)
        {
            root->left=a;
            a->par=root;
            return;
        }

        else if(root->right==NULL && a->val > root->val)
        {
            root->right=a;
            a->par=root;
            return;
        }

        if(a->val > root->val)
        {
            insert_leaf(root->right,a);
        }

        else
        {
            insert_leaf(root->left,a);
        }

    }

    void print_in(node *root)
    {
        if(root==NULL)
        {
            return;
        }

        print_in(root->left);
        cout<<root->val<<" ";
        print_in(root->right);

    }

    void print_post(node *root)
    {
        if(root==NULL)
            return;
        print_post(root->left);
        print_post(root->right);
        cout<<root->val<<" ";
    }
    int search_cnt(node *root,int x)
    {
        int a=0;
        if(root==NULL)
            return 0;
        if(root->val ==x)
            a=1;
        int b=search_cnt(root->left,x);
        int c=search_cnt(root->right,x);
        return a+b+c;
    }

    node *search(node *root,int x)
    {
        if(x==root->val)
            return root;
        if(x<root->val)
            return search(root->left,x);
        else
            return search(root->right,x);
    }


    node* del_root(node *root)
    {
        if(root->left == NULL && root->right==NULL)
        {
            root=NULL;
            return root;
        }
        else if(root->left ==NULL)
        {
           return root->right;
        }
        else if(root->right ==NULL)
        {
           return root->left;
        }
        else
        {
            node *cur;
            cur = root->right;

            while(cur->left!=NULL)
            {
                cur=cur->left;
            }
            root->val=cur->val;

            if(cur->right==NULL)
            {
                if(cur->par==root)
                {
                    root->right=NULL;
                }
                else
                     cur->par->left=NULL;
                 free(cur);
            }
            else
            {
                cur->par->left=cur->right;
                cur->right->par=cur->par;
                free(cur);
            }
            //cout<<root->val<<endl;
            return root;
        }

    }

    void del(node *root,int x)
    {
        node *tem=search(root,x);
        if(tem->left==NULL && tem->right==NULL)
        {
            if(tem->par==NULL)
                tem=NULL;
            else if(tem->val <= tem->par->val)
                tem->par->left=NULL;
           // tem->par=NULL;
           else
                tem->par->right=NULL;
            free(tem);
        }

        else if(tem->left==NULL)
        {
            if(tem->val <= tem->par->val)
            {
                tem->par->left=tem->right;
                tem->right->par=tem->par;
            }
            else
            {
                tem->par->right=tem->right;
                tem->right->par=tem->par;
            }
            free(tem);
        }

        else if(tem->right==NULL)
        {
            if(tem->val <= tem->par->val)
            {
                tem->par->left=tem->left;
                tem->left->par=tem->par;
            }
            else
            {
                tem->par->right=tem->left;
                tem->left->par=tem->par;
            }
            free(tem);
        }
        else
        {
            node *cur;
            cur = tem->right;

            while(cur->left!=NULL)
            {
                cur=cur->left;
            }
            tem->val=cur->val;

            if(cur->right==NULL)
            {
                 cur->par->left=NULL;
                 cur->par=NULL;
                // free(cur);
            }
            else
            {
                cur->par->left=cur->right;
                cur->right->par=cur->par;
                //free(cur);
            }

        }
    }
};



int main()
{
    BST p;
    node *root;
    root=NULL;
    int t;
    int x,y,z;
    while(1)
    {
        cin>>t;
        if(t==1)
        {
            cin>>x;
            node *a=p.create_node(x);
            if(root==NULL)
            {
                root=a;
            }
           else
                p.insert_leaf(root,a);
        }
        else if(t==2)
        {
            if(root==NULL)
                cout<<"Empty BST"<<endl;
            else
            {
                p.print_in(root);
                cout<<endl;
            }
        }
        else if(t==3)
        {
            if(root==NULL)
                cout<<"Empty BST"<<endl;
            else
            {
                p.print_post(root);
                cout<<endl;
            }
        }

        else if(t==4)
        {
            cin>>y;
           cout<< p.search_cnt(root,y)<<endl;
        }
        else if(t==5)
        {
            cin>>z;
            if(z==root->val)
            {
                root=p.del_root(root);
            }
           else
                p.del(root,z);
        }

        /*else if(t==6)
        {
            cin>>y;
            node *po=p.search(root,y);
            cout<<po->right->val<<endl;
        }*/
    }
    return 0;
}


