#include<bits/stdc++.h>
using namespace std;



int price[200000];
vector <int> vec[200001];
int par1[200001];
int par2[200001];
int color[200001];


void dfs(int u, int v, int par[]){
    color[u] = 1;

    int l = vec[u].size();

    int t;

    for(int i=0; i<l; i++){
        t = vec[u][i];

        if(color[t] == 0){
            par[t] = u;

            dfs(t, par);
        }
    }

    color[u] = 2;
}


void path(int u, int par[]){
    if(par[u] == -1){
        printf("%d ", u);
        return;
    }

    path(par[u], par);
    printf("%d ", u);
}





int main(){
    int t;
    cin>>t;

    int n, m, a, b, c;
    int u, v;

    while(t--){
        scanf("%d %d %d %d %d", &n, &m, &a, &b, &c);

        for(int i=0; i<m; i++){
            scanf("%d", &price[i]);
        }

        for(int i=0; i<m; i++){
            scanf("%d %d", &u, &v);
            vec[u].push_back(v);
            vec[v].push_back(u);
        }

        memset(color, 0, sizeof(color));
        dfs(a, par1);
        par1[a] = -1;
        path(b, par1);
        printf("\n");

        sort(price, price+m);

        for(int i=0; i<m; i++){
            printf("%d ", price[i]);
        }
        printf("\n");

        memset(color, 0, sizeof(color));
        dfs(b, par2);
        par2[b] = -1;
        path(c, par2);
        printf("\n");


    }
    return 0;
}
