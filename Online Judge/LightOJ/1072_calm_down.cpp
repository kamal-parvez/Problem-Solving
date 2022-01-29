#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int t,i;
    double R,n,r,pie=acos(-1);

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>R>>n;

        if(n==2)
            r=R/2;
        else
            r=(pie*R)/(pie+n);

        cout<<"Case "<<i<<": "<<r<<endl;
    }

    return 0;
}
