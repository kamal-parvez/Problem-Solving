#include<bits/stdc++.h>
using namespace std;

int toInt(char ch){
    //int x = (int) (ch - '0');
    return (int) ch - '0';
}


int main(){
    int t;
    //cout<<toInt('4')<<endl;
    //cout<<toInt('0')<<endl;
    cin>>t;

    char str[200002];
    int cnt[10];

    while(t--){
        cin>>str;
        memset(cnt, 0, sizeof(cnt));
        int l = strlen(str);

        for(int i=0; i<l; i++){
            cnt[toInt(str[i])]++;
        }

        for(int i=0; i<=9; i++){
            for(int j=0; j<=9; j++){

            }
        }


    }
}
