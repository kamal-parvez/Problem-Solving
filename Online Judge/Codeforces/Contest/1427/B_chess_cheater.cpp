#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int n, k;
    char str[100002];
    int ara[100002];

    while(t--){
        cin>>n>>k;
        cin>>str;
        //cout<<str<<endl;

        int point = 0;
        int lose = 0;

        for(int i=0; i<n; i++){

            if(i>0 && str[i]=='W' && str[i-1]=='W'){
                point += 2;
            }
            else if(str[i]=='W'){
                point +=1;
            }
            if(str[i]=='L'){
                lose++;
            }
        }
        if(k==0){
            cout<<point<<endl;
            continue;
        }

        //printf("point: %d\n", point);

        int j = 0;
        int dif = 0;
        int flag = 0;
        memset(ara, 0, sizeof(ara));

        for(int i=0; i<n; i++){
            if(str[i]=='L'){
                dif++;
            }
            else{
                ara[j] = dif;
                dif = 0;
                j++;
            }
        }
        if(j!=0){
            sort(ara+1, ara+j);
        }


        /*cout<<"Ara :  ";
        for(int i=1; i<j; i++){
            printf("%d  ", ara[i]);
        }
        cout<<endl;*/


        for(int i=1; i<j; i++){
            if(ara[i]==0)
                continue;

            if(ara[i]<=k){
                point += (ara[i]*2+1);
                k -= ara[i];
                lose -= ara[i];
            }
            else{
                point += (k*2);
                k = 0;
                break;
            }

        }

        //printf("point: %d\n", point);

        if(lose == n && k<=lose){
            point += (k*2-1);
        }
        else if(lose == n && k>lose){
            point += (lose*2-1);
        }
        else if(k !=0 && lose>=k){
            point += (k*2);
        }
        else if(k !=0 && lose<k){
            point += (lose*2);
        }

        cout<<point<<endl;

    }
    return 0;
}

