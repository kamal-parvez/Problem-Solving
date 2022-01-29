#include<iostream>
#include<string.h>

using namespace std;


int pali(char str[],int lo,int hi)
{
    if(lo>=hi)
        return 1;
    if(str[lo]==str[hi])
        return pali(str,lo+1,hi-1);
    else
        return 0;
}

int main()
{
    char str[100];
    cin>>str;
    int l=strlen(str);
    int a=pali(str,0,l-1);
    if(a==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
