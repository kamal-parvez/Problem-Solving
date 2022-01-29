#include<bits/stdc++.h>
using namespace std;
#define SZ 100002


struct propgate{
    long long int sum;
    long long int prop;
};


//int ara[SZ];
propgate tree[SZ*3];


void makeSegmentTree(long long int node, long long int low, long long int hi){
    if(low == hi){
        tree[node].sum = 0;
        tree[node].prop = 0;
        return;
    }

    long long int leftNode = node * 2;
    long long int rightNode = (node * 2) + 1;
    long long int mid = (low+hi) / 2;

    makeSegmentTree(leftNode, low, mid);
    makeSegmentTree(rightNode, mid+1, hi);

    tree[node].sum = tree[leftNode].sum + tree[rightNode].sum;
    tree[node].prop = 0;
}



void update(long long int node, long long int low, long long int hi, long long int startIn, long long int endIn, long long int val){
    if(low>endIn || hi<startIn){
        return;
    }

    if(low>=startIn && hi<=endIn){
        tree[node].prop += val;
        tree[node].sum += ((hi-low+1)*val);
        return;
    }

    long long int leftNode = node * 2;
    long long int rightNode = node * 2 + 1;
    long long int mid = (low+hi)/2;

    update(leftNode, low, mid, startIn, endIn, val);
    update(rightNode, mid+1, hi, startIn, endIn, val);

    tree[node].sum = tree[leftNode].sum + tree[rightNode].sum + tree[node].prop * (hi-low+1);
}


long long int query(long long int node, long long int low, long long int hi, long long int startIn, long long int endIn, long long int carry){
    if(low>endIn || hi<startIn){
        return 0;
    }

    if(low>=startIn && hi<=endIn){
        return tree[node].sum + carry * (hi-low+1);
    }

    long long  leftNode = node * 2 ;
    long long  rightNode = node * 2 + 1;
    long long  mid = (low + hi)/2;

    return query(leftNode, low, mid, startIn, endIn, carry+tree[node].prop)
            + query(rightNode, mid+1, hi, startIn, endIn, carry+tree[node].prop);
}


int main(){
    long long  t;
    scanf("%lld", &t);
    long long  n, c, p, q, v, type;

    while(t--){
        scanf("%lld %lld", &n, &c);

        //makeSegmentTree(1, 1, n);
        //printf("seg tree init\n");

        while(c--){
            scanf("%lld %lld %lld", &type, &p, &q);

            if(type == 0){
                scanf("%lld", &v);
                update(1, 1, n, p, q, v);
            }
            else{
                cout<<query(1, 1, n, p, q, 0)<<endl;
            }
        }
    }
    return 0;
}


