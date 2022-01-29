#include<bits/stdc++.h>
using namespace std;




int main(){
    int t;
    cin>>t;

    while(t){

        long long int x, y, a, b;
        cin>>x>>y>>a>>b;

        //long long int k = (long long int) ceil(time);

        long long int p = (long long int) floor((y-x)/(a+b*1.0));
        //cout<<y-x<<"   "<<p<<endl;

        if(x + p*a == y - p*b){
            cout<<p<<endl;
        }else{
            cout<<-1<<endl;
        }

        /*while(1){
            x += a;
            y -= b;
            time++;
            if(x == y){
                cout<<time<<endl;
                break;
            }
            else if(x>y){
                cout<<-1<<endl;
                break;
            }
        }*/

        t--;
    }
    return 0;
}
