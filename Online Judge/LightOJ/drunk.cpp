#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    int t,m,i,j,flag;
    char a[12],b[12];

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>m;
        flag=0;
        for(j=1;j<=m;j++)
        {
            cin>>a;
            cin>>b;
            if(strcmp(a,"wine")==0)
                flag=1;
            if(strcmp(a,"soda")!=0 && strcmp(a,"water")!=0)
                flag=1;
        }

        if(flag==0)
        {
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        else
             cout<<"Case "<<i<<": No"<<endl;
    }
}
