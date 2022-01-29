#include<bits/stdc++.h>
using namespace std;

int a;
void per(int ara[],int l,int h)
{
    int i;
    if(l>h)
    {
        for(i=0;i<=h;i++)
            cout<<ara[i]<<" ";
        cout<<endl;
        a++;
        return;
    }

    for(i=l;i<=h;i++)
    {
        swap(ara[i],ara[l]);
        per(ara,l+1,h);
        swap(ara[i],ara[l]);
    }
}

int main()
{
    int ara[]={1,2,3,4,5};
    per(ara,0,4);

    cout<<a<<endl;

    return 0;
}
