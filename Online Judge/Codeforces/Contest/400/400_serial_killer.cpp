#include<iostream>
#include<string.h>
using namespace std;

struct serial
{
    char str1[12];
    char str2[12];
};


int main()
{
    int n,i;
    char s1[12],s2[12];
    struct serial s[1001];
    cin>>s1>>s2;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>s[i].str1;
        cin>>s[i].str2;
    }

    cout<<s1<<" "<<s2<<endl;

    for(i=0;i<n;i++)
    {
        if(strcmp(s1,s[i].str1)==0)
        {
            strcpy(s1,s[i].str2);
        }
        else
        {
            strcpy(s2,s[i].str2);
        }
        cout<<s1<<" "<<s2<<endl;
    }


    return 0;
}
