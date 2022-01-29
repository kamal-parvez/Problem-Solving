#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t){

        string str;
        cin>>str;
        int l = str.size();
        int cnt = 0, first = -1, last = -2;
        for(int i=0; i<l; i++){
            if(str[i] == '1'){
                cnt++;
                last = i;
                if(first == -1)
                    first = i;
            }
        }

        cout<< (last-first)+1 - cnt<<endl;
        t--;
    }
    return 0;
}
