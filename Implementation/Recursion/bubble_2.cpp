#include<iostream>
using namespace std;

void bubble(int ara[],int lo,int hi)
{
    if(lo>=hi)
        return;

    if(ara[lo]>ara[lo+1])
        swap(ara[lo],ara[lo+1]);
    bubble(ara,lo+1,hi);
    bubble(ara,lo,hi-1);

}

int main()
{
    int ara[1000],i,n;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>ara[i];

    bubble(ara,0,n-1);

    for(i=0;i<n;i++)
        cout<<ara[i]<<" ";

    return 0;
}



