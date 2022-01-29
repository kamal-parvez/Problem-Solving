#include<iostream>
using namespace std;


int pali(int n)
{
    int a=n;
    int b,c=0;

    while(a)
    {
       b=a%10;
       a=a/10;
       c=c*10+b;
    }

    if(c==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n,cnt=0,i=0;

    cin>>n;

    while(cnt!=n)
    {
        int c=pali(i);
        cnt+=c;
        i++;
    }

    cout<<n<<"th palindrome is "<<i-1<<endl;

    return 0;
}
