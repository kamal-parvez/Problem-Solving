#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n;
    int ara[300002];

    while(t--){
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        int cnt = 0;

        int b = n-1;
        int a = n-2;
        int c = -1;

        while(a>=0){
            if(c == -1 && ara[a] < ara[b]){
                ara[a] = -1;
                a = a-1;
            }
            else if(c == -1 && ara[a] > ara[b]){
                c = b;
                b = a;
                a = a-1;
            }
            else if(c != -1 && ara[a] < ara[b]){
                ara[b] = -1;
                b = c;
                c = -1;
            }
            else if(c != -1 && ara[a] > ara[b]){
                c = b;
                b = a;
                a = a-1;
            }

        }
        /*for(int i=0; i<n; i++){
            printf("%d  ", ara[i]);
        }
        cout<<endl;*/
        a = -1;
        b = -1;
        int flag = 0;

        for(int i=n-1; i>=0; i--){
            if(ara[i] == -1){
                continue;
            }
            if(b == -1){
                b = ara[i];
                continue;
            }
            if(a == -1){
                a = ara[i];
            }
            if(ara[a] > ara[b]){
                flag = 1;
                break;
            }
            if(ara[a] < ara[b]){
                a = -1;
            }
        }


        if(flag == 1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }


    }
    return 0;
}

