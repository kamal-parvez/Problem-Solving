#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
    int c;

    while(b){
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}


int main(){
    int t;
    cin>>t;

    long long int a, b, q;
    long long int l, r, x, y;

    long long int cnt;

    while(t--){

       cin>>a>>b>>q;

       int temp = gcd(a, b);
       temp = (a*b)/temp;
       //printf("gcd : %d\n", temp);

        for(int i=1; i<=q; i++){
            cin>>l>>r;

            cnt = 0;

            if(r>=max(a,b)){
                x = r/temp;
                y = l/temp;
                cnt = (x-y) * max(a,b);
                cnt = (r-l)+1 - cnt;
                //cout<<cnt<<endl;

                if(y>0 && y*temp+max(a,b) >= l){
                    cnt -= (y*temp+max(a,b)-l);
                }
                if(x>0 && x*temp+max(a,b) > r){
                    cnt += (x*temp+max(a,b) - r-1);
                }
            }



            if(l<b && r>=b)
                cnt -= (b-l);



            cout<<cnt;
            if(i<q)
                printf(" ");
            else
                printf("\n");

        }

    }
    return 0;
}

