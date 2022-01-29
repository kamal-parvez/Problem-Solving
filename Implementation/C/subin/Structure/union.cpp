#include<iostream>
using namespace std;


typedef union
{
    char ch;
    int x;
    int y;
}u;

int main()
{
    u uv;

    uv.ch='K';
    cout<<"uv.ch = "<<uv.ch<<endl;

    uv.x=13;
    cout<<"uv.x = "<<uv.x<<endl;
    cout<<"uv.ch = "<<uv.ch<<endl;

    uv.y=43;

    cout<<"uv.y = "<<uv.y<<endl;
    cout<<"uv.x = "<<uv.x<<endl;
    cout<<"uv.ch = "<<uv.ch<<endl;


    return 0;
}
