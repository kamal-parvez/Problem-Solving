#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int get_num(char ch){
    return (int)ch - '0';
}



int main(){

    int t, n;
    string str;
    cin>>t;
    while(t){

        cin>>n;
        cin>>str;

        int cnt = 0;
        for(int i=0; i<n; i++){
            if(get_num(str[i])%2 == 1)
                cnt++;
        }
        //cout<<"Odd numbers:"<<cnt<<endl;

        int pt = -1;
        char num[3002];
        strcpy(num, "");

        if(cnt < 2){
            cout<<-1<<endl;
        }
        else{
            if(cnt % 2 != 0){
                for(int i=0;i<n; i++){
                    if(get_num(str[i]) % 2 == 1){
                        pt = i;
                        break;
                    }
                }
            }
            for(int i=0; i<n; i++){
                if(i !=pt && get_num(str[i]) % 2 != 0){
                    cout<<str[i];
                }
            }
            cout<<endl;
        }


        t--;
    }
    return 0;
}
