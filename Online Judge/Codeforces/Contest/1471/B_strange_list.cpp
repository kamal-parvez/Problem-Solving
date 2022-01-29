#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[100002];
    int cp[100002];
    int x;


    while(t--){
        cin>>n>>x;

        for(int i=0; i<n; i++){
            cin>>ara[i];
            cp[i] = ara[i];
        }


        int odd_flag = 0;
        int pos = 0;

        for(int i=0; i<n; i++){
            if(ara[i] % x != 0){
                odd_flag = 1;
                pos = i;
                break;
            }
        }
        //printf("cp: %d\n",cp[0]);
        //cin>>pos;
        long long int sum = 0;
        long long int rest = 0;

        if(odd_flag == 0){
            int flag = 0;
            while(1){
                //cout<<"test"<<endl;
                for(int i=0; i<n; i++){
                    //cout<<"bbbbbbbbbbb"<<endl;
                    if(cp[i] == 0){
                        flag = 1;
                        break;

                    }

                    if(cp[i] % x == 0){
                        sum += ara[i];
                        cp[i] = cp[i] / x;
                        //printf("cp: %d\n",cp[i]);
                    }
                    else{
                        sum += ara[i];
                        cp[i] = 0;
                    }

                    //printf("cp: %d\n",cp[i]);
                }
                if(flag == 1)
                    break;

            }

        }

        else if(odd_flag == 1){

            for(int i=0; i<n; i++){
                sum += ara[i];
                //cout<<sum<<endl;
                if(i<pos){
                    sum += ara[i];
                }
            }

        }


        cout<<sum<<endl;
    }
}

