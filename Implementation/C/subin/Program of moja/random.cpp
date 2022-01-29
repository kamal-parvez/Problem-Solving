#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    for(int i=0;i<5;i++)
    {
        int a=rand();
        cout<<a<<endl;
    }

    return 0;
}
