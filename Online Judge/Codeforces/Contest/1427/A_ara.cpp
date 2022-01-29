#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[52];

    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        int pos = 0;
        int neg = 0;

        for(int i=0; i<n; i++){
            if(ara[i]>0){
                pos += ara[i];
            }
            else{
                neg += ara[i];
            }
        }

        sort(ara, ara+n);

        if(pos == (-1 * neg)){
            printf("NO\n");
        }
        else{
            printf("YES\n");

            if(pos > (-1 * neg)){
                for(int i=n-1; i>=0; i--){
                    cout<<ara[i];
                    if(i!=0)
                        printf(" ");
                }
            }
            else{
                for(int i=0; i<n; i++){
                    cout<<ara[i];
                    if(i!=n-1)
                        printf(" ");
                }
            }
            cout<<endl;

        }


    }
    return 0;
}
