#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int cmp(const void *a,const void *b)
{
    return (*(int *)b-*(int *)a);
}

int main()
{
    clock_t start_time,end_time;
    double tm;
    start_time=clock();

    int n=6,i;
    int ara[]={6,5,4,1,2,9};

    qsort(ara,n,sizeof(int),cmp);

    for(i=0;i<n;i++)
        cout<<ara[i]<<" ";
    cout<<endl;

    end_time=clock();

    tm=(double)(end_time-start_time)/CLOCKS_PER_SEC;

    cout<<"Time : "<<tm<<endl;

    return 0;
}
