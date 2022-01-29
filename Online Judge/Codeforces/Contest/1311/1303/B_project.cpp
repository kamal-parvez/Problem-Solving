#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t){

        long long int n, g, b;
        cin>>n>>g>>b;

        long long int high = (long long int) ceil(n/2.0);
        long long int low = n - high;
        //cout<<high<<endl;
        long long int days = 0;


        long long int x = (int)ceil((high*1.0)/g);
        //cout<<x<<endl;
        if(low<((x-1)*b)){
            days = high + (x-1)*b;
        }
        else{
            days = high + (x-1)*b + (low - (x-1)*b);
        }

        /*while(n){
            if(a == 0){
                if(n<g){
                    days += n;
                    n = 0;
                }else{
                    days += g;
                    n -= g;
                    high -= g;
                }
                a = 1;
            }
            else if(a == 1){
                if(low<b){
                    days += low;
                    low = 0;
                }else{
                    days += b;
                    n -= b;
                    low -= b;
                }
                a = 0;
            }
        }*/

        cout<<days<<endl;

        t--;
    }
    return 0;
}

