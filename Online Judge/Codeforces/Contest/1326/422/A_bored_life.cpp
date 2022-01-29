#include<iostream>
using namespace std;


int main()
{
    int a,b,c,res=1;

    cin>>a>>b;

    c=min(a,b);

    for(int i=1;i<=c;i++)
        res*=i;

    cout<<res<<endl;

    return 0;
}
