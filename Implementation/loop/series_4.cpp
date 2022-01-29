#include<iostream>
using namespace std;


int main()
{
    int n,i,j,k=1,sum=0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum+=k;
            k++;
        }
    }

    cout<<"sum is "<<sum<<endl;
    return 0;
}

