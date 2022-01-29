#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int n;
    int a[100000], b[100000];
    while(t--){
        scanf("%d", &n);
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        for(int i=0; i<n; i++){
            scanf("%d", &b[i]);
        }

        int flag = 0;
        int one=0, mi=0;

        for(int i=0; i<n; i++){

            if(a[0] != b[0]){
                flag = 1;
                break;
            }

            else if(b[i]>a[i]){
                if(one == 0){
                    flag = 1;
                    break;
                }
            }
            else if(b[i]<a[i]){
                if(mi == 0){
                    flag = 1;
                    break;
                }
            }

            if(a[i] == -1)
                mi = 1;
            else if(a[i] == 1)
                one = 1;


        }

        if(flag == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
