#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,q,i,j;
    long long int low,hi,mid,n,x,y,z;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>q;

        low=1;
        hi=5*1000000000;

        int res=0;

        for(int k=1;k<500;k++)
        {
            mid=(low+hi)/2;

            x=0;

            for(j=5;j<=mid;)
            {
                x+=mid/j;
                j=j*5;
            }

            /*cout<<"hi : "<<hi<<endl;;
            cout<<"low : "<<low<<endl;;
             cout<<"mid : "<<mid<<endl;
            cout<<x<<endl;*/

            if(x<q)
            {
                low=mid+1;
            }
            else if(x>=q)
            {
                hi=mid-1;
            }
            if(x==q)
            {
                res=mid;
               // break;
            }


        }

        if(res!=0)
            cout<<"Case "<<i<<": "<<res<<endl;
        else
            cout<<"Case "<<i<<": impossible"<<endl;
    }

    return 0;
}
