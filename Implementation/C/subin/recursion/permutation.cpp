#include<bits/stdc++.h>
using namespace std;


int main()
{
    int ara[]={1,2,3,4,5};

    /*do{
        cout<<ara[0]<<" "<<ara[1]<<" "<<ara[2]<<" "<<ara[3]<<" "<<ara[4]<<endl;
    }while(next_permutation(ara,ara+5));*/

    vector < int > v;

    for(int i=0;i<5;i++)
        v.push_back(i+1);

    do{
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<endl;
    }while(next_permutation(v.begin(),v.end()));

    return 0;
}
