#include<iostream>
using namespace std;


int main()
{
    int n,x,m,t;

    while(1)
    {
        cin>>n;
        cin>>x;

        m=n&x;
        cout<<"And :"<<m<<endl;

        m=n|x;
        cout<<"Or :"<<m<<endl;

        m=n^x;
        cout<<"XOR :"<<m<<endl;

    }

    return 0;
}

