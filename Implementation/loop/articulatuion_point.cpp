#include<bits/stdc++.h>
using namespace std;


struct art
{
    int node,edge,level[100];
   // vector < int > vec[100];
   int ara[100][100];


    void bfs(int src,int ar)
    {
        memset(level,-1,sizeof(level));

        queue < int > q;
        level[src]=0;
        q.push(src);

        while(!q.empty())
        {
            int t=q.front();
            q.pop();

            for(int j=1;j<=node;j++)
            {
                if(j==ar)
                    continue;

                if(level[j]==-1 && ara[t][j]==1)
                {
                    level[j]=level[t]+1;
                    q.push(j);
                }
            }
        }
    }

    int articulation(int n)
    {
        if(n==1)
            bfs(2,n);
        else
            bfs(1,n);

           /* for(int j=0;j<=node;j++)
                cout<<level[j]<<" ";
            cout<<endl;*/

        for(int i=1;i<=node;i++)
        {
            if(i==n)
                continue;
            if(level[i]==-1)
                return 1;
        }
        return 0;
    }

};


int main()
{
    int i,j,k,u,v,res=0;

    art f;

    cin>>f.node>>f.edge;

    memset(f.ara,0,sizeof(f.ara));

    for(i=1;i<=f.edge;i++)
    {
        cin>>u>>v;
       //   f.vec[u].push_back(v);
        //f.vec[v].push_back(u);
        f.ara[u][v]=1;
        f.ara[v][u]=1;

    }


    for(i=1;i<=f.node;i++)
    {
        res+=f.articulation(i);
    }

    cout<<"Number of articulation point is : "<<res<<endl;

    return 0;
}


