#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    double a,b,c,d;
    cin>>t;
    for(i=1; i<=t; i++)
    {
		double res ;
        cin>>a>>b>>c>>d;

        if(b==0 && d==0)
            res=0;

        else
        {
            int m = (c-a)*(c-a)-b*b-d*d;
            int x = (4*b*b*d*d-m*m)/(4*(c-a)*(c-a));
            x=sqrt(x);

            res = .5*x*(a+c);
        }

        printf("Case %d: %.10f\n",i,res);
    }

    return 0;
}
