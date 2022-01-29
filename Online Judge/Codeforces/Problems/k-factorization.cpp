#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int n,k,i,j=0;

    cin>>n>>k;

    int t=sqrt(n);

    for(i=1;i<=t;i++)
    {
        if(n%i==0)
        {
            ara[j++]=i;
            ara[j++]=n/i;
        }
    }
    j--;

    if(j==1 && k>1)
        cout<<"-1"<<endl;

    else if(j==k)
    {
        for(i=1;i<j;i++)
            cout<<ara[i]<<" ";
        cout<<ara[j]<<endl;
    }

    else if(k<j)
    {
        int c=1;
        int a=j/k;
        int b=j%k;
        for(i=1;i<=a+b;i++)
            c*=ara[i];
        cout<<c<<" ";
        for(i=a+b+1;i<=j;)
        {
            c=1;
            for(k=1;k<=a;k++)
            {
                c*=ara[i++];
            }
            cout<<c;
            if(i<j)
                cout<<" ";
            else
                cout<<endl;
        }
    }

    return 0;
}
