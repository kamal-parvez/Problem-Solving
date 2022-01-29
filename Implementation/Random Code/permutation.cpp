#include<iostream>
using namespace std;

void per(int a[],int l,int h)
{
    if(l>h)
    {
        int i;
        for(i=0;i<=h;i++)
             cout<<a[i]<<" ";
        cout<<endl;
        return;
    }

    int i;
    for(i=l;i<=h;i++)
    {
        swap(a[l],a[i]);

        per(a,l+1,h);

        swap(a[l],a[i]);

    }

}


int main()
{
    int n;

    cin>>n;

    int a[100],i;
    for(i=0;i<n;i++)
        a[i]=i+1;
    per(a,0,n-1);
    return 0;
}
