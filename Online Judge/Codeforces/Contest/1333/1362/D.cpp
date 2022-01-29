#include<bits/stdc++.h>
using namespace std;

struct vertex{
    int in;
    int top;
};

bool comparator(vertex a, vertex b){
    if(a.top == b.top){
        return a.in < b.in;
    }
    else{
        return a.top < b.top;
    }
}


vector < int > vec[500001];
int ara[500001];
int vis[500001];
int n, m;
int flag;




void dfs(int src){
    //cout<<"hi"<<endl;
    int i = src;
    int l = vec[i].size();
    vis[i] = 1;
    for(int j=0; j<l; j++){
        int a = vec[i][j];
        if(ara[i] == ara[a]){
            flag = 1;
            return;
        }
        if(vis[a] == -1){
            dfs(a);
        }
    }
}

void fun(){
    flag = 0;
    memset(vis, -1, sizeof(vis));
    for(int i=1; i<=n; i++){
        if(vis[i] == -1){
            dfs(i);
        }
    }
}

int main(){

    cin>>n>>m;

    int a, b, l;

    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    for(int i=1; i<=n; i++){
        scanf("%d", &ara[i]);
    }

    fun();

    if(flag == 1){
        printf("-1\n");
    }
    else{
        vertex ver;
        vector<vertex>temp;
        for(int i=1; i<=n; i++){
            ver.in = i;
            ver.top = ara[i];
            temp.push_back(ver);
        }

        sort(temp.begin(), temp.end(), comparator);

        for(int i=0; i<n; i++){
            printf("%d", temp[i].in);
            if(i<n)
                printf(" ");
        }
        cout<<endl;

    }
    return 0;
}
