#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    int n;
    int ara[105];

    while(t--){
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        int cnt1 = 0;
        int cnt2 = 0;

        for(int i=0; i<n; i++){
            if(ara[i] == 1){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }

        if(cnt2 % 2 == 1 && cnt1>=2 && (cnt1-2)%2 == 0){
            cout<<"YES"<<endl;
        }
        else if(cnt2 %2 == 0 && cnt1 % 2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

