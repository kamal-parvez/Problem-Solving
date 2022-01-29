#include<bits/stdc++.h>
#include<string.h>
using namespace std;
struct tree
{
    tree *left,*right;
    char val[10];
}*root = NULL,*p = NULL;
struct tree* FindMin(tree *p)
{
    if(p->left==NULL) return p;
    else return FindMin(p->left);
}
void create(char data[])
{
    if(root == NULL)
    {
        root = new tree;
       // cout<<"Enter value of root:";
        strcpy(root->val,data);
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        p = root;
       // cout<<"Enter value of node:";
        while(1)
        {
            if(strcmp(data,p->val)<0)
            {
                if(p->left == NULL)
                {
                    p->left = new tree;
                    p = p->left;
                    strcpy(p->val,data);
                    p->left = NULL;
                    p->right = NULL;
                    break;
                }
                else if(p->left != NULL)
                {
                    p = p->left;
                }
            }
            else if(strcmp(data, p->val)>0)
            {
                if(p->right == NULL)
                {
                    p->right = new tree;
                    p = p->right;
                    strcpy(p->val,data);
                    p->left = NULL;
                    p->right = NULL;
                    break;
                }
                else if(p->right != NULL)
                {
                    p = p->right;
                }
            }
        }
    }
}
void inorder(tree *p)
{
    if(p==NULL)
        return;
    inorder(p->left);
    cout<<p->val<<endl;
    inorder(p->right);
}
void postorder(tree *p)
{
    if(p==NULL)
        return;
    postorder(p->left);
    postorder(p->right);
    cout<<p->val<<endl;
}
void preorder(tree *p)
{
    if(p==NULL)
        return;
    cout<<p->val<<endl;
    preorder(p->left);
    preorder(p->right);
}
void search(char s[],tree *p)
{
    if(strcmp(s,p->val)==0)
    {
        printf("Found\n");
        return;
    }
    if(p->left==NULL && p->right==NULL)
    {
        printf("Not Found\n");
        return;
    }

    if(strcmp(s,p->val)==1)
        search(s,p->right);
    else if(strcmp(s,p->val)==-1)
        search(s,p->left);
}
struct tree* delete_node(char s[],tree *p)
{
    if(p==NULL) return p;
    else if(strcmp(s,p->val)==-1)
    {
        p->left = delete_node(s,p->left);
    }
    else if(strcmp(s,p->val)==1)
    {
        p->right = delete_node(s,p->right);
    }
    else
    {
        if(p->left == NULL && p->right == NULL)
        {
            p = NULL;
        }
        else if(p->left==NULL)
        {
            p = p->right;
        }
        else if(p->right==NULL)
        {
            p = p->left;
        }
        else
        {
            struct tree *temp = FindMin(p->right);
            strcpy(p->val,temp->val);
            p->right = delete_node(temp->val,p->right);
        }
    }
    return p;
}
main()
{
    int n;
    char s[10],k[10];
    while(1)
    {
        cin>>n;
        if(n==1)
        {
            cin>>s;
            create(s);
        }
        else if(n==2)
        {
            cout<<"Printing traversal in inorder:\n";
            inorder(root);
        }
        else if(n==3)
        {
            cout<<"Printing traversal in preorder:\n";
            preorder(root);
        }
        else if(n==4)
        {
            cout<<"Printing traversal in postorder:\n";
            postorder(root);
        }
        else if(n==5)
        {
            cin>>s;
            search(s,root);
        }
        else if(n==6)
        {
            cin>>k;
            delete_node(k,root);
        }
    }
}

