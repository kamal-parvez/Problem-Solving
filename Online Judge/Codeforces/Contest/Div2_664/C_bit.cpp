#include<bits/stdc++.h>
using namespace std;


int main(){

    int n, m;
    int a[202];
    int b[202];

    cin>>n>>m;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    int res = 0;
    int x, y, z;

    for(int i=0; i<n; i++){
        x = a[i] & b[0];
        z = res | x;
        //printf("z : %d\n", z);

        for(int j=1; j<m; j++){
            y = a[i] & b[j];
            //printf("y : %d\n", y);
            if((res | y) < z){
                z = res | y;
            }
        }
        res = z;
    }
    cout<<res<<endl;

    return 0;
}


