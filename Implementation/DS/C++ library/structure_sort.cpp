#include<bits/stdc++.h>
using namespace std;

struct data
{
    char name[50];
    double height;
    double weight;
    double income;
};


bool compare(data a,data b)
{
    if(a.income==b.income)
    {
        if(a.height==b.height)
        {
            if(a.weight==b.weight)
                return strlen(a.name) < strlen(b.name);
            else
                return a.weight < b.weight;
        }
        else

            return a.height > b.height;
    }
    else
        return a.income > b.income;
}

int main()
{
    data a;
    vector < data > v;
    char n[50];
    double h,w,in;

    for(int i=0;i<5;i++)
    {
        cin>>n>>h>>w>>in;
        a.name=n;
        a.income=in;
        a.height=h;
        a.weight=w;
        v[i].push_back(a);
    }
}
