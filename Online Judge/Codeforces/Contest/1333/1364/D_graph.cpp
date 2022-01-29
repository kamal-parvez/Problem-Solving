#include<bits/stdc++.h>
using namespace std;

int n, m, k;
vector <int> vec[100001];
int vis[100001];


void bicoloring(int src){
    memset(vis, -1, sizeof(vis));
    vis[src] = 1;
    queue <int> qu;
    qu.push(src);

    int u, v, l;

    while(!qu.empty()){
        u = qu.front();
        qu.pop();
        l = vec[u].size();

        for(int i=0; i<l; i++){
            v = vec[u][i];

            if(vis[v] == -1){
                if(vis[u] == 1){
                    vis[v] = 2;
                }
                else{
                    vis[v] = 1;
                }
                qu.push(v);
            }
            if(vis[u] == vis[v]){
                if(vec[u].size() > vec[v].size()){
                    vis[u] = 3;
                }
                else{
                    vis[v] = 3;
                }
            }
        }
    }
}

bool independent(){
    bicoloring(1);

    int l1=0, l2=0;
    for(int i=1; i<=n; i++){
        if(vis[i] == 1){
            l1++;
        }
        else if(vis[i] == 2){
            l2++;
        }
    }

    int x = (int) ceil(k/2.0);

    if(x>l1 && x>l2){
        return false;
    }
    else if(x<=l1){
        printf("1\n");
        int j=0;
        for(int i=1; i<=n; i++){
            if(vis[i] == 1){
                printf("%d", i);
                j++;
            }
            if(j==x)
                break;
            if(j<x)
                printf(" ");
        }
        cout<<endl;
    }
    else{
        printf("1\n");
        int j=0;
        for(int i=1; i<=n; i++){
            if(vis[i] == 2){
                printf("%d", i);
                j++;
            }
            if(j==x)
                break;
            if(j<x)
                printf(" ");
        }
        cout<<endl;
    }
    return true;
}

bool dfs(int src){
    vis[src] = 1;
    int l = vec[src].size();
    for(int i=0; i<l; i++){
        int v = vec[src][i];

        if(vis[v] == -1){
            dfs(v);
        }
    }
}


int main(){
    cin>>n>>m>>k;
    int u, v;

    for(int i=0; i<m; i++){
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    if(!independent()){
        memset(vis, -1, sizeof(vis));
    }


    return 0;
}
