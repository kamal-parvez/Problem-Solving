#include<bits/stdc++.h>
using namespace std;


int main()
{
    int *ara[5],num[5];
    int i,j,n;

    for(i=0;i<5;i++)
    {
        cout<<"Enter the number of students of class "<<i+1<<" : ";
        cin>>n;
        num[i]=n;
        ara[i]=(int *)malloc(sizeof(int)*n);

        cout<<"Enter the marks for 1 to "<<n<<" students for class "<<i+1<<endl;

        for(j=0;j<n;j++)
            cin>>ara[i][j];
    }

    cout<<"Output is**********"<<endl;

    for(i=0;i<5;i++)
    {
        for(j=0;j<num[i];j++)
            cout<<ara[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
