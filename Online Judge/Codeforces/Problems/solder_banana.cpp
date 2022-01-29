#include<iostream>
using namespace std;


int main()
{
    int w,k,i=0;
    long long int n,sum;
    cin>>k>>n>>w;
    sum=(w*(2*k+(w-1)*k))/2;
    if(sum>n)
        cout<<sum-n<<endl;
    else
        cout<<i<<endl;

    return 0;
}
