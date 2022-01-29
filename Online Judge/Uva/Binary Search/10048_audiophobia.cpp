#include<bits/stdc++.h>
using namespace std;

int c, s, q;
int ara[101][101];
int temp[101][101];
int vis[101];

void edit_graph(int val){
    for(int i=1; i<=c; i++){
        for(int j=0; j<=c; j++){
            if(ara[i][j]<=val)
                temp[i][j] = ara[i][j];
            else
                temp[i][j] = -1;
        }
    }
}

bool bfs(int u, int v){
    memset(vis, 0, sizeof(vis));
    vis[u] = 1;
    queue<int> qu;
    qu.push(u);

    while(!qu.empty()){
        int t = qu.front();
        qu.pop();

        for(int i=1; i<=c; i++){
            if(temp[t][i] != -1 && vis[i] == 0){
                if(i== v)
                    return true;
                vis[i] = 1;
                qu.push(i);
            }
        }
    }
    return false;
}


int main(){

    int u, v, w;
    int test = 0;
    while(scanf("%d %d %d", &c, &s, &q) == 3){
        //cin>>c>>s>>q;
        if(c ==0)
            break;
        //printf("%d %d %d\n", c, s, q);
        memset(ara, -1, sizeof(ara));
        int mx = -1;

        for(int i=1; i<=s; i++){
            scanf("%d %d %d", &u, &v, &w);
            ara[u][v] = w;
            ara[v][u] = w;
            mx = max(mx, w);
        }

        if(test)
            printf("\n");
        printf("Case #%d\n", ++test);

        for(int i=1; i<=q; i++){
            scanf("%d %d", &u, &v);

            edit_graph(mx);
            if(bfs(u, v) == false){
                printf("no path\n");
                continue;
            }

            int lo=0, mid, hi = mx;
            int ans = 100000000;
            while(lo<=hi){
                mid = (lo+hi)/2;
                edit_graph(mid);
                bool flag = bfs(u, v);

                if(flag == true){
                    hi = mid-1;
                    ans = min(ans, mid);
                }
                else{
                    lo = mid+1;
                }
            }
            printf("%d\n", ans);
        }

    }
    return 0;
}
