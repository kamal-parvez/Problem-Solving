#include<bits/stdc++.h>
using namespace std;

#define SZ 100
#define MX 1000


struct vertex{
    int in;
    int val;

    bool operator <(const vertex &ob)const{
        return val < ob.val;
    }
};

struct graph{
    int node, edge;
    vector <vertex> ara[SZ];
    int dis[SZ], prev[SZ];


    void dijkastra(int src){
        memset(dis, 10000, sizeof(dis));
        memset(prev, -1, sizeof(prev));

        priority_queue <vertex> pq;
        dis[src] = 0;
        vertex vr;
        vr.in = src;
        vr.val = 0;

        pq.push(vr);

        while(!pq.empty()){
            vr = pq.top();
            pq.pop();

            for(int i=0; i<ara[vr.in].size(); i++){
                vertex v1 = ara[vr.in][i];
                //cout<<"ajd"<<dis[v1.in]<<" "<<dis[vr.in]<<" "<<v1.val;
                if(dis[vr.in] + v1.val < dis[v1.in]){
                    dis[v1.in] = dis[vr.in] + v1.val;
                    prev[v1.in] = vr.in;
                    pq.push(v1);
                    //cout<<"ajd"<<dis[v1.in];
                }
            }
        }
    }

    void print_path(int u){
        if(u == -1)
            return;
        print_path(prev[u]);
        cout<<u<<"  ";
    }
};


int main(){
    graph gp;
    cin>>gp.node>>gp.edge;
    int u, v, w;
    vertex vr;

    for(int i=0; i<gp.edge; i++){
        cin>>u>>v>>w;
        vr.in = v;
        vr.val = w;

        gp.ara[u].push_back(vr);
    }

    cin>>u>>v;

    gp.dijkastra(u);

    for(int i=0; i<gp.node; i++){
        cout<<"The distance : "<<gp.dis[i]<<endl;
    }

    gp.print_path(v);

    return 0;
}
