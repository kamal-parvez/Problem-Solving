#include<bits/stdc++.h>
using namespace std;


long long int n;


int game(long long int p){
    if(p>=n)
        return 0;

    if(game(p*2)==0 || game(p*3)==0 || game(p*4)==0 || game(p*5)==0 || game(p*6)==0
       || game(p*7)==0 || game(p*8)==0 || game(p*9)==0){
        return 1;
    }

    return 0;
}

int main(){

    while(scanf("%lld", &n) == 1){
        if(game(1) == 1){
            printf("Stan wins.\n");
        }
        else{
            printf("Ollie wins.\n");
        }
    }
    return 0;
}
