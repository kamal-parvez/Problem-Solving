#include<bits/stdc++.h>
using namespace std;


int main()
{
    map < char , int > m;

    char str[100];

    int i;

    cin>>str;

    for(i=0;str[i];i++)
    {
        m[str[i]]++;
    }

    for(i=0;i<m.size();i++)
    {
        cout<<str[i]<<" "<<m[str[i]]<<endl;
    }
}
