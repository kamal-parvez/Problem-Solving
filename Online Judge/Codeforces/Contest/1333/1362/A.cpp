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
    long long int a, b, c, d;
    int ara1[10000];
    int ara2[10000];
    int l1, l2;

    while(t--){
        cin>>a>>b;

        if(a == b){
            printf("0\n");
            continue;
        }

        /*l1 = bin(a, ara1);
        l2 = bin(b, ara2);

        for(int i=l1-1; i>=0; i--){
            printf("%d  ", ara1[i]);
        }
        printf("\n");
        for(int i=l2-1; i>=0; i--){
            printf("%d  ", ara2[i]);
        }
        cout<<endl;

        int res = -1;

        if(l1<l2){
            res = fun(l1, ara1, l2, ara2);
        }
        else{
            res = fun(l2, ara2, l1, ara1);
            //res = (int) ceil(res/3.0);
        }

        if(res != -1){
            res = (int) ceil(res/3.0);
        }*/
        int res = 0;

        if(a<b){
            while(1){
                a *= 2;
                res ++;
                if(a==b){
                    break;
                }
                else if(a>b){
                    res = -1;
                    break;
                }
            }

            if(res != -1){
                res = (int) ceil(res/3.0);
            }
        }
        else{
            while(1){
                if(a%2 != 0){
                    res = -1;
                    break;
                }
                a /= 2;
                res ++;
                if(a==b){
                    break;
                }
                else if(a<b){
                    res = -1;
                    break;
                }
            }

            if(res != -1){
                res = (int) ceil(res/3.0);
            }
        }

        cout<<res<<endl;
    }
}
