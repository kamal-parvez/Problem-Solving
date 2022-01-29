#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int x, r, a, b;
    long long int dis;
    double tm, temp;

    while(t--){
        cin>>x>>r>>a>>b;

        dis = 2*x*r;
        int cnt = 0;

        if(a>b){
            tm = dis/(a*1.0);
            temp = tm*b;
            cnt = (int) floor(temp/(2*r));
        }

        else{
            tm = dis/(b*1.0);
            temp = tm*a;
            cnt = (int) floor(temp/(2*r));
        }

        if(temp == dis)
                cnt--;

        cout<<cnt<<endl;

    }
    return 0;
}

