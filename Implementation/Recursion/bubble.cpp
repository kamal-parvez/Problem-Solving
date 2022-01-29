#include<iostream>
using namespace std;

void bubble(int ara[],int n)
{
    if(n==1)
        return;

    int i;

    for(i=0;i<n;i++)
    {
        if(ara[n-1]<ara[n-2])
        swap(ara[n-1],ara[n-2]);
    bubble(ara,n-1);
    }

}

int main()
{
    int ara[1000],i,n;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>ara[i];

    bubble(ara,n);

    for(i=0;i<n;i++)
        cout<<ara[i]<<" ";

    return 0;
}


