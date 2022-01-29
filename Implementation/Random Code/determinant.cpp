#include<iostream>
using namespace std;



int main()
{
    int m,n,i,j,k,l;
    double ara[40][40];

    double x;

    cin>>m>>n;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ara[i][j];
        }
    }

    l=0;

    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(ara[i][l]!=0)
            {
                x=ara[j][l]/(ara[i][l]*1.0);
                for(k=0;k<n;k++)
                {
                    ara[j][k]+=x*(-1)*ara[i][k];
                }

            }


            else
            {
                cout<<"The Determinant is zero"<<endl;
                return 1;
            }

             int a,b;
            for(a=0;a<m;a++)
            {
                for(b=0;b<m;b++)
                    cout<<ara[a][b]<<" ";

                cout<<endl;
            }
            cout<<x<<endl;

        }
        l++;
    }
    int res=1;
    for(i=0;i<m;i++)
    {
        res*=ara[i][i];
    }

    cout<<"The Determinant is : "<<res<<endl;

    return 0;
}
