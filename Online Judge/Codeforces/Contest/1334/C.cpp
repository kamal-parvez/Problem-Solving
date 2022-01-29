#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    long long int n;
    long long int a[300000];
    long long int b[300000];
    long long int i;
    while(t--){
        cin>>n;

        for(i=0; i<n; i++){
            cin>>a[i]>>b[i];
        }

        long long int tar=100000000000000, in = -1, bul = -1;

        for(i=0; i<n; i++){
            if(tar>a[i]){
                in = i;
                tar = a[i];
                bul = b[i];
            }
            else if(tar==a[i] && bul<b[i]){
                in = i;
                bul = b[i];
            }
        }

        //printf("in: %d   a: %d  b: %d\n", in, tar, bul);

        i = in;
        long long int next;
        bul = 0;
        bul += a[i];

        for(i=in; i<n-1; i++){
            if(b[i]<a[i+1]){
                bul += (a[i+1] - b[i]);
            }
        }
        if(in>0){
            if(b[n-1]<a[0]){
                bul += (a[0] - b[n-1]);
            }

            for(i=0; i<in-1; i++){
                if(b[i]<a[i+1]){
                    bul += (a[i+1] - b[i]);
                }
            }
        }

       /* while(1){
            if(i==n){
                i=0;
            }
            if(i==n-1){
                next = 0;
            }
            else{
                next = i+1;
            }


            i++;

            if(i==in)
                break;
        }*/

        cout<<bul<<endl;
    }
    return 0;
}

