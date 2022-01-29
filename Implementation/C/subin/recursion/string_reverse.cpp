#include<iostream>
#include<string.h>
using namespace std;

void rev(char str[],int l)
{

    if(l<1)
        return;

    cout<<str[l-1];

    rev(str,l-1);

}

int main()
{
    char str[100];
    cin>>str;
    int l=strlen(str);
    rev(str,l);

    return 0;
}
