#include<bits/stdc++.h>
using namespace std;


struct breadth
{
    int ara[1004][1004],n,l[1005],e;
    vector < int > v[100];

    void bfs(int src)
    {
        queue < int > q;
        l[src]=0;
        q.push(src);

         while(!q.empty())
         {
            int t = q.front();
            q.pop();

            for(int i=0;i<n;i++)
            {
                if(ara[t][i]==1 && l[i]==-1)
                {
                    l[i]=l[t]+1;
                    q.push(i);
                }
            }
         }
    }
};


int main()
{
    int t;
    cin>>t;
    breadth ds;
    int i,j,a,b,u,v;

    for(int x=0;x<t;x++)
    {
        cout<<endl;
        cin>>ds.n>>ds.e;

        for(i=0;i<ds.e;i++)
        {
            cin>>a>>b;
            ds.ara[a][b]=1;
            ds.ara[b][a]=1;
            //ds.v[a].push_back(b);
        }

        memset(ds.l,-1,sizeof(ds.l));

        ds.bfs(0);

        for(i=1;i<ds.n;i++)
        {
            cout<<ds.l[i]<<endl;
        }

        cout<<endl;

    }


    return 0;
}


