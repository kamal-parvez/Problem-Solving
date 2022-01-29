#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define White 5
#define Black 6
#define Gray 7

struct edges{
    int a;
    int b;
    char type;
};

struct edges res[5000];

struct depth{

    int node,edg,time,mark,flag;
    int color[100];
    int ara[100][100];
    int com[100];

    void dfs(){

        int i,u;

        for(i=0;i<node;i++){
            color[i]=White;
        }

        mark=0;
        flag=0;

        for(i=0;i<node;i++){

            if(color[i]==White){

                flag++;
                dfs_visit(i);
            }
        }

    }

    void dfs_visit(int u){

        color[u]=Gray;
        com[u]=flag;

        for(int i=0;i<node;i++){

            if(color[i]==White && ara[u][i]==1){

                res[mark].a=u;
                res[mark].b=i;
                res[mark].type='T';
                mark++;
                dfs_visit(i);
            }
            else if(color[i]==Gray && ara[u][i]==1){

                res[mark].a=u;
                res[mark].b=i;
                res[mark].type='B';
                mark++;
            }

            else if(color[i]==Black && ara[u][i]==1 && com[i]==flag){

                res[mark].a=u;
                res[mark].b=i;
                res[mark].type='F';
                mark++;
            }

            else if(color[i]==Black && ara[u][i]==1 && com[i]!=flag){

                res[mark].a=u;
                res[mark].b=i;
                res[mark].type='C';
                mark++;
            }

        }

        color[u]=Black;
    }
};

bool operator<(const edges& lhs, const edges& rhs)
{
   // if(lhs.a==rhs.a)
        //return lhs.b < rhs.b;
   // else
        return lhs.a < rhs.a;
}


int main(){

    depth dep;

    int i,j,u,v,t;
    memset(dep.ara,-1,sizeof(dep.ara));

    cin>>dep.node>>dep.edg;

    for(i=0;i<dep.edg;i++){
        cin>>u>>v;
        dep.ara[u][v]=1;
    }

    dep.dfs();

   // for(i=0;i<dep.mark;i++){

      //  cout<<res[i].a<<"  "<<res[i].b<<" ("<<res[i].type<<")"<<endl;
   // }

    sort(res, res + dep.mark);

    //cout<<"After sorting...."<<endl;

    for(i=0;i<dep.mark;i++){

        cout<<res[i].a<<" "<<res[i].b<<" ("<<res[i].type<<")"<<endl;
    }

    return 0;
}
