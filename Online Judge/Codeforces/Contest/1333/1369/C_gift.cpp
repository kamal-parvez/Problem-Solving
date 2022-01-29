#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n, k;
    int gift[200001];
    int frnd[200001];

    while(t--){
        cin>>n>>k;

        for(int i=0; i<n; i++){
            cin>>gift[i];
        }

        int b = 0, ce = 0;

        for(int i=0; i<k; i++){
            cin>>frnd[i];
            if(frnd[i]>1){
                b++;
            }
            else{
                ce++;
            }
        }

        sort(gift, gift+n);
        sort(frnd, frnd+k);

        long long int res = 0;

        int a=0;
        //printf("b: %d   ce: %d\n", b, ce);

        for(int i=n-1; i>=0; i--){
            if(a<ce){
                res += (2*gift[i]);
            }
            else{
                res += gift[i];
            }

            a++;
            //printf("res : %lld\n", res);
            if(a==k){
                a = i;
                break;
            }
        }


        for(int i=0; i<k; i++){
            if(frnd[i] == 1){
                continue;
            }
            a -= (frnd[i]-1);

            res += gift[a];
        }

        cout<<res<<endl;

    }

    return 0;
}
