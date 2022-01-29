#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;

    while(t--){
        cin>>n;
        char str[60];
        cin>>str;

        int cnt = 0;
        //int flag = 0;

        stack < char > st;

        for(int i=0; i<n; i++){
            if(str[i] == '('){
                st.push(str[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    cnt++;
                }
            }

        }
        cout<<cnt<<endl;
    }
    return 0;
}

