#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[101];
    int i,j,m=0;
    cin>>n;

    int c[101],sum=0;
    memset(c,0,sizeof(c));

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        c[a[i]]++;
    }

    int kp=0;

    for(i=100;i>0;i--)
    {
        if(c[i]>=1)
        {
            for(j=0;j<c[i];j++)
            {
                kp+=i;
                m++;
                if(kp>sum/2)
                    break;
            }
        }
        if(kp>sum/2)
                    break;
    }

    cout<<m<<endl;
    return 0;

}
