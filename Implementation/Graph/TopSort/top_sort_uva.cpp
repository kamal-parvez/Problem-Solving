#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,m,i,j,ara[102][102],order[102];
    int u,v;
    int in[102];

    while(1){

        cin>>n>>m;

        if(n==0 && m==0)break;

        for(i=0;i<=n;i++)
            in[i]=0;

        for(i=0;i<m;i++){

            cin>>u>>v;
            ara[u][v]=1;
            in[v]++;
        }

        int c=0;

        while(1){

            for(i=1;i<=n;i++){

                if(in[i]==1)c=1;

                if(in[i]==0){
                    cout<<i<<" ";

                    for(j=1;j<=n;j++){

                        if(ara[i][j]==1){

                            in[j]--;
                            ara[i][j]=0;
                        }

                    }
                }
            }

            if(c==0)break;
        }

        cout<<endl;

    }

    return 0;
}

