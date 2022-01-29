#include<bits/stdc++.h>
using namespace std;


int main(){
    int testCase;
    cin>>testCase;
    int n, ara[20];
    int least = 1, most = 5;
    int normal = 2;

    for(int test = 1; test<=testCase; test++){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        set <int> st;
        for(int i=0; i<n; i++){
            st.insert(ara[i]);
        }

        set <int> :: iterator it;
        int cnt= 0;
        int current = normal;

        for(it = st.begin(); it!= st.end(); it++){
            int dif = *it - current;
            cnt += (int) ceil(dif/5.0);
            current = *it;
        }

        printf("Case %d: %d\n", test, cnt);
    }

    return 0;
}

