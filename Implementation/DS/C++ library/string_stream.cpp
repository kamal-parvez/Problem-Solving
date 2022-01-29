#include<bits/stdc++.h>
using namespace std;


int main()
{
    char line[1000];

    while(gets(line))
    {
        stringstream ss(line);

        int t;
        vector < int > v;

        while(ss>>t)
            v.push_back(t);

        sort(v.begin(),v.end());

        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }

    return 0;
}
