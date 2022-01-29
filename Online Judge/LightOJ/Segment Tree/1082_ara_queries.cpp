#include<bits/stdc++.h>
using namespace std;

#define MX 100001
#define MIN 10000000

int ara[MX];
int tree[MX*3];


void make_seg_tree(int node, int low, int hi){

    if(low == hi){
        tree[node] = ara[low];
        return;
    }

    int left_node = node * 2;
    int right_node = node * 2 + 1;
    int mid = (low+hi)/2;

    make_seg_tree(left_node, low, mid);
    make_seg_tree(right_node, mid+1, hi);

    tree[node] = min(tree[left_node], tree[right_node]);
}


int query(int node, int low, int hi, int i, int j){

    if(low>=i && hi<=j){
        return tree[node];
    }

    if(low>j || hi<i){
        return MIN;
    }

    int left_node =  node * 2;
    int right_node = node * 2 + 1;
    int mid = (low + hi)/2;

    return min(query(left_node, low, mid, i, j), query(right_node, mid+1, hi, i, j));
}


int main(){
    int t;
    scanf("%d", &t);

    for(int cases=1; cases<=t; cases++){
        int n, q;
        scanf("%d", &n);
        scanf("%d", &q);

        for(int i=1; i<=n; i++){
            scanf("%d", &ara[i]);
        }

        make_seg_tree(1, 1, n);
        printf("Case %d:\n", cases);

        int st_in, en_in;

        for(int i=1; i<=q; i++){
            scanf("%d %d", &st_in, &en_in);
            printf("%d\n", query(1, 1, n, st_in, en_in));
        }
    }
    return 0;
}


