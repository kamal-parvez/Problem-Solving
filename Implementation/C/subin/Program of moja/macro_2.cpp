#include<iostream>
using namespace std;

#define SWAP(a,b) { \
                    a ^=b;\
                    b ^=a;\
                    a ^=b;\
                }


int main()
{
    int a=4,b=5;

    cout<<"a = "<<a<<" and b = "<<b<<endl;
    SWAP(a,b)
    cout<<"a = "<<a<<" and b = "<<b<<endl;

    return 0;
}

