#include<iostream>
using namespace std;


int main()
{
    long long int x;
    int n=0,a;
    cin>>x;
    while(x!=0)
    {
        a=x%10;
        if(a==4 || a==7)
            n++;
        x=x/10;
    }
    if(n==4 || n==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
