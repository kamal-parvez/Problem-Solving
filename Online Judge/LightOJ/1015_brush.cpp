#include<iostream>
using namespace std;

int main()
{
    int t,i,n;
    int dust,res;
    cin>>t;

    for(i=1;i<=t;i++)
    {
        //cout<<endl;
        res=0;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>dust;

            if(dust>0)
                res+=dust;
        }

        cout<<"Case "<<i<<": "<<res<<endl;
    }

    return 0;
}
