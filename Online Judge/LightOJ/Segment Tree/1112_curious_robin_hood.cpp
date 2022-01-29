#include<bits/stdc++.h>
using namespace std;
#define SZ 100001

int ara[SZ];
int tree[SZ*3];


void make_seg_tree(int node, int low, int hi){
    if(low == hi){
        tree[node] = ara[low];
        return;
    }

    int left_node = node * 2;
    int right_node = node * 2 + 1;
    int mid = (low + hi)/ 2;

    make_seg_tree(left_node, low, mid);
    make_seg_tree(right_node, mid+1, hi);

    tree[node] = tree[left_node] + tree[right_node];
}


int query(int node, int low, int hi, int i, int j){
    if(low>=i && hi<=j){
        return tree[node];
    }

    if(hi<i || low>j){
        return 0;
    }

    int left_node = node * 2;
    int right_node = node * 2 + 1;
    int mid = (low + hi)/2;

    return query(left_node, low, mid, i, j) + query(right_node, mid+1, hi, i, j);
}


void update(int node, int low, int hi, int in, int val){
    if(in>hi || in<low){
        return;
    }

    if(low>=in && hi<=in){
        tree[node] = val;
        return;
    }

    int left_node = node * 2;
    int right_node = node * 2 + 1;
    int mid = (low+hi)/2;

    update(left_node, low, mid, in, val);
    update(right_node, mid+1, hi, in, val);

    tree[node] = tree[left_node] + tree[right_node];
}


int main(){
    int testCase;
    scanf("%d", &testCase);
    int n, q;
    int type, in, st_in, end_in, money;

    for(int cases=1; cases<=testCase; cases++){
        scanf("%d %d", &n, &q);
        for(int i=1; i<=n; i++){
            scanf("%d", &ara[i]);
        }

        printf("Case %d:\n", cases);
        make_seg_tree(1, 1, n);

        while(q--){
            scanf("%d", &type);
            if(type == 1){
                scanf("%d", &in);
                printf("%d\n", ara[in+1]);
                ara[in+1] = 0;
                update(1, 1, n, in+1, 0);//give all the money of sack which index is in to the poor
            }
            else if(type == 2){
                scanf("%d %d", &in, &money);
                ara[in+1] += money;
                update(1, 1, n, in+1, ara[in+1]);
            }
            else if(type == 3){
                scanf("%d %d", &st_in, &end_in);
                printf("%d\n", query(1, 1, n, st_in+1, end_in+1));
            }
        }
    }

    return 0;
}
