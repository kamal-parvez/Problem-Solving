#include<bits/stdc++.h>
using namespace std;

void cmb(int n,int r);
void bye(int arr[],int i,int j,int n,int r);



void bye(int arr[],int i,int j,int n,int r)
{
    if(i==r)
    {
        int m;
        for(m=0;m<r;m++)
            cout<<arr[m]<<" ";
        cout<<endl;
        return;
    }
    int k;
    for(k=j;k<=n;k++)
    {
        arr[i]=k;
        bye(arr,i+1,k+1,n,r);
    }
}

void cmb(int n,int r)
{
    int arr[r+1];
    int i;
    for(i=0;i<r;i++)
        arr[i]=i+1;
    bye(arr,0,1,n,r);
}

int main()
{
    int n,r;

    cin>>n>>r;

    cmb(n,r);
    return 0;
}
