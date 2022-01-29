#include<bits/stdc++.h>
using namespace std;


struct priority
{
    int w;
    string city1;
    string city2;

    bool operator<(const priority &ob)const
    {
        return w<ob.w;
    }
} hmm;

struct vertex
{
    int w;
    string city;
    bool vis;
} ver;

freopen("1041.txt","r",stdin);
cin>>road;

string city1,city2;
int w,i;

for(i=0; i<road; i++)
{
    cin>>city1>>city2>>w;
    ver.city=city2;
    ver.w=w;
    ver.vis=false;

    mp[city1].push_back(ver);

    ver.city=city1;
    ver.w=w;
    ver.vis=false;

    mp[city2].push_back(ver);
}
st=city1;
}

void spanning(string src)
{

    //iterator itr = mp.find(src);
    vector<vertex>::iterator vitr;

    for(vitr = mp.find(src)->second.begin(); vitr!=mp.find(src)->second.end(); vitr++)
    {
        if(vitr->vis==true)continue;
        //continue;

        hmm.city1=src;
        hmm.city2=vitr->city;
        hmm.w=vitr->w;

        pq.push(hmm);

    }

    cout<<"huhu"<<endl;

    while(1)
    {
        if(pq.empty())return;
        hmm=pq.top();
        pq.pop();

        cout<<"cool down"<<endl;
        cout<<hmm.city1<<" "<<hmm.city2<<" "<<hmm.w<<endl;
        if(vis.lower_bound(vitr->city)->second==true)
            continue;
        else
            break;


    }

    cout<<"hehe"<<endl;
    cost+=hmm.w;

    spanning(hmm.city2);
}

void output()
{

    map<string, vector<vertex> > :: iterator itr;
    vector<vertex>:: iterator vitr;


    for(itr=mp.begin(); itr!=mp.end(); itr++)
    {
        cout<<itr->first<<endl;
        for(vitr = itr->second.begin(); vitr != itr->second.end(); vitr++)
        {
            cout<<vitr->city<<" "<<vitr->w<<endl;
        }
        cout<<endl;

    }

    spanning(st);

    cout<<"cost =="<<cost<<endl;
}

};

int main()
{
    construction cn;
    cn.input();
    cn.output();

    return 0;
}
