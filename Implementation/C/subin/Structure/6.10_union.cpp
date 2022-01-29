#include<iostream>
using namespace std;


typedef struct{
    char ch;
    int n;
    char str[16];
}s;

typedef union{
    char ch;
    int n;
    char str[16];
}u;

int main()
{
    s sv;
    u uv;

    cout<<"size of structure variable : "<<sizeof(sv)<<endl;
    cout<<"size of union variable : "<<sizeof(uv)<<endl;

    return 0;

}
