#include<bits/stdc++.h>
using namespace std;


struct graph
{
    vector<int>v[200];
    int flag;
    int mat[200][200];
    int vis[200], level[200],path[200];

    graph()
    {
        flag=0;
        memset(vis,0,sizeof vis);
        memset(level,0,sizeof level);
        memset(path,0,sizeof path);
    }

    void bfs(int source)
    {
        queue<int>q;
        q.push(source);

        while(!q.empty())
        {
            int u=q.front();
            q.pop();

            for(int i=0; i<v[u].size(); i++)
            {
                int node=v[u][i];

                if(vis[node]==0)
                {
                    vis[node]=1;
                    level[node]=level[u]+1;


                    path[node]=u;
                    q.push(node);
                }
            }
        }
    }

    void bicolor(int source)
    {
        queue<int>q;
        q.push(source);

        while(!q.empty())
        {
            int u=q.front();
            q.pop();

            for(int i=0; i<v[u].size(); i++)
            {
                int node=v[u][i];

                if(vis[node]==0)
                {
                    vis[node]=1;
                    level[node]=level[u]+1;


                    path[node]=u;
                    q.push(node);
                }
                else
                {
                   // printf("vsited %d %d\n",u,node);
                    if(level[u]%2==level[node]%2)
                    {
                        flag=1;
                        return ;
                    }
                }
            }
        }

    }

    bool check_edge1(int u, int w)
    {
        return mat[u][w];
    }

    bool check_edge2(int u, int w)
    {
        for(int i=0; i<v[u].size(); i++)
        {
            if(v[u][i]==w) return true;
        }

        return false;
    }

};
int main()
{
    graph g;
    int n,m,x,y,i,u,w,opt;

    printf("How many vertices and edges?\n");
    scanf("%d %d",&n,&m);

    printf("Input the vertices\n");
    for(i=0; i<m; i++)
    {
        scanf("%d %d", &x, &y);

        g.mat[x][y]=1;
        g.mat[y][x]=1;
        g.v[x].push_back(y);
        g.v[y].push_back(x);
    }


    printf("Press 1 for checking edge by matrix\nPress 2 for checking edge by list\n");
    printf("Press 3 for checking if path exists\n");
    printf("Press 4 for printing the distance of the shortest path\n");
    printf("Press 5 for checking bi color\n");
    while(1)
    {



        scanf("%d",&opt);

        if(opt==1)
        {
            printf("Insert the two vertices\n");
            scanf("%d %d",&u,&w);

            if(g.check_edge1(u,w)==1)
                printf("There exists an edge between %d and %d\n",u,w);
            else
                printf("No edges\n");

        }
        else if(opt==2)
        {
            printf("Insert the two vertices\n");

            scanf("%d %d",&u,&w);
            if(g.check_edge2(u,w)==1)
                printf("There exists an edge between %d and %d\n",u,w);
            else
                printf("No edges\n");

        }
        else if(opt==3)
        {
            printf("Insert the two vertices\n");

            scanf("%d %d",&u,&w);
            g.level[u]=0;
            g.bfs(u);
            if(g.level[w]==0)
                printf("No path between %d and %d\n",u,w);
            else printf("Exist path between %d and %d\n",u,w);


        }
        else if(opt==4)
        {
            printf("Insert the two vertices\n");

            scanf("%d %d",&u,&w);
            g.level[u]=0;
            g.bfs(u);
            printf("Distance between %d and %d is %d\n",u,w, g.level[w]);



        }
        else
        {
            g.bicolor(1);
            if(g.flag==1) printf("Not bicolor\n");
            else printf("bicolor\n");

        }


    }

    return 0;
}

