#include<bits/stdc++.h>
using namespace std;

bool comparator(int a, int b){
    return a>b;
}

int main(){
    int t;
    cin>>t;

    int n;
    int ara[200000];

    while(t--){
        cin>>n;

        for(int i=0; i<n; i++){
            scanf("%d", &ara[i]);
        }

        sort(ara, ara+n, comparator);

        /*for(int i=0; i<n; i++){
            printf("%d  ", ara[i]);
        }
        cout<<endl;*/

        int cnt = 0;
        int a = 0, temp;

        for(int i=0; i<n;i++){

            if(ara[i]>n){
                continue;
            }

            for(int j=i; j<n; j++){

            }

            if(ara[i]-ara[i+1] == 1){
                temp = ara[i];
                a++;
            }
            else{
                a = 0;
                continue;
            }
            if(a == temp){
                cnt++;
            }

        }

        cout<<cnt<<endl;

    }
    return 0;
}
