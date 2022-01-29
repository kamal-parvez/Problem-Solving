#include<iostream>
using namespace std;


int main()
{
    char str[]="AbdjJHDSsdhkjASkasd";

    char a;

    for(int i=0;str[i];i++)
    {
        a=str[i]&95;
        cout<<a;
    }

    cout<<endl;

    for(int i=0;str[i];i++)
    {
        a=str[i]|32;
        cout<<a;
    }


    return 0;
}
