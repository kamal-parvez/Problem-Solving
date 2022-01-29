#include<iostream>
using namespace std;

int main()
{
    int n;

    cin>>n;

    if(n && (n & (n-1))==0)
        cout<<n<<" is a power of 2"<<endl;

    else
        cout<<n<<" is not a power of 2"<<endl;

    return 0;
}
