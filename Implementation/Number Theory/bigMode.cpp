#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long int m;

long long int bigMod(long int base,long int pw)
{

    if(pw==0)
    {
        return 1;
    }

    if(pw%2==0)
    {
        long long int x = bigMod(base, pw/2);
        return (x*x) % m;
    }
    else
    {
        long long int y = bigMod(base, pw-1);
        long long int z = base % m;
        return (y * z) % m;
    }
}

int main()
{
    long int b, p;
    while(cin>>b>>p>>m){
        cout<<bigMod(b,p)<<endl;
    }

    return 0;
}
