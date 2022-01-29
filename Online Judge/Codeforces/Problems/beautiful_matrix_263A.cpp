#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,m,k,l;
    int ara[6][6];

    for(i=1;i<=5;i++)
        for(j=1;j<=5;j++)
        {
            cin>>ara[i][j];
            if(ara[i][j]==1)
            {
                m=i;
                k=j;
            }
        }

        k=abs(m-3)+abs(k-3);

    cout<<k<<endl;
    return 0;
}
