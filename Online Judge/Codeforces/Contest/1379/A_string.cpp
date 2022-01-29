#include<bits/stdc++.h>
#include<string.h>
using namespace std;

bool checkSub(string str1, string  str2){
    int x = str1.find(str2);
    cout<<x<<endl;
}


int main(){
    int t;
    cin>>t;


    int n;
    char str[100];
    char sub[7];
    sub = "abacaba";

    while(t--){
        cin>>n;
        cin>>str;

        int flag = 0;

        for(int i=0; i<n; i++){
            int k = i;
            for(int j=0; j<7; j++){
                if(str[k] == sub[j]){
                    k++;
                }
                else if(str[k] == '?'){
                    str[k] = sub[j];
                }
            }
        }
    }
}
