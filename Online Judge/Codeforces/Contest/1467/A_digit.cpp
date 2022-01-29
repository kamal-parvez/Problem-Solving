#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    int n;

    while(t--){
        cin>>n;
        int num = 9;
        int flag = 1;

        int i;

        for(i=0; i<n; i++){
            cout<<num;
            num--;
            if(num < 0){
                num = 1;
                i++;
                break;
            }
        }
        //cout<<i<<endl;
        //i--;
        for(; i<n; i++){
           cout<<num;
           num++;

           if( num == 10){
                num = 0;
           }
        }
        cout<<endl;
    }
}
