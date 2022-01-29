#include<bits/stdc++.h>
using namespace std;


int main()
{
    int ara[167],i,n;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    sort(ara,ara+n);

    for(i=0;i<n;i++)
        cout<<ara[i]<<" ";
    cout<<endl;

    return 0;
}
