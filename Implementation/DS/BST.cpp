#include<bits/stdc++.h>
using namespace std;


struct node{
    int val;
    node *left;
    node *right;
};


node* create_new_node(int key){
    node *temp = (struct node *) malloc(sizeof(node));
    temp->val = key;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

node* insert(node* item, int val){

    if(item == NULL){
        return create_new_node(val);
    }

    if(val > item->val){
        item->right = insert(item->right, val);
    }
    else{
        item->left = insert(item->left, val);
    }
    return item;
}


void inorder_travarse(node* root){
    if(root == NULL){
        return;
    }

    inorder_travarse(root->left);
    printf("%d   ", root->val);
    inorder_travarse(root->right);
}


bool search(node* root, int key){
    if(root == NULL){
        return false;
    }
    else if(key == root->val){
        return true;
    }
    else if(key > root->val){
        return search(root->right, key);
    }
    else{
        return search(root->left, key);
    }

}


node* lca(node* root, int a, int b){


    if(root->val < a && root->val < b){
        return lca(root->right, a, b);
    }
    else if (root->val > a && root->val > b){
        return lca(root->left, a, b);
    }

    return root;
}

node* find_leftmost(node* item){
    if(item->left == NULL){
        return item;
    }

    return find_leftmost(item->left);
}


node* delete_node(node* root, int key){
    if(root == NULL)
        return root;

    if(key > root->val){
        root->right = delete_node(root->right, key);
    }
    else if(key < root->val){
        root->left = delete_node(root->left, key);
    }
    else{
        if(root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }
        else if(root->left == NULL){
            node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            node* temp = root->left;
            free(root);
            return temp;
        }

        node* temp = find_leftmost(root->right);
        root->val = temp->val;
        printf("Left : %d\n", temp->val);
        root->right = delete_node(root->right, temp->val);
    }

    return root;
}



int main(){
    node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

   inorder_travarse(root);
   cout<<endl;

   /*while(1){
        int x;
        cin>>x;
        if(search(root, x)){
            printf("Found\n");
        }
        else{
            printf("Not Found\n");
        }
   }*/

   int a, b;

   /*while(1){
        cin>>a>>b;
        node* item = lca(root, a, b);
        printf("LCA of %d & %d : %d\n", a, b, item->val);
   }*/

   while(1){
    cin>>a;
    root = delete_node(root, a);
    inorder_travarse(root);
    cout<<endl;
   }

   return 0;
}
