#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int a, b;
    while(t){

        cin>>a>>b;
        int x = a%b;
        if(x == 0)
            cout<<x<<endl;
        else
            cout<<b - a % b<<endl;
        t--;
    }
    return 0;
}
