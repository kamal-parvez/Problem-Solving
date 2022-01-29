#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long int t,i,a,j,p,l,q,ara[10000],k=0,c=0,x;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>p>>l;

        cout<<"Case "<<i<<": ";

        k=0;
        q=p-l;

        if(q>l)
        {

            a=sqrt(q);

            for(j=1;j<=a;j++)
            {
                if(q%j==0)
                {
                    ara[k++]=j;
                    ara[k++]=q/j;
                }
            }



           /* for(j=0;j<k;j=j+2)
            {
                 if(ara[j]>l)
                {
                    cout<<ara[j]<<" ";
                }
            }
            if(a*a==q)
                j=k-3;
            else
                j=k-1;
            for(;j>0;j=j-2)
            {
                if(ara[j]>l)
                {
                    cout<<ara[j];
                    if(j>2)
                        cout<<" ";
                }
            }
            cout<<endl;*/

            for(j=0;j<k-1;j++)
            {
                for(x=j+1;x<k;x++)
                {
                    if(ara[j]>ara[x])
                        swap(ara[x],ara[j]);
                }
            }

           for(j=0;j<k-1;j++)
           {
               if(ara[j]>l)
                    cout<<ara[j]<<" ";
           }

           cout<<ara[j]<<endl;
        }
        else
            cout<<"impossible"<<endl;
    }

    return 0;
}
