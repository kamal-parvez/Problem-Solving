#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;


int n, m;
int ara[1002];



bool satisfy(int poll_len, int st){
    int seg = st, temp;
    //bool flag = false;
    for(int i=0; i<n; i++){
        //printf("%d\n", seg);
        if(seg<ara[i] || seg>=ara[i+1]){
            return false;
        }

        temp = (int) ceil((ara[i+1]-seg)/(poll_len*1.0));
        seg += (poll_len* temp);
    }
    return true;
}


bool fun(int len){

    bool flag = false;

    for(int i=0; i<ara[1]; i++){
        flag = satisfy(len, i);
        //cout<<"flag : "<<flag<<endl;
        if(flag == true){
            return flag;
        }
    }

    return flag;
}



int main() {

    cin>>n>>m;

    for(int i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }

    ara[n] = m+1;

    int lo = 1;
    int hi = 1000000, mid;

    bool flag;

    int ans = -1;

    while(lo<=hi){
        mid = (lo+hi)/2;
        //printf("lo : %d   mid: %d   hi : %d\n", lo, mid, hi);

        flag = fun(mid);

        if(flag == false){
            hi = mid - 1;
        }
        else{
            ans = mid;
            //cout<<"ANS : "<<ans<<endl;
            lo = mid + 1;
        }
    }

    cout<<ans<<endl;


    return 0;
}


