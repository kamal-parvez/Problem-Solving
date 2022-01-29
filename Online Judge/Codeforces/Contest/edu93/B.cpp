#include<bits/stdc++.h>
#include <iostream>
#include <set>
#include <iterator>
using namespace std;


int main(){
    int t;
    cin>>t;

    char str[102];
    int ara[102];

    while(t--){
        cin>>str;

        int cnt = 0;
        int j=0;

        int l = strlen(str);

        for(int i=0; i<l; i++){
            if(str[i] == '1'){
                cnt++;
            }
            else if(cnt>0){
                //cout<<"L"<<cnt<<endl;
                ara[j] = cnt;
                cnt = 0;
                j++;
            }

            if(i==l-1 && cnt>0){
                //cout<<"L"<<cnt<<endl;
                ara[j] = cnt;
                j++;
            }
        }

        cnt = 0;
        sort(ara, ara+j);

        for(int i=j-1; i>=0; i-=2){
            cnt += (ara[i]);
        }

        cout<<cnt<<endl;
    }
    return 0;
}

