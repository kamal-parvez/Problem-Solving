#include<bits/stdc++.h>
using namespace std;

int flag=0;


struct priority
{
    int a;
    int b;

    bool operator<(const priority &ob)const
    {
        if(flag==0)
            return a>ob.a;

        else
            return a<ob.a;
    }
} p;


int main()
{
    priority_queue<priority>pq;



    p.a=10;
    p.b=20;
    pq.push(p);

    p.a=30;
    p.b=10;
    pq.push(p);

    p.a=20;
    p.b=30;
    pq.push(p);

    p=pq.top();

    cout<<p.a<<" "<<p.b<<endl;

    flag=1;

    p.a=5;
    p.b=10;
    pq.push(p);

    p.a=40;
    p.b=10;
    pq.push(p);

    while(!pq.empty())
    {
        p=pq.top();
        pq.pop();

        cout<<p.a<<" "<<p.b<<endl;

    }



    return 0;
}
