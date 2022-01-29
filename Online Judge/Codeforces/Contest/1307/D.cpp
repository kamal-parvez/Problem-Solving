#include<bits/stdc++.h>
using namespace std;

#define SZ 100000
#define red 1
#define blue 2
#define white 0


struct graph{
    vector <int> ara[SZ];
    int special[100000];
    int n, m, k;
    int color[SZ];

    bool bfs(int u){
        memset(color, white, sizeof(color));
        queue<int> qu;
        color[u] = blue;
        qu.push(u);

        while(!qu.empty()){
            int x = qu.front();
            qu.pop();

            for(int i=0; i<ara[x].size(); i++){
                int t = ara[x][i];

                if(color[t] == white && color[x] == blue){
                    color[t] = red;
                    qu.push(t);
                }
                else if(color[t] == white && color[x] == red){
                    color[t] = blue;
                    qu.push(t);
                }
                else if(color[t] == color[x]){
                    return false;
                }
            }
        }
        return true;
    }
};


int main(){
    graph gp;
    cin>>gp.n>>gp.m>>gp.k;

    for(int i=0; i<k; i++){
        cin>>gp.special[i];
    }

    int u,v;

    for(int i=0; i<gp.m; i++){
        cin>>u>>v;
        gp.ara[u].push_back(v);
        gp.ara[v].push_back(u);
    }

    int flag = gp.bfs(0);

    if(flag == true)
        cout<<"Bicoloring possible"<<endl;
    else
        cout<<"Bicoloring not possible"<<endl;

    return 0;
}
