#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector < int > vec[10];

    int u,v,i,j,node,edge;

    cin>>node>>edge;

    for(i=1;i<=edge;i++)
    {
        cin>>u>>v;
        vec[u].push_back(v);
    }

    //cin>>u;
    int cnt=0;

    int in[100],out[100];

    for(int x=1;x<=node;x++)
    {
        cnt=0;

        for(i=1;i<=node;i++)
        {
            for(j=0;j<=vec[i].size();j++)
            {
                if(vec[i][j]==x)
                {
                    cnt++;
                }
            }
        }

        in[x]=cnt;
        out[x]=vec[x].size();
    }

    //cout<<"In degree : "<<cnt<<endl;
   // cout<<"Out degree : "<<vec[u].size()<<endl;

   for(i=1;i<=node;i++)
   {
       cout<<"Degree of node no : "<<i<<endl;
        cout<<"In degree : "<<in[i]<<endl;
        cout<<"Out degree : "<<out[i]<<endl;
   }

    return 0;
}
