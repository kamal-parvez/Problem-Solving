#include<bits/stdc++.h>
using namespace std;


#define SZ 100

struct vertex
{
    int u;
    int v;
    int w;

    bool operator<(const vertex &ob)const
    {
        return w<ob.w;
    }

} ver;


struct kruskal
{
    int node,edge;

    vector<vertex>vec;
    vector<vertex>tree;

    int represent[SZ];

    void input()
    {
        freopen("input_krus.txt","r",stdin);

        cin>>node>>edge;
        int i,u,v,w;

        for(i=0; i<edge; i++)
        {
            cin>>u>>v>>w;
            ver.u=u;
            ver.v=v;
            ver.w=w;

            vec.push_back(ver);
        }
    }


    int find(int r)
    {
        if(represent[r]==r)
            return r;

        else{
            represent[r]=find(represent[r]);
            return represent[r];
        }

        //return (represent[r] == r) ? r : find(represent[r]);
    }

    int krus()
    {
        int i,cost=0,cnt=0;

        for(i=0; i<node; i++)
        {
            represent[i]=i;
        }

        sort(vec.begin(),vec.end());

        for(i=0; i<vec.size(); i++)
        {
            ver = vec[i];

            int u = find(ver.u);
            int v = find(ver.v);

            if(u!=v)
            {
                represent[u]=v;
                tree.push_back(ver);
                cnt++;
                cost+=ver.w;

                // cout<<cost<<endl;

                if(cnt==node-1)
                    break;
            }
        }

        return cost;
    }


    void tree_print()
    {
        for(int i=0; i<tree.size(); i++)
        {
            cout<<tree[i].u<<" "<<tree[i].v<<" "<<tree[i].w<<endl;
        }
    }
};

int main()
{
    kruskal kl;
    kl.input();
    cout<<kl.krus()<<endl;

    kl.tree_print();

    return 0;
}
