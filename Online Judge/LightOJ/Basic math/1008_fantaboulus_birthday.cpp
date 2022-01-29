#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i;
    long long s,a,b,c,d,col,row;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>s;

        double f=(sqrt(s));
        double c=ceil(f/1.0);
        a=(int)c;
        if(a%2==0)
        {
            col=a;
            b=(a*a)-s+1;
            if(b<=a)
                row=b;
            else
            {
                row=col;
                col=a-(b%a);
            }

        }
        else
        {
            row=a;
            b=(a*a)-s+1;
            if(b<=a)
                col=b;
            else
            {
                col=row;
                row=a-(b%a);
            }

        }
        cout<<"Case "<<i<<": "<<col<<" "<<row<<endl;
    }
}
