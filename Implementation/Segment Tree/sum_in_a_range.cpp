//There is an array. in each query, u have to determine sum for a specific range. one index value will be changed after each query.

#include<bits/stdc++.h>
using namespace std;

#define MX 100001

int ara[MX];
int tree[MX*3];

void seg_init(int node, int b, int e){
    if(b==e){
        tree[node] = ara[b];
        return;
    }
    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;

    seg_init(left, b, mid);
    seg_init(right, mid+1, e);
    tree[node] = tree[left] + tree[right];
}


int query(int node, int b, int e, int i, int j){
    if(b>=i && e<=j){
        return tree[node];
    }
    else if(e<i || b>j){
        return 0;
    }
    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;

    return query(left, b, mid, i, j) + query(right, mid+1, e, i, j);
}


void update(int node, int b, int e, int i, int val){

    if(i<b || i>e){
        return;
    }
    if(b>=i && e<=i){
        tree[node] = val;
        return;
    }

    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e)/2;

    update(left, b, mid, i, val);
    update(right, mid+1, e, i, val);

    tree[node] = tree[left] + tree[right];
}


void show_tree(int n){
    for(int i=0; i<n*3; i++){
        printf("%d : %d\n", i, tree[i]);
    }
}



int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>ara[i];
    }

    seg_init(1, 1, n);
    //show_tree(n);

    update(1, 1, n, 2, 2);
    cout<<query(1, 1, n, 2, 6)<<endl;

    update(1, 1, n, 2, 0);
    cout<<query(1, 1, n, 2, 4)<<endl;

    return 0;
}
