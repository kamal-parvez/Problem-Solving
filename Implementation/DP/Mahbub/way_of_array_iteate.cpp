#include<iostream>
using namespace std;


int main()
{
    int n,i,way[100];

    cin>>n;

    way[0]=1;
    way[1]=1;

    for(i=2;i<=n;i++)
    {
        way[i]=way[i-1]+way[i-2];
    }

    cout<<way[n]<<endl;
    return 0;
}
