#include<bits/stdc++.h>
using namespace std;

vector < int > vi[100001];
int n, k;
int dis[100001];
int res[100001];



void bfs(int src){
    queue < int > qu;
    qu.push(src);
    res[src]++;

    int t, temp;

    while(!qu.empty()){
        t = qu.front();
        qu.pop();
        if(dis[t]>k)
            break;

        int l = vi[t].size();
        res[src] += l;

        for(int i=0; i<l; i++){
            temp = vi[t][i];
            dis[temp] = dis[t] + 1;
            qu.push(temp);

        }
    }

}


int main(){

    scanf("%d %d", &n, &k);
    int u, v;
    for(int i=0; i<n-1; i++){
        scanf("%d %d", &u, &v);
        vi[u].push_back(v);
        vi[v].push_back(u);
    }

    for(int i=1; i<=n; i++){
        bfs(i);
        printf("%d\n", res[i]);
    }
    return 0;


}
