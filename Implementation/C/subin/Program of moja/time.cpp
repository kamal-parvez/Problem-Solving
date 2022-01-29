#include<iostream>
#include<time.h>
using namespace std;


void fun(int x,int n)
{
    x=n*2;
}

int main()
{
    int i,j,n,x=0;

    clock_t start_time,end_time;
    double time_elapsed;

    start_time=clock();

    n=12345678;

    for(i=0;i<100000000;i++)
    {
        for(j=0;j<10;j++)
        {
            x=n*2;
        }
    }
    end_time=clock();

    time_elapsed=(double)(end_time-start_time)/CLOCKS_PER_SEC;

    cout<<"Time : "<<time_elapsed<<endl;

    start_time=clock();

    n=12345678;
    for(i=0;i<100000000;i++)
    {
        for(j=0;j<10;j++)
        {
            fun(x,n);
        }
    }

    end_time=clock();

    time_elapsed=(double)(end_time-start_time)/CLOCKS_PER_SEC;

    cout<<"Time : "<<time_elapsed<<endl;

    return 0;
}
