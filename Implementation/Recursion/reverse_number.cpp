#include<iostream>
using namespace std;

void rever(int n)
{
    if(n==0)
        return;
    int a=n%10;
    cout<<a;
    rever(n/10);

}


int main()
{
    int n;
    cin>>n;
    rever(n);
    cout<<endl;
    return 0;
}
