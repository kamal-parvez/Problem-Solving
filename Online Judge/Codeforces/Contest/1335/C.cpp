#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    int n;
    int ara[200000];
    int cnt[200001];

    while(t--){
        cin>>n;

        set < int > st;

        memset(cnt, 0, sizeof(cnt));

        for(int i=0; i<n; i++){
            scanf("%d", &ara[i]);
            st.insert(ara[i]);
            cnt[ara[i]]++;
        }

        int mx = cnt[1];

        for(int i=2; i<=n; i++){
            mx = max(mx, cnt[i]);
        }

        int l = st.size() ;

        if(l>mx){
            cout<<mx<<endl;
        }
        else if(l == mx){
            cout<<l-1<<endl;
        }
        else{
            cout<<l<<endl;
        }

    }
    return 0;
}
