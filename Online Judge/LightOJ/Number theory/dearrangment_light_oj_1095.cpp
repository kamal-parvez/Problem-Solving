#include<bits/stdc++.h>
using namespace std;

int m,k;

int dearrange(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    return (n-k-1) * (dearrange(n-k-2) + dearrange(n-k-1));
}


int main(){
    int t,i;
    int n;
    cin>>t;

    for(i=1;i<=t;i++){

        cin>>n>>m>>k;

        int res = dearrange(n);

        cout<<"Case "<<i<<": "<<res<<endl;

    }

    return 0;
}
