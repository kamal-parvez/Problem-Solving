#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[100];


    while(t--){
        cin>>n;

        int even = 0, odd = 0;

        for(int i=0; i<n; i++){
            cin>>ara[i];
            if(ara[i]%2==0)
                even++;
            else
                odd++;
        }

        if(even%2==0 && odd%2==0){
            printf("YES\n");
        }
        else{
            sort(ara, ara+n);

            int flag = 0;

            for(int i=0; i<n-1; i++){
                if(ara[i+1]-ara[i] == 1){
                    flag = 1;
                    printf("YES\n");
                    break;
                }
            }

            if(flag == 0){
                printf("NO\n");
            }

        }
    }
    return 0;
}


