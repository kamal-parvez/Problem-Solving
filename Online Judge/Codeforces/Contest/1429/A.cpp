#include<bits/stdc++.h>
using namespace std;

int char_to_int(char ch){
    return (int)ch - '0';
}

int main(){
    int t;
    int n;

    cin>>t;

    char str[2000];

    while(t--){
        cin>>n;
        cin>>str;

        int even1 = 0;
        int even2 = 0;
        int odd1 = 0;
        int odd2 = 0;

        for(int i=0; i<n; i+=2){
            if(char_to_int(str[i])%2 == 0){
                even1++;
            }
            else{
                odd1++;
            }
        }
        for(int i=1; i<n; i+=2){
            if(char_to_int(str[i])%2 == 0){
                even2++;
            }
            else{
                odd2++;
            }
        }

        if(n%2==1 && odd1>0){
            cout<<1<<endl;
        }
        else if(n%2==1 && odd1==0){
            cout<<2<<endl;
        }
        else if(n%2==0 && even2>0){
            cout<<2<<endl;
        }
        else if(n%2==0 && even2==0){
            cout<<1<<endl;
        }
    }
    return 0;
}
