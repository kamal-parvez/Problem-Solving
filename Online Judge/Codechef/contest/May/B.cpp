#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n, q;
    char str[100000];
    int virus[26];

    int pen;

    while(t--){
        cin>>n>>q;
        cin>>str;
        //cout<<str<<endl;

        int cnt = 0, tem, c;
        int mx = -1;
        memset(virus, 0, sizeof(virus));

        for(int i=0; i<n; i++){
            tem = (int) str[i] - 'a';
            virus[tem]++;
        }

        for(int i=0; i<26; i++){
            //cout<<(char)('a'+i) <<"   "<<virus[i]<<endl;
            mx = max(mx, virus[i]);
            if(virus[i] != 0)
                cnt++;
        }


        while(q--){
            cin>>c;

            pen = 0;

            for(int i=0; i<26; i++){
                if(c<virus[i]){
                    pen += virus[i]-c;
            }

            printf("%d\n", pen);
        }


    }
    return 0;
}

