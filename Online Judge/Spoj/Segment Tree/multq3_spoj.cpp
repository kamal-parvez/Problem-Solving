#include<bits/stdc++.h>
using namespace std;
#define SZ 100001

struct newType{
    int zero;
    int one;
    int two;
    int prop;
};

newType tree[SZ*3];
int ara[SZ];


void makeSegmentTree(int node, int low, int hi){
    if(low == hi){
        tree[node].zero = 1;
        return;
    }

    int leftNode = node * 2;
    int rightNode = node * 2 + 1;
    int mid = (low + hi) / 2;

    makeSegmentTree(leftNode, low, mid);
    makeSegmentTree(rightNode, mid+1, hi);

    tree[node].zero = tree[leftNode].zero + tree[rightNode].zero;
}



void update(int node, int low, int hi, int startIn, int endIn){
    if(hi<startIn || low >endIn){
        return;
    }

    if(low>=startIn && hi<=endIn){
        tree[node].prop++;  //add 1
        int temp1 = tree[node].one;
        int temp2 = tree[node].two;
        tree[node].one = tree[node].zero;
        tree[node].two = temp1;
        tree[node].zero = temp2;
        return;
    }

    int leftNode = node * 2;
    int rightNode = node *2  + 1;
    int mid = (low + hi) / 2;

    update(leftNode, low, mid, startIn, endIn);
    update(rightNode, mid+1, hi, startIn, endIn);

    if(tree[node].prop % 3 == 0){
        tree[node].zero = tree[leftNode].zero + tree[rightNode].zero;
        tree[node].one = tree[leftNode].one + tree[rightNode].one;
        tree[node].two = tree[leftNode].two + tree[rightNode].two;
    }
    else if(tree[node].prop % 3 == 1){
        tree[node].one = tree[leftNode].zero + tree[rightNode].zero;
        tree[node].two = tree[leftNode].one + tree[rightNode].one;
        tree[node].zero = tree[leftNode].two + tree[rightNode].two;
    }
    else{
        tree[node].two = tree[leftNode].zero + tree[rightNode].zero;
        tree[node].zero = tree[leftNode].one + tree[rightNode].one;
        tree[node].one = tree[leftNode].two + tree[rightNode].two;
    }
}



int query(int node, int low,  int hi, int startIn, int endIn, int carry){
    if(low>endIn || hi<startIn){
        return 0;
    }

    if(low>=startIn && hi<=endIn){
        if(carry % 3 == 0){
            return tree[node].zero;
        }
        else if(carry % 3 == 1){
            return tree[node].two;
        }
        else{
            return tree[node].one;
        }
    }

    int leftNode = node * 2;
    int rightNode = node *2  + 1;
    int mid = (low + hi) / 2;

    return query(leftNode, low, mid, startIn, endIn, carry + tree[node].prop)
        + query(rightNode, mid+1, hi, startIn, endIn, carry + tree[node].prop);
}


void output(){
    for(int i=1; i<=9; i++){
        printf("node %d --> zero: %d     one:%d    two:%d     prop:%d\n", i, tree[i].zero, tree[i].one, tree[i].two, tree[i].prop);
    }
}



int main(){
    int n, q;
    scanf("%d %d", &n, &q);

    int type, a, b;
    int root_node = 1;
    int carry = 0;

    makeSegmentTree(1, 1, n);

    while(q--){
        scanf("%d %d %d", &type, &a, &b);

        if(type == 0){
            update(root_node, 1, n, a+1, b+1);
            //output();
        }
        else{
            cout<<query(root_node, 1, n, a+1, b+1, carry)<<endl;
        }
    }
    return 0;
}
