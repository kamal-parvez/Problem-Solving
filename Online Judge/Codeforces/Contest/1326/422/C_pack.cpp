#include<bits/stdc++.h>
using namespace std;


int main()
{
    unsigned long long int l[20000],r[20000],cost[20000],dif[20000];
    long long int x,n,i,j,res=100000,c;

    cin>>n>>x;

    for(i=0;i<n;i++)
    {
        cin>>l[i]>>r[i]>>cost[i];
        dif[i]=r[i]-l[i]+1;
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(dif[i] + dif[j]==x  && (l[i]>r[j] || r[i]<l[j]))
            {
                c=cost[i]+cost[j];

                if(res>c)
                    res=c;
            }
        }
    }

    if(res==100000)
        cout<<"-1"<<endl;
    else
        cout<<res<<endl;

    return 0;
}
