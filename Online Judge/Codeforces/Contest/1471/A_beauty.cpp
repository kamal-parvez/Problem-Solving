#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[100002];
    int x;


    while(t--){
        cin>>n>>x;

        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        long long int mx = 0, mn = 0, sum = 0;


        for(int i=0; i<n; i++){
            mx += (int)(ceil((ara[i]*1.0)/x));
            sum += ara[i];
        }
        mn = (int)(ceil((sum*1.0)/x));

        cout<<mn<<" "<<mx<<endl;
    }
}
