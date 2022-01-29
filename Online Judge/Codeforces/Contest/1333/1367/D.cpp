#include<bits/stdc++.h>
using namespace std;

int fun(char a){
    int a = (int) (a - 'a');
    return a;
}


int main(){
    int t;
    cin>>t;

    int ara[60];
    char str[60];
    int cnt[26];
    int n, k;

    while(t--){
        cin>>str;
        cin>>n;
        memset(cnt, 0, sizeof(cnt));

        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        int l = strlen(str);

        for(int i=0; i<l; i++){
            cnt[fun(str[i])]++;
        }

        sort(ara, ara+n);

        for(int i=1; i<=m; i++){

        }




    }
    return 0;
}



