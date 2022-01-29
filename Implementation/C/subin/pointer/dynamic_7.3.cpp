#include<bits/stdc++.h>
using namespace std;


int main()
{
    int **ara,*num;
    int i,j,n,tc;

    cout<<"Enter the total classes : ";
    cin>>tc;

    num=(int *)malloc(sizeof(int)*tc);
    ara=(int **)malloc(sizeof(int *)*tc);

    for(i=0;i<tc;i++)
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

    for(i=0;i<tc;i++)
    {
        for(j=0;j<num[i];j++)
            cout<<ara[i][j]<<" ";
        cout<<endl;
    }

    free(ara);
    free(num);

    return 0;
}

