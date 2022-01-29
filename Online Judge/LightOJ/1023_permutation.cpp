#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,n,k;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>n>>k;

        char str[30];

        for(int j=0;j<n;j++)
        {
            str[j]='A'+j;

        }

        str[n]=NULL;

        int cnt=0;

        cout<<"Case "<<i<<":"<<endl;

        do{
            cout<<str<<endl;
            cnt++;
            if(cnt>=k)
                break;
        }while(next_permutation(str,str+n));

    }

    return 0;
}

