#include<bits/stdc++.h>
using namespace std;

#define inf -100
#define Blue 4
#define White 0
#define Grey 2
#define Black 3


int cnt=0;

struct breadth
{
    vector < int > v[201];
    int node,edge;
    int color[201],prev[201],l[201];

    bool bicoloring()
    {
        int i,x,j;
        cnt=0;

        memset(color,White,sizeof(color));

        for(int i=0;i<node;i++){

            if(color[i]==White){

                color[i]=Black;
                cnt++;

                for(j=0;j<v[i].size();j++)
                {
                    int u=v[i][j];

                    if(color[u]==Grey)
                        return false;
                    else{
                        color[u]=Grey;
                            for(int k=0;k<v[u].size();k++){

                                x=v[u][k];
                                if(color[x]==White)
                                    color[x]=Blue;
                            }
                    }

                }
            }
        }
        return true;
    }

};

int main()
{
    breadth ds;
    int i,j,a,b,u,v;
    int t;

    cin>>t;

    while(t!=0){

        cin>>ds.node>>ds.edge;

        for(i=0;i<ds.edge;i++)
        {
            cin>>a>>b;
            ds.v[a].push_back(b);
             ds.v[b].push_back(a);

        }

        bool bi=ds.bicoloring();

        if(bi==false){
            cout<<-1<<endl;
        }

        else
            cout<<cnt<<endl;

        t--;
    }

    return 0;
}

