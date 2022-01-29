#include<iostream>
using namespace std;

int com(int n,int r)
{
    if(n==r)
        return 1;
    if(r==1)
        return n;
    return com(n-1,r)+com(n-1,r-1);
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<com(n,r)<<endl;
    return 0;
}
