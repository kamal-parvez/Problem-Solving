#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int n;
    int ara[200000];
    while(t--){
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        long long int sum = 0;
        int temp;
        int flag;

        if(ara[0] > 0)
            flag = 1;
        else
            flag = 0;

        temp = ara[0];

        for(int i=1; i<n; i++){
            if(flag == 1){
                //printf("11111\n");
                if(ara[i] > 0){
                    temp = max(temp, ara[i]);
                }
                else{
                    //cout<<"temp: "<<temp<<endl;
                    sum += temp;
                    temp = ara[i];
                    flag = 0;
                    //printf("tenm: %d\n", temp);
                }
            }
            else if(flag == 0){
                //printf("000000\n");
                if(ara[i] < 0){
                    //printf("tenm: %d\n", temp);
                    if(temp < ara[i])
                        temp = ara[i];
                    //printf("tenm: %d  %d\n", temp, ara[i]);
                }
                else{
                    //cout<<"temp: "<<temp<<endl;
                    sum += temp;
                    temp = ara[i];
                    flag = 1;
                }

            }
        }
        sum += temp;

        cout<<sum<<endl;
    }
    return 0;
}
