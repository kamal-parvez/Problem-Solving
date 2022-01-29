#include<bits/stdc++.h>
using namespace std;

long long int ara[20];
int limit = 19;

void fact(){
    long long int res = 1;
    ara[0] = 1;
    for(int i = 1; i<=limit; i++){
        res *= i;
        ara[i] = res;
    }
}

int main(){
    int testCase;
    cin>>testCase;
    long long int n;
    fact();

    for(int test = 1; test<=testCase; test++){
        cin>>n;

        set <int> st;

        for(int i=limit; i>=0; i--){
            //printf("fact of %d -- %lld\n", i, temp);

            if(n >= ara[i]){
                //printf("n : %lld    --- fact of %d : %lld\n", n, i, temp);
                st.insert(i);
                n -= ara[i];
            }
            //printf("n -- %lld\n", n);
        }



        if(n == 0){
            set <int> :: iterator it;

            /*for(it=st.begin(); it!= st.end(); it++){
                printf("%d\n", *it);
            }*/

            printf("Case %d: ", test);
            for(it=st.begin(); it!= prev(st.end(), 1); it++){
                printf("%d!+", *it);
            }
            printf("%d!\n", *it);
        }
        else{
            printf("Case %d: impossible\n", test);
        }
    }

    return 0;
}


