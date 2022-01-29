#include<bits/stdc++.h>
using namespace std;

char str[1001];
int n;
int cnt1, cnt2, cnt3;
int sum;

void get_cnt(){
    for(int i=0; i<n; i++){
        if(str[i] == '1' || str[i] == '4' || str[i] == '7')
            cnt1++;
        else if(str[i] == '2' || str[i] == '5' || str[i] == '8')
            cnt2++;
        else
            cnt3++;

        sum += (int)(str[i] - '0');
    }
}



int game(){

    if(n == 0)
        return 0;

    if(sum%3 == 0){
        if(cnt3%2 == 1)
            return 1;
        else
            return 0;
    }
    else if(sum%3 == 1){
        if(cnt1>0 && cnt3%2==0)
            return 1;
        else
            return 0;
    }
    else if(sum%3 == 2){
        if(cnt2>0 && cnt3%2==0)
            return 1;
        else
            return 0;
    }
}



int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        //memset(str, '-1', sizeof(str));
        scanf("%s", str);
        //printf("%s\n", str);
        n = strlen(str);
        //printf("%d\n", get_sum());

        //int flag;
        cnt1 = 0;
        cnt2 = 0;
        cnt3 = 0;
        sum = 0;
        get_cnt();

        //printf("n=%d  1=%d   2=%d   3=%d   sum=%d\n", n, cnt1, cnt2, cnt3, sum);

        int flag = game();

        if(flag == 1){
            printf("Case %d: S\n", i);
        }
        else{
            printf("Case %d: T\n", i);
        }
    }
    return 0;
}
