#include<iostream>
using namespace std;

int main()
{
    int a;

    while(cin>>a &&a)
    {
        if(a&1)
            cout<<"Odd"<<endl;

        else
            cout<<"Even"<<endl;
    }

    return 0;
}
