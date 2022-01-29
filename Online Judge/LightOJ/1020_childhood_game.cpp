#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i;
    long long int n;
    char name[10];

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>n;
        cin>>name;

        cout<<"Case "<<i<<": ";

        if(strcmp(name,"Alice")==0)
        {
            double a = (n-1)/3.0;

            if(a-(int)a==0)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }
        else
        {
            if(n%3==0)
                cout<<"Alice"<<endl;
            else
                cout<<"Bob"<<endl;
        }
    }

    return 0;
}
