#include<bits/stdc++.h>
using namespace std;


int main(){
    int t, x;
    cin>>t;
    //int ara[100000];
    while(t){
        int n;
        cin>>n;

        set < int > st;
        for(int i=0; i<n; i++){
            scanf("%d", &x);
            st.insert(x);
        }

        cout<<st.size()<<endl;




        t--;
    }
    return 0;
}

