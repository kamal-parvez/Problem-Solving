#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,t,m,n,a,res;
    double c;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>m>>n;
        if(m==1 || n==1)
        {
            res=m*n;
        }

        else if(m==2 || n==2)
        {
            a=m*n;
            if(a<=6)
                res=4;
            else
                res=a/2;
        }
        else
        {
            c=ceil((m*n)/2.0);
            res=c;
        }

        cout<<"Case "<<i<<": "<<res<<endl;
    }

    return 0;
}
