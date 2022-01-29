#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct gf
{

};
int main()
{
    int n,i,j,k;
    int pr[100002];
    int co[100002];
    cin>>n;

    memset(co,0,sizeof(co));

    for(i=0;i<n;i++)
    {
        pr[i]=i+2;
    }

    if(n<3)
        cout<<"1"<<endl;
    else
        cout<<"2"<<endl;

    for(i=2;i<n;i=i+2)
    {
        co[i]=2;
    }

    co[0]=1;
    int l=4;

    for(i=1;i<n;i=i+2)
    {
        if(co[i]==0)
        {
            co[i]=1;
            j=i+l+2;
            while(j<n)
            {
                if(co[j]==0)
                {
                    co[j]=2;
                }
                j=j+2+l;
            }

        }

        l+=4;
    }

    for(i=0;i<n;i++)
        cout<<co[i]<<" ";
    cout<<endl;
}
