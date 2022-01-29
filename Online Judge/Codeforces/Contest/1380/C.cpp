#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n, x;
    int ara[100001];

    while(t--){
        cin>>n>>x;

        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        sort(ara, ara+n);
        /*for(int i=n-1; i>=0; i--){
            printf("%d  ", ara[i]);
        }
        cout<<endl;*/

        int cnt = 0, a = 0, b = -1;

        for(int i=n-1 ; i>=0; i--){

            if(a==0){
                a = 1;
                b = ara[i];
            }

            if(a*b >= x){
                cnt++;
                a = 0;
                b = -1;
            }
            else{
                if(i==0)
                    break;
                a++;
                b = ara[i-1];
            }

        }
        printf("%d\n", cnt);

    }
    return 0;
}

