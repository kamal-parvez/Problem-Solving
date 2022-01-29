#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    int ara[200001];
    int got[200001];

    memset(got, 0, sizeof(got));

    cin>>n;
    for(int i=1; i<=n; i++){
        scanf("%d", &ara[i]);
        got[ara[i]] = 1;
    }

    stack <int> pai_nai;
    stack <int> dei_nai;

    for(int i=1; i<=n; i++){
        if(got[i] == 0){
           pai_nai.push(i);
        }
        if(ara[i] == 0){
            dei_nai.push(i);
        }
    }

    int mem = pai_nai.top();
    pai_nai.pop();

    int next, dibo;
    int l = dei_nai.size();


    for(int i=0; i<l-2; i++){
        //if(!dei_nai.empty()){
            dibo = dei_nai.top();
            dei_nai.pop();
        //}


        //if(!pai_nai.empty()){
            next = pai_nai.top();
            pai_nai.pop();
        //}


        if(dibo != mem){
            ara[dibo] = mem;
            mem = next;
        }
        else{
            ara[dibo] = next;
        }
    }

    next = pai_nai.top();
    pai_nai.pop();

    dibo = dei_nai.top();
    dei_nai.pop();
    int dibo2 = dei_nai.top();
    dei_nai.pop();

    if(dibo != mem && dibo2 != next){
        ara[dibo] = mem;
        ara[dibo2] = next;
    }
    else{
        ara[dibo2] = mem;
        ara[dibo] = next;
    }



    for(int i=1; i<=n; i++){
        printf("%d", ara[i]);
        if(i == n)
            printf("\n");
        else
            printf(" ");
    }

    return 0;

}
