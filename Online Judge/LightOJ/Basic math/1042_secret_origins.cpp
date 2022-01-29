#include<bits/stdc++.h>
using namespace std;

int n, l;
int str[40];

void out(){
    for(int i=0; i<40; i++){
        cout<<str[i]<<"  ";
    }
    cout<<endl;
}


void make_bin(){
    int i=39;
    while(n){
        str[i] = n % 2;
        n = n/2;
        i--;
    }
    l = i;
    //out();
}

int next(){
    int temp;
    for(int i=39; i>=l; i--){
        if(str[i] == 1 && str[i-1] == 0){
            swap(str[i], str[i-1]);
            temp = i;
            break;
        }
    }

    int num = 0;
    int x = 1;
    for(int i=39; i>=temp; i--){
        if(str[i] == 1){
            num += x;
            x *= 2;
        }
    }

    //out();

    x = pow(2, 39-temp);

    for(int i=temp; i>=l; i--){
        num += (str[i] * x);
        x *= 2;
    }

    return num;
}


int main(){
    int t;
    scanf("%d", &t);



    for(int i=1; i<=t; i++){
        cin>>n;

        memset(str, 0, sizeof(str));
        make_bin();
        printf("Case %d: %d\n", i, next());

    }
    return 0;
}


