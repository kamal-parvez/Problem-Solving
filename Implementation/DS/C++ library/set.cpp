#include<bits/stdc++.h>
using namespace std;


int main()
{
    set < int > s;
    int x;

    for(int i=0;i<=6;i++)
    {
        cin>>x;
        s.insert(x);
    }

    set < int > :: iterator it;

    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";

    cout<<endl;

    cout<<s.size()<<endl;
    return 0;
}
