#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    char str[102];

    while(t--){
        cin>>str;

        int l = strlen(str);

        char ch = str[0];
        int flag = 0;

        for(int i=1; i<l; i++){
            if(str[i] != ch){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            for(int i=0; i<l; i++){
                if(ch == '1'){
                    cout<<"10";
                }
                else{
                    cout<<"01";
                }
            }
            cout<<endl;
        }
        else{
            cout<<str<<endl;
        }



    }
    return 0;
}
