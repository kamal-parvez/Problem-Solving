#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector < int > v;

    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    reverse(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    int ara[5]={2,5,8,1,3};
    reverse(ara,ara+5);

    for(int i=0;i<5;i++)
        cout<<ara[i]<<" ";

    return 0;
}
