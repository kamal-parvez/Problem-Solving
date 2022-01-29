#include<iostream>
using namespace std;


int main()
{
    int n,a[101],b[101];
    int i,v=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }

    for(i=0;i<n;i++)
    {
        if((b[i]-a[i])>=2)
            v++;
    }
    cout<<v<<endl;
    return 0;
}
