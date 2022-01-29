#include<bits/stdc++.h>
using namespace std;


int main(){
    int testCase;
    cin>>testCase;
    int n, ara[20001];

    for(int test = 1; test<=testCase; test++){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        set <int> st;
        for(int i=0; i<n; i++){
            st.insert(abs(ara[i]));
        }

        set <int> :: iterator it;
        int sum = 0;

        for(it = st.begin(); it!=st.end(); it++){
            for(int j=n-1; j>=0; j--){
                if(*it == abs(ara[j])){
                    sum += ara[j];
                    break;
                }
            }
        }

        printf("Case %d: %d\n", test, sum);
    }

    return 0;
}
