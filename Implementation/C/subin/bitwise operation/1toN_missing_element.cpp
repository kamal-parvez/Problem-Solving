#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int ara[]={2,5,10,1,3,4,9,7,8,11,14,12,13,15};
    int n=15;

    int res=ara[0];

    for(int i=1;i<n-1;i++)
    {
        res=res ^ ara[i];
    }

    int x=(n+1)%4;

    if(x==0)
    {
        cout<<res<<endl;
    }

    else if(n%4==0)
    {
        cout<<res-n<<endl;
    }

    else if((n-1)%4==0)
    {
        if(res&1==0)
            cout<<res+1<<endl;
        else
            cout<<res-1<<endl;
    }

    else
    {
        int a=res-(n+1);
        double b=ceil(a/4.0);
        int c=(b*4)-a;

        res=4*b+c;

        cout<<res<<endl;
    }

    return 0;
}


