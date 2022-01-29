#include<bits/stdc++.h>
using namespace std;

/*int bin(long long int a, int ara[]){
    long long int c;
    int i = 0;

    while(a){
        c = a%2;
        a = a/2;
        ara[i] = c;
        i++;
    }

    return i;
}


int fun(int l1, int ara1[], int l2, int ara2[]){
    int j = l2-1;
    for(int i=l1-1; i>=0; i--){
        if(ara1[i] != ara2[j]){
            return -1;
        }
        j--;
    }
    return l2 - l1;
}*/


int main(){
    int t;
    cin>>t;
    int n;
    int ara[2000];
    int tem[2000];

    /*while(1){
        int a, b;
        cin>>a>>b;
        printf("%d\n", a^b);
    }*/

    while(t--){
        cin>>n;

        int res = -1;;

        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        int l = 1024;
        for(int i=1; i<=l; i++){
            res = i;
            for(int j=0; j<n; j++){
                tem[j] = ara[j] ^ i;
                //printf("%d  ", tem[j]);
            }
            //cout<<endl;
            //cin>>res;
            sort(ara, ara+n);
            sort(tem, tem+n);

            for(int j=0; j<n; j++){
                if(ara[j] != tem[j]){
                    res = -1;
                    break;
                }
            }
            if(res != -1){
                break;
            }
        }
        cout<<res<<endl;



        //cout<<res<<endl;
    }
}

