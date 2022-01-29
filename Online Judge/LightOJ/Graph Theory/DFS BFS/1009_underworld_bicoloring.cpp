#include<bits/stdc++.h>
using namespace std;



struct graph{
    int n;
    vector < int > vec[20002];
    int vis[20002];
    int cnt_ly;
    int cnt_vam;
    queue <int> qu;

    void run(){
        memset(vis, -1, sizeof(vis));
        cnt_ly = 0;
        cnt_vam = 0;

        for(int i=1; i<=20000; i++){
            if(vis[i] == -1 && vec[i].size()>0){
                bicolring(i);
            }
        }
    }


    void bicolring(int src){

        vis[src] = 1;
        cnt_vam++;
        qu.push(src);

        int top, u, v, l;


        while(!qu.empty()){
            top = qu.front();
            qu.pop();
            l = vec[top].size();

            for(int i=0; i<l; i++){
                u = vec[top][i];

                //cout<<"u : "<<u<<endl;

                if(vis[u] == -1){
                    if(vis[top] == 1){
                        vis[u] = 2;
                        cnt_ly++;
                    }
                    else{
                        vis[u] = 1;
                        cnt_vam++;
                    }
                    qu.push(u);
                }
            }
        }
    }

};


int main(){
    int t;
    cin>>t;
    int u, v;

    for(int cases=1; cases<=t; cases++){
        graph gp;
        scanf("%d", &gp.n);

        //int mx=-1;

        for(int i=0; i<gp.n; i++){
            scanf("%d %d", &u, &v);
            gp.vec[u].push_back(v);
            gp.vec[v].push_back(u);
        }

        //cout<<"src : "<<u<<endl;

        /*for(int i=1; i<=6; i++){
            printf("%d  ", gp.vis[i]);
        }*/

        gp.run();
        int res = max(gp.cnt_ly, gp.cnt_vam);
        printf("Case %d: %d\n", cases, res);
    }
    return 0;
}





