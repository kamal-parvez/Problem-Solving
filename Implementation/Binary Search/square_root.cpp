#include<iostream>
using namespace std;


int main()
{
    int n,j,count=100;
    double i,mid,hi,lo;
    cin>>n;
    hi=1000000;
    lo=0;

    for(j=0;j<count;j++)
    {
         //cout<<lo<<" "<<mid<<" "<<hi<<endl;
        mid=(lo+hi)/2.0;
        i=mid*mid;
        if(i==n)
            break;
        else if(i>n)
        {
            hi=mid-1;
        }
        else
        {
            lo=mid+1;
        }

    }
    cout<<mid<<endl;
    return 0;
}
