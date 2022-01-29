
#include<iostream>
using namespace std;

void selection(int ara[],int lo,int hi)
{
    if(lo>=hi)
        return;

    if(ara[lo]>ara[lo+1])
        swap(ara[lo],ara[lo+1]);
    selection(ara,lo+1,hi);
    selection(ara,lo,hi-1);

}

int main()
{
    int ara[1000],i,n;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>ara[i];

    selection(ara,0,n-1);

    for(i=0;i<n;i++)
        cout<<ara[i]<<" ";

    return 0;
}



