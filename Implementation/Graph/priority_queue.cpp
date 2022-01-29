#include<bits/stdc++.h>
using namespace std;


int main()
{
    priority_queue < int > p;

    p.push(48589);
    p.push(467);
    p.push(600000);

    while(!p.empty())
    {
        cout<<p.top()<<endl;
        p.pop();
    }
}
