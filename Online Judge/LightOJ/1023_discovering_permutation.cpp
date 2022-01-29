#include<bits/stdc++.h>
using namespace std;


int cnt=0;

void per(char str[],int i,int n,int k)
{
    if(i==n)
    {
        cnt++;
       // if(cnt>k)
            //return;
        cout<<str<<endl;
        return;
    }

    for(int j=i;j<n;j++)
    {
        swap(str[i],str[j]);
        per(str,i+1,n,k);
        swap(str[i],str[j]);

        if(cnt>=k)
            break;
    }
}

int main()
{
    int t,i,n,k;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>n>>k;

        char str[26];

        for(int j=0;j<n;j++)
            str[j]='A'+j;

        str[n]=NULL;

        cout<<"Case "<<i<<": "<<endl;

        per(str,0,n,k);

        cnt=0;
    }

    return 0;
}
