
#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector < int > v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    //v.push_back(4);



    do{
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;//" "<<v[3]<<endl;
    }while(next_permutation(v.begin(),v.end()));

    int ara[3]={1,2,3};

    do{
        cout<<ara[0]<<" "<<ara[1]<<" "<<ara[2]<<endl;
    }while(next_permutation(ara,ara+3));

    return 0;
}
