#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,me,lift,res;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>me>>lift;

        int c=abs(me-lift);

        res=(c+me)*4+19;

        cout<<"Case "<<i<<": "<<res<<endl;
    }
    return 0;
}
