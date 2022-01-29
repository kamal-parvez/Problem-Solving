#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    scanf("%d", &t);

    int r1, c1, r2, c2;

    for(int i=1; i<=t; i++){

        cin>>r1>>c1>>r2>>c2;

        if(r1%2 == c1%2 ){
            if(r2%2 != c2%2){
                printf("Case %d: impossible\n", i);
            }
            else if(abs(r2 - r1) == abs(c2-c1)){
                printf("Case %d: 1\n", i);
            }
            else{
                printf("Case %d: 2\n", i);
            }
        }
        else{
            if(r2%2 == c2%2){
                printf("Case %d: impossible\n", i);
            }
            else if(abs(r2 - r1) == abs(c2-c1)){
                printf("Case %d: 1\n", i);
            }
            else{
                printf("Case %d: 2\n", i);
            }

        }

    }
    return 0;
}




