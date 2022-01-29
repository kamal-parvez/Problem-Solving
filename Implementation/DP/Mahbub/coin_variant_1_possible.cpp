#include<bits/stdc++.h>
using namespace std;

int possible[1000];


int main()
{
    int k,n,i,j;
    int coin[10];

    cout<<"Enter the amount : ";
    cin>>n;

    cout<<"Enter the number of coins : ";
    cin>>k;

    cout<<"Enter the coins :"<<endl;
    for(i=0;i<k;i++)
        cin>>coin[i];

    possible[0]=1;

    for(i=1;i<=n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(i>=coin[j])
                possible[i]=possible[i-coin[j]];
            if(possible[i]==1)
                break;
        }
    }


    if(possible[n]==1)
        cout<<"Possible"<<endl;

    else
        cout<<"Not Possible"<<endl;

    /*for(i=1;i<=n;i++)
        cout<<possible[i]<<" ";*/


    return 0;
}
