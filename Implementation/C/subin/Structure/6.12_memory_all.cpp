#include<iostream>
using namespace std;

typedef struct
{
    int n;
    double d;
    char c;
}s1;

typedef struct
{
    double d;
    int n;
    char c;
    char x;
}s2;

int main()
{
    cout<<sizeof(char)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(s1)<<endl;
    cout<<sizeof(s2)<<endl;
}
