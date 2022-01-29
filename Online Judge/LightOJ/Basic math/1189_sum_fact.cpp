#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    scanf("%d", &t);
    unsigned long long int n;
    unsigned long long int temp, mx, sz = 20;
    int ara[24];
    mx = 1;

    unsigned long long int j;
    for(j=1; j<=sz; j++){
            mx *= j;
    }

    //unsigned long long int me = 1;

    for(int i=1; i<=t; i++){

        //me *= i;

        cin>>n;
        //n = me;

        temp = mx;
        //cout<<mx<<endl;
        memset(ara, 0, sizeof(ara));

        long long int flag = -1;

        for(j=sz; j>0; j--){
            if(n>=temp){
                ara[j] = 1;
                n -= temp;
                if(flag == -1)
                    flag = j;
            }
            else{
                ara[j] = 0;
            }
            temp /= j;
            //cout<<n<<"  "<<temp<<endl;
        }

        /*for(int j=1; j<=sz; j++){
            printf("%d  ", ara[j]);
        }
        cout<<endl;*/


        if(n !=0){
            printf("Case %d: impossible\n", i);
        }
        else{
            printf("Case %d: ", i);
            for(j=1; j<=sz; j++){
                if(ara[j] == 1){
                    printf("%d!", j);
                    if(j != flag)
                        printf("+");
                }

            }
            printf("\n");
        }


    }
    return 0;
}



