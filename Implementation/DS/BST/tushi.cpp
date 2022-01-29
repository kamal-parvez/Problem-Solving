
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct node
{
	int val;
	node* right;
	node* left;
};
struct node* creat_node(int a)
{
    node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->val=a;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void insertelement(node* root,int a)
{
	if(root->left==NULL && a < root->val)
	{
		root->left=creat_node(a);
		return ;
	}
	else if(root->right==NULL && a > root->val)
	{
		root->right=creat_node(a);
		return;
	}
	if(a < root->val)
        insertelement(root->left,a);
	else
        insertelement(root->right,a);
}
void print_inorder(node* root)
{
	if(root==NULL)
        return;


		print_inorder(root->left);
        printf("%d ",root->val);
		print_inorder(root->right);


}
int main()
{
    int a,choice,t,x;
    struct node* root=NULL;
    while(1)
	{
		 cin>>t;
        if(t==1)
        {
            cin>>x;

            if(root==NULL)
            {
                root=creat_node(x);
            }
           else
                insertelement(root,x);
        }
        else if(t==2)
        {
            print_inorder(root);
            cout<<endl;
        }
	}
}

