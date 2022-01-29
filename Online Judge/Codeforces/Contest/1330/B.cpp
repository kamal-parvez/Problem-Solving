#include<bits/stdc++.h>
using namespace std;

struct node{
    int in;
    int col;
};


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
    int n;
    node ara[1002];

    vector < int > vi[12];
    int store[12];
    set < int > st;

    while(t){
        scanf("%d", &n);
        for(int i=1; i<=n; i++){
            scanf("%d", &ara[i].in);
        }

        int x;


        memset(store, 0, sizeof(store));


        for(int i=1; i<=n; i++){

            for(int j=1; j<=11; j++){
                x = gcd(store[j], ara[i].in);
                printf("st: %d   ara: %d   x: %d\n", store[j], ara[i].in, x);
                if(x>1){
                    ara[i].col = j;
                    st.insert(j);
                    store[j] = x;
                    break;
                }
            }
            printf("num : %d   col: %d\n", ara[i].in, ara[i].col);

        }

        for(int )


        printf("%d\n", st.size());


        for(int i=1; i<=n; i++){
            printf("%d", ara[i].col);
            if(i<n)
                printf(" ");

        }
        printf("\n");


        t--;
    }
    return 0;
}

