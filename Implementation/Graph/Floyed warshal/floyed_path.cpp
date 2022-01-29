#include<bits/stdc++.h>
using namespace std;


#define SZ 1000
#define inf 100000

struct floyed
{
    int node,edge;
    int matrix[SZ][SZ];
    int next[SZ][SZ];

    void input()
    {
        cin>>node>>edge;

        int i,u,v,j,w;

        for(i=0; i<node; i++)
        {
            for(j=0; j<node; j++)
            {
                matrix[i][j]=inf;
                next[i][j]=j;
                if(i==j)matrix[i][j]=0;

            }
        }

        for(i=0; i<edge; i++)
        {
            cin>>u>>v>>w;
            matrix[u][v]=w;
        }

    }

    void warshal()
    {
        int i,j,k;

        for(i=0; i<node; i++)
        {
            for(j=0; j<node; j++)
            {
                for(k=0; k<node; k++)
                {
                    if(matrix[j][k] > matrix[j][i] + matrix[i][k])
                    {
                        matrix[j][k] = matrix[j][i]+matrix[i][k];
                        next[j][k] = next[j][i];
                    }
                }
            }
        }
    }


    void find_path(int i,int j)
    {
        if(i==j)
        {
            cout<<i<<" ";
            return;
        }

        cout<<i<<" ";

        find_path(next[i][j],j);

    }

    void output()
    {
        int i,j;

        for(i=0; i<node; i++)
        {
            cout<<"Shortest path from "<<i<<"th node ***"<<endl;

            for(j=0; j<node; j++)
            {
				cout<<"to "<<j<<"th node : ";

                if(matrix[i][j]!=inf)
                {
                    find_path(i,j);
                    cout<<endl;
                    cout<<"cost=="<<matrix[i][j]<<endl;
                }
                else{
					cout<<"impossible"<<endl;
                }
            }
            cout<<endl;
        }
    }
};


int main()
{
    floyed fl;
    fl.input();
    fl.warshal();
    fl.output();

    return 0;
}

