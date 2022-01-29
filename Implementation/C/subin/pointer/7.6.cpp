#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    char *p="Bangladesh";

    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;

    cout<<*p<<endl;
    cout<<(char)(*p+1)<<endl;
    cout<<(char)(*p+2)<<endl;
    cout<<(char)(*p+3)<<endl;

    int *mal,*cal;

    int n=10;

    mal=(int *)malloc(sizeof(int)*n);
    cal=(int *)calloc(sizeof(int),n);

    for(int i=0;i<n;i++)
        cout<<mal[i]<<" ";
    cout<<endl;

    for(int i=0;i<n;i++)
        cout<<cal[i]<<" ";
    cout<<endl;

    return 0;
}

