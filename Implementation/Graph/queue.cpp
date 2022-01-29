#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue < string > q;
    q.push("this is kp");
    q.push("he is so lazy");
    q.push("hell yea");

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}
