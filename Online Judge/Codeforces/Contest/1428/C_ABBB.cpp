#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    char str[200000];

    while(t--){
        cin>>str;

        int b_count = 0;
        int a_count = 0;
        int cnt = 0;
        int length = strlen(str);

        for(int i=0; i<length; i++){
            if(str[i]=='A'){
                a_count++;
                cnt++;
            }
            else if(str[i]=='B' && a_count==0 && b_count==0){
                b_count++;
                cnt++;
            }
            else if(str[i]=='B' && a_count>0){
                a_count--;
                cnt--;
            }
            else if(str[i]=='B' && b_count>0){
                b_count--;
                cnt--;
            }
            //printf("a: %d     b: %d    cnt: %d\n", a_count, b_count, cnt);
        }
        cout<<cnt<<endl;
    }
    return 0;
}
