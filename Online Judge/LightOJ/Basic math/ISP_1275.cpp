#include<bits/stdc++.h>
using namespace std;


int main(){
    int testCase;
    cin>>testCase;
    int n, c;

    for(int i=1; i<=testCase; i++){
        cin>>n>>c;

        if(n == 0){
            printf("Case %d: 0\n", i);
        }
        else{
            double temp = c/(2*n*1.0);
            int t1 = (int)floor(temp);
            int t2 = (int)ceil(temp);

            int factor1 = t1 * (c - t1 * n);
            int factor2 = t2 * (c - t2 * n);

            if(factor1 >= factor2){
                printf("Case %d: %d\n", i, t1);
            }else{
                printf("Case %d: %d\n", i, t2);
            }
        }
    }
    return 0;
}
