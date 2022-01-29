//There is an array. in each query, u have to determine sum for a specific range. one index value will be changed after each query.

#include<bits/stdc++.h>
using namespace std;
#define MX 100001


struct propgate{
    int sum;
    int prop;
};

int ara[MX];
propgate tree[MX*3];


void seg_init(int node, int b, int e){
    if(b==e){
        tree[node].sum = ara[b];
        tree[node].prop = 0;
        return;
    }
    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;

    seg_init(left, b, mid);
    seg_init(right, mid+1, e);
    tree[node].sum = tree[left].sum + tree[right].sum;
    tree[node].prop = 0;
}


int query(int node, int b, int e, int i, int j, int carry){
    if(b>=i && e<=j){
        return tree[node].sum + carry * (e-b+1);
    }
    else if(e<i || b>j){
        return 0;
    }
    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;

    return query(left, b, mid, i, j, carry + tree[node].prop) + query(right, mid+1, e, i, j, carry + tree[node].prop);
}


void update(int node, int b, int e, int i, int j, int val){

    if(j<b || i>e){
        return;
    }
    if(b>=i && e<=j){
        tree[node].sum += ( (e-b+1) * val );
        tree[node].prop += val;
        return;
    }

    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e)/2;

    update(left, b, mid, i, j, val);
    update(right, mid+1, e, i, j, val);

    tree[node].sum = tree[left].sum + tree[right].sum + (e-b+1) * tree[node].prop;
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

    update(1, 1, n, 2, 5, 2);
    cout<<query(1, 1, n, 2, 6, 0)<<endl;

    update(1, 1, n, 2, 4, 1);
    cout<<query(1, 1, n, 2, 4, 0)<<endl;

    return 0;
}

