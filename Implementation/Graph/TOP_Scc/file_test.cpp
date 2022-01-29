#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


int main()
{
    int a,b,u,v;
    FILE *fp;

    fp= fopen("in.txt","r");

    fscanf(fp,"%d %d",&a,&b);
    fscanf(fp,"%d %d",&u,&v);

    cout<<a<<" "<<b<<endl;
    cout<<u<<" "<<v<<endl;

    return 0;
}
