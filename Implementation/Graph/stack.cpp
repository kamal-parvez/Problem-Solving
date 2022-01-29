#include<bits/stdc++.h>
using namespace std;


int main()
{
    stack < int > st;
    st.push(200);
    st.push(400);
    st.push(3000);
    st.push(500);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
