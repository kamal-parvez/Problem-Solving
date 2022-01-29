#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int cnt;

    for(int i=1; i<=t; i++){
        cin>>n;

        int a;
        cnt = 0;

        map < int, int > mp;

        for(int j=0; j<n; j++){
            cin>>a;
            mp[a]++;
        }

        map < int, int > :: iterator it;

        for(it=mp.begin(); it!=mp.end(); it++){
            a = it->first;
            //printf("%d  %d\n", a, mp[a]);

            cnt += (a+1) * (int)ceil(mp[a]/(a+1.0));
        }

        printf("Case %d: %d\n", i, cnt);

    }
    return 0;
}

