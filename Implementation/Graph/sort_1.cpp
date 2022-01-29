#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector < int > v;
    v.push_back(89);
    v.push_back(1);
    v.push_back(9);
    v.push_back(4);
    v.push_back(2);
    v.push_back(80);
    v.push_back(20);

    sort(v.begin(),v.end());

    for(int i = 0;i < v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
