#include<bits/stdc++.h>
#include<iostream>
using namespace std;


struct graph{

    int node;
    int val;

    bool operator<(const graph &ob)const{
        return nodeob.node;
    }

};



int main(){

    priority_queue<graph>pq;

    graph gp[10];

    gp[0].node=2;
    gp[0].val=6;

    gp[1].node=1;
    gp[1].val=30;

    gp[2].node=5;
    gp[2].val=2;

    gp[3].node=3;
    gp[3].val=10;

    pq.push(gp[0]);
    pq.push(gp[1]);
    pq.push(gp[2]);
    pq.push(gp[3]);

    cout<<pq.top().val<<endl;
    cout<<pq.top().node<<endl;


    return 0;

}
