#include<iostream>
using namespace std;


void per(int a[],int l,int h)
{
    int i;
    if(l>h)
    {
        for(i=0;i<=h;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    for(i=l;i<=h;i++)
    {
        swap(a[i],a[l]);
        per(a,l+1,h);
        swap(a[i],a[l]);
    }
}


int main()
{
    int n,i,a[100];

    cin>>n;

    for(i=0;i<n;i++)
        a[i]=i+1;

    per(a,0,n-1);

    return 0;
}
