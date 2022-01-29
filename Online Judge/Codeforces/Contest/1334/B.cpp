#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    int n, x;
    int ara[100000];
    while(t--){
        cin>>n>>x;
        for(int i=0; i<n; i++){
            scanf("%d", &ara[i]);
        }

        sort(ara, ara+n);

        /*for(int i=0; i<n; i++){
            printf("%d  ", ara[i]);
        }
        cout<<endl;*/

        double sum=0, temp, ans = n;

        for(int i=n-1; i>=0; i--){
            sum+= ara[i];
            temp = (sum*1.0)/(n-i);
            if(temp < x){
                ans = n-i-1;
                break;
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}
