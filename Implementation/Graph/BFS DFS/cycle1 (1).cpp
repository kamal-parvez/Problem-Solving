#include <bits/stdc++.h>

using namespace std;
vector<int> adj[100];
bool visited[100];
bool recstack[100];
bool dfsutil(int s)
{
    visited[s]=true;
    recstack[s]=true;
    for(int i=0;i<adj[s].size();i++)
    {
        if(!visited[adj[s][i]])
        {
            if(dfsutil(adj[s][i],s))
                return true;
        }
        else if(recstack[adj[s][i]]==true)
            return true;
    }
    return false;
}

bool dfs(int v)
{
    for(int i=1;i<=v;i++)
    {
        if(!visited[i] && dfsutil(i,))
            return true;
    }
    return false;
}
void bfs(int s)
{
    queue<int> Q;
    Q.push(s);
    while(!Q.empty())
    {
        s=Q.front();
        visited[s]=true;
        cout<<s<<" ";
        Q.pop();
        for(int i=0;i<adj[s].size();i++)
        {
            if(!visited[adj[s][i]])
                Q.push(adj[s][i]);
        }
    }
}
int main()
{
    adj[1].push_back(2);
    //adj[1].push_back(3);
    //adj[2].push_back(1);
    adj[2].push_back(3);
    //adj[2].push_back(5);
    //adj[3].push_back(1);
    adj[3].push_back(4);
    //adj[4].push_back(2);
    adj[4].push_back(1);
    //adj[5].push_back(2);
    //adj[5].push_back(4);
    //adj[6].push_back(3);
    cout<<endl;
    if(dfs(5)==true)
        cout<<"Cyclic"<<endl;
    else cout<<"Acyclic"<<endl;
    return 0;
}


