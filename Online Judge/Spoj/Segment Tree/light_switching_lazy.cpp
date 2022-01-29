#include<bits/stdc++.h>
using namespace std;
#define SZ 100001

struct newType{
    int on;
    int prop;
};

newType tree[SZ*3];


void update(int node, int low, int hi, int startIn, int endIn){
    if(low>endIn || hi <startIn){
        return;
    }

    if(low>=startIn && hi<=endIn){
        tree[node].on = ((hi-low+1) - tree[node].on);
        tree[node].prop++;
        return;
    }

    int leftNode = node * 2;
    int rightNode = node * 2 + 1;
    int mid = (low + hi)/2;

    update(leftNode, low, mid, startIn, endIn);
    update(rightNode, mid+1, hi, startIn, endIn);

    if(tree[node].prop%2 == 1){
        tree[node].on = (hi-low+1) - ( tree[leftNode].on + tree[rightNode].on );
    }
    else{
        tree[node].on = ( tree[leftNode].on + tree[rightNode].on );
    }
}



int query(int node, int low, int hi, int startIn, int endIn, int carry){
    if(low>endIn || hi <startIn){
        return 0;
    }

    if(low>=startIn && hi<=endIn){
        if(carry%2 == 1){
            return (hi-low+1) - tree[node].on;
        }
        else{
            return tree[node].on;
        }
    }

    int leftNode = node * 2;
    int rightNode = node * 2 + 1;
    int mid = (low + hi)/2;

    return query(leftNode, low, mid, startIn, endIn, carry+tree[node].prop)
            + query(rightNode, mid+1, hi, startIn, endIn, carry+tree[node].prop);
}


void show_tree(int n){
    for(int i=1; i<=7; i++){
        printf("%d -->  on: %d   prop: %d  \n", i, tree[i].on, tree[i].prop);
    }
}


int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int operation, sI, eI;
    while(m--){
        scanf("%d %d %d", &operation, &sI, &eI);

        if(operation == 0){
            //show_tree(n);
            update(1, 1, n, sI, eI);
            //show_tree(n);
        }
        else{
            cout<<query(1, 1, n, sI, eI, 0)<<endl;
            //show_tree(n);
        }
    }
    return 0;
}
