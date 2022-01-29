#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;

    while(t--){
        cin>>n;

        int a = n/4;
        int b = n%4;

        for(int i=0; i<n-a-1; i++){
            cout<<9;
        }
        if(b==0)
            cout<<9;
        else
            cout<<8;
        /*else if(b==2)
            cout<<2;
        else if(b==3)
            cout<<4;*/
        for(int i=0; i<a; i++){
            cout<<8;
        }
        cout<<endl;
    }
    return 0;
}

