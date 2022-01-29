#include<bits/stdc++.h>
using namespace std;
#define SZ 100002


struct newType{
    int freq;
    int left;
    int right;
};

int ara[SZ];
newType tree[SZ*3];
newType zero;



void makeSegmentTree(int node, int low, int hi){

    if(low == hi){
        tree[node].freq = 1;
        tree[node].left = 1;
        tree[node].right = 1;
        return;
    }

    int leftNode = node * 2;
    int rightNode = node * 2 + 1;
    int mid = (low+hi)/2;

    makeSegmentTree(leftNode, low, mid);
    makeSegmentTree(rightNode, mid+1, hi);

    if(ara[mid] != ara[mid+1]){
        tree[node].freq = max(tree[leftNode].freq, tree[rightNode].freq);
        tree[node].left = tree[leftNode].left;
        tree[node].right = tree[rightNode].right;
    }
    else{
        tree[node].freq = max(max(tree[leftNode].freq, tree[rightNode].freq), tree[leftNode].right+tree[rightNode].left);

        if(ara[low] == ara[mid+1]){
            tree[node].left = tree[leftNode].left + tree[rightNode].left;
        }else{
            tree[node].left = tree[leftNode].left;
        }

        if(ara[mid] == ara[hi]){
            tree[node].right = tree[leftNode].right + tree[rightNode].right;
        }else{
            tree[node].right = tree[leftNode].right;
        }

    }
}


newType query(int node, int low, int hi, int startIn, int endIn){
    if(low>endIn || hi<startIn){
        return zero;
    }

    if(low>=startIn && hi<=endIn){
        return tree[node];
    }

    int leftNode = node * 2;
    int rightNode = node * 2 + 1;
    int mid = (low + hi)/2;

    newType left = query(leftNode, low, mid, startIn, endIn);
    newType right = query(rightNode, mid+1, hi, startIn, endIn);

    if(left.freq == 0){
        return right;
    }
    else if(right.freq == 0){
        return left;
    }

    newType res;

    if(ara[mid] != ara[mid+1]){
        res.freq = max(left.freq, right.freq);
        res.left = left.left;
        res.right = right.right;
    }
    else{
        res.freq = max(max(left.freq, right.freq), left.right+right.left);

        if(low>=startIn && ara[low] == ara[mid+1]){
            res.left = left.left + right.left;
        }else if(low<startIn && ara[startIn] == ara[mid+1]){
            res.left = left.left + right.left;
        }else{
            res.left = left.left;
        }

        if(hi<=endIn && ara[mid] == ara[hi]){
            res.right = left.right + right.right;
        }else if(hi>endIn && ara[mid] == ara[endIn]){
            res.right = left.right + right.right;
        }else{
            res.right = right.right;
        }
    }

    return res;
}



int main(){

    int n, q;
    int starIn, endIn;
    while(scanf("%d", &n) && n!=0){
        scanf("%d", &q);
        for(int i=1; i<=n; i++){
            scanf("%d", &ara[i]);
        }

        makeSegmentTree(1, 1, n);

        while(q--){
            scanf("%d %d", &starIn, &endIn);
            printf("%d\n", query(1, 1, n, starIn, endIn).freq);
        }
    }

    return 0;
}
