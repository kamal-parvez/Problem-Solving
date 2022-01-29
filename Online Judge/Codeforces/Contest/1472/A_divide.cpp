#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    int w, h, n;

    while(t--){
        cin>>w>>h>>n;

        int cnt1 = 0;
        int cnt2 = 0;

        while(w%2==0){
            w /= 2;
            cnt1++;
        }
        while(h%2==0){
            h /= 2;
            cnt2++;
        }

        if(pow(2, cnt1) * pow(2, cnt2) >= n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
