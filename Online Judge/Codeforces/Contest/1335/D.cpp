#include<bits/stdc++.h>
using namespace std;


int cnt[10];
int j;

char ch(int x){
    char c = (char) '0' + x;
    return c;
}


bool fun(char ara[]){

    for(int k=1; k<=9; k++){
        if(cnt[k]==0 && ara[j] != ch(k)){
            ara[j] = ch(k);
            cnt[k] = 1;
            j = (j+3)%9;
            //cout<<k<<"  ch: "<<ch(k)<<endl;
            return true;
        }
    }

    return false;
}


void output(char ara[]){
    for(int i=0; i<9; i++){
        cout<<ara[i];
    }
    cout<<endl;
}



int main(){
    int t;
    cin>>t;

    int n;
    char ara1[9];
    char ara2[9];
    char ara3[9];
    char ara4[9];
    char ara5[9];
    char ara6[9];
    char ara7[9];
    char ara8[9];
    char ara9[9];



    while(t--){

        scanf("%s", ara1);
        scanf("%s", ara2);
        scanf("%s", ara3);
        scanf("%s", ara4);
        scanf("%s", ara5);
        scanf("%s", ara6);
        scanf("%s", ara7);
        scanf("%s", ara8);
        scanf("%s", ara9);

        memset(cnt, 0, sizeof(cnt));

         /*cout<<"ajha------------------"<<endl;
        printf("%s\n", ara1);
        printf("%s\n", ara2);
        printf("%s\n", ara3);
        printf("%s\n", ara4);
        printf("%s\n", ara5);
        printf("%s\n", ara6);
        printf("%s\n", ara7);
        printf("%s\n", ara8);
        printf("%s\n", ara9);
        cout<<"ajha------------------------"<<endl;*/



        j=0;
        bool flag;

        flag = fun(ara1);
        flag = fun(ara2);
        flag = fun(ara3);
        j++;
        flag = fun(ara4);
        flag = fun(ara5);
        flag = fun(ara6);
        j++;
        flag = fun(ara7);
        flag = fun(ara8);
        flag = fun(ara9);

        if(flag == false){

            for(int k=1; k<=9; k++){
                if(cnt[k]==0){
                    ara9[j] = ch(k);
                }
            }

            swap(ara9[j], ara8[j-3]);
        }

        //cout<<"ajha------------------"<<endl;
        output(ara1);
        output(ara2);
        output(ara3);
        output(ara4);
        output(ara5);
        output(ara6);
        output(ara7);
        output(ara8);
        output(ara9);
        //cout<<"ajha------------------------"<<endl;

    }
    return 0;
}

