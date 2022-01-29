#include<bits/stdc++.h>
using namespace std;

#define black 1
#define grey 2
#define white 3
#define tour 1
#define indus 2

struct graph{
    int in;
    int ances;
    int child;
};


graph ara[200001];
int n, k;
vector<int> vec[200001];
int col[200001];
int dhoron[200001];
int parent[200001];
int dp[200001];


bool comparator(graph a, graph b){
        //if(a.ances == b.ances)
            //return a.child < b.child;
       return  (a.ances-a.child) > (b.ances-b.child);
}


int path(int u){
    if(parent[u] == -1){
        return 1;
    }

    if(dp[u] != -1){
        return dp[u];
    }

    if(dhoron[u] == tour)
        return dp[u] = 1 + path(parent[u]);
    else
        return dp[u] = path(parent[u]);
}



int dfs(int u){
    col[u] = 1;
    //cout<<"u : "<<u<<endl;

    int l = vec[u].size();
    int cnt = 0;

    for(int i=0; i<l; i++){

        int t = vec[u][i];

        if(col[t] == 0){
            //cout<<"t : "<<t<<endl;
            parent[t] = u;
            ara[t-1].in = t;
            ara[t-1].ances = ara[u-1].ances + 1;
            cnt += dfs(t) + 1;
        }
    }
    return ara[u-1].child = cnt;
}

int main(){

    cin>>n>>k;

    int u, v;

    for(int i=0; i<n-1; i++){
        scanf("%d %d", &u, &v);
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    memset(col, 0, sizeof(col));
    memset(dhoron, 0, sizeof(dhoron));
    memset(dp, -1, sizeof(dp));

    parent[1] = -1;
    ara[0].ances = 0;
    ara[0].in = 1;
    dfs(1);



    //for(int i=0; i<n; i++){
    //    printf("in: %d   ances: %d\n", ara[i].in, ara[i].ances);
    //}

    sort(ara, ara+n, comparator);
    //cout<<"---------------------"<<endl;
    //for(int i=0; i<n; i++){
     //   printf("in: %d   ances: %d\n", ara[i].in, ara[i].ances);
    //}

    for(int i=0; i<k; i++){
        dhoron[ara[i].in] = indus;
    }

    for(int i=k; i<n; i++){
        dhoron[ara[i].in] = tour;
    }

    //for(int i=1; i<=n; i++){
        //printf("in: %d  dhoron: %d\n", i, dhoron[i]);
    //}

    long long int cost = 0;

    for(int i=1; i<=n; i++){
        if(dhoron[i] == indus){
            cost += path(i);
        }
    }

    cout<<cost<<endl;


    return 0;
}


