#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    char str[102];

    while(t--){
        cin>>str;

        int l = strlen(str);
        string temp = "";
        temp += str[0];
        for(int i=1; i<l;){
            temp += str[i];
            i +=2;
        }
        cout<<temp<<endl;
    }
    return 0;
}
