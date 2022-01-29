#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int x, y, n;

    while(t--){
        cin>>x>>y>>n;
        int a = n/x;
        //printf("a:%d\n", a);
        if(a*x+y>n){
            cout<<(a-1)*x+y<<endl;
        }
        else{
            cout<<a*x+y<<endl;
        }
    }
    return 0;
}

