#include<iostream>
using namespace std;

int main()
{
    int ara[]={2,5,10,34,5,10,2,34,100};

    int res=ara[0];

    for(int i=1;i<9;i++)
    {
        res=res ^ ara[i];
    }

    cout<<res<<endl;

    return 0;
}

