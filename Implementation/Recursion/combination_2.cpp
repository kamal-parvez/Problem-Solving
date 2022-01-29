#include<bits/stdc++.h>
using namespace std;

void jhamela(int arr[],int i,int j,int n,int r){

    if(i==r)
    {
        int k;
        for(k=0;k<r;k++)
            cout<<arr[k]<<" ";
        cout<<endl;
        return;
    }

    int m;
    for(m=j;m<=n;m++)
    {
        arr[i]=m;
        jhamela(arr,i+1,m+1,n,r);
    }

}

void cmb(int n,int r)
{
    int i,arr[r];
    for(i=0;i<r;i++)
        arr[i]=i+1;
    jhamela(arr,0,1,n,r);
}


int main()
{
    int n,r;
    cin>>n>>r;
    cmb(n,r);
    return 0;
}
