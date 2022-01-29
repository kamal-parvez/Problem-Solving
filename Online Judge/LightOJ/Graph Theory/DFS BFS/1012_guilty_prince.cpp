#include<bits/stdc++.h>
using namespace std;

int w, h, src;
int visited[500];
char ara[21][21];
int mat[402][402];
int node;


void make_graph(){
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(ara[i][j] == '#'){
                continue;
            }
            if(i>0 && ara[i-1][j] != '#'){
                mat[i*w+j][(i-1)*w+j] = 1;
                mat[(i-1)*w+j][i*w+j] = 1;
            }
            if(i<h-1 && ara[i+1][j] != '#'){
                mat[i*w+j][(i+1)*w+j] = 1;
                mat[(i+1)*w+j][i*w+j] = 1;
            }
            if(j>0 && ara[i][j-1] != '#'){
                mat[i*w+j][i*w+j-1] = 1;
                mat[i*w+j-1][i*w+j] = 1;
            }
            if(j<w-1 && ara[i][j+1] != '#'){
                mat[i*w+j][i*w+j+1] = 1;
                mat[i*w+j+1][i*w+j] = 1;
            }

        }
    }
}


void bfs(int src){
    visited[src] = 1;
    queue <int> qu;

    qu.push(src);

    while(!qu.empty()){
        int top = qu.front();
        qu.pop();

        for(int i=0; i<node; i++){
            if(mat[top][i] == 1 && visited[i] == -1){
                visited[i] = 1;
                qu.push(i);
            }
        }
    }
}


int get_cnt(){
    int cnt = 0;
    for(int i=0; i<node; i++){
        if(visited[i]==1)
            cnt++;
    }
    return cnt;
}


int main(){
    int t;
    cin>>t;

    for(int cases=1; cases<=t; cases++){
        scanf("%d %d", &w, &h);

        char ch;
        int src;

        for(int i=0; i<h; i++){
            scanf("\n");
            for(int j=0; j<w; j++){
                scanf("%c", &ara[i][j]);
                if(ara[i][j] == '@')
                    src = i*w+j;
            }

        }

        node = h*w;

        /*cout<<"sajhf"<<endl;

        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                printf("%c  ", ara[i][j]);
            }
            cout<<endl;
        }*/

        memset(mat, 0, sizeof(mat));
        memset(visited, -1, sizeof(visited));
        make_graph();

        /*for(int i=0; i<h*w; i++){
            for(int j=0; j<h*w; j++){
                printf("%d  ", mat[i][j]);
            }
            cout<<endl;
        }*/

        //cout<<"src : "<<src<<endl;
        bfs(src);

        printf("Case %d: %d\n", cases, get_cnt());


    }
    return 0;
}
