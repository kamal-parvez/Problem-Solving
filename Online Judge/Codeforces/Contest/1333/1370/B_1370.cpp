#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    int n;
    int ara[3000];
    int even[2000];
    int odd[2000];

    while(t--){
        cin>>n;
        for(int i=1; i<=2*n; i++){
            cin>>ara[i];
        }

        int j=0, k=0;

        for(int i=1; i<=2*n; i++){
            if(ara[i]%2 == 0){
                even[j] = i;
                j++;
            }
            else{
                odd[k] = i;
                k++;
            }
        }

        if(j%2==0){
            int cnt = 0;
            for(int i=0; i<j;){
                printf("%d %d\n", even[i], even[i+1]);
                i +=2;
                cnt++;
                if(cnt==n-1)
                    break;
            }

            for(int i=0; i<k-2;){
                printf("%d %d\n", odd[i], odd[i+1]);
                i +=2;
                cnt++;
                if(cnt==n-1)
                    break;
            }
        }
        else{
            int cnt = 0;
            for(int i=0; i<j-1;){
                printf("%d %d\n", even[i], even[i+1]);
                i +=2;
                cnt++;
                if(cnt==n-1)
                    break;
            }

            for(int i=0; i<k-1;){
                printf("%d %d\n", odd[i], odd[i+1]);
                i +=2;
                cnt++;
                if(cnt==n-1)
                    break;
            }
        }





    }
    return 0;
}

