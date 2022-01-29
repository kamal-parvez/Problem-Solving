#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int x, n;
    int ara[100001];

    while(t--){
        cin>>n>>x;

        int sum = 0;

        for(int i=0; i<n; i++){
            cin>>ara[i];
            sum += ara[i];
        }

        int res = 0;

        if(sum%x != 0){
            res = n;
            cout<<res<<endl;
            continue;
        }
        int temp = sum;
        res = n;
        for(int i=0; i<n; i++){
            sum -=ara[i];
            res--;
            if(sum%x!=0){
                break;
            }
        }

        sum = temp;
        int res1=n;

        for(int i=n-1; i>=0; i--){
            sum -=ara[i];
            res1--;
            if(sum%x!=0){
                break;
            }
        }
        //printf("%d  %d dfj\n", res, res1);
        res = max(res, res1);
        if(res == 0)
            res = -1;
        cout<<res<<endl;
    }
    return 0;
}
