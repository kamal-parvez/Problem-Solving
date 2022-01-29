#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int a, b, n;
    string str;
    while(t--){
        cin>>n>>a>>b;

        str = "";

        char ch = 'a';

        for(int k=0; k<b; k++){
            str += ch;
            ch++;
        }
        ch--;

        for(int j=0; j<a-b; j++){
            str += ch;
        }

        for(int i=a; i<n; i++){
            str += str[i%a];
        }

        cout<<str<<endl;
    }
    return 0;
}

