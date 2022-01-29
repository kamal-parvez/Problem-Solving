//48
#include<bits/stdc++.h>
using namespace std;


int main(){
    string str;
    cin>>str;

    int l = str.size();
    int mx = -1, cnt = 0;
    for(int i=0; i<l; i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            cnt++;
        }
        else{
            mx = max(mx, cnt);
            cnt = 0;
        }
    }

    cout<<mx<<endl;

    return 0;
}
