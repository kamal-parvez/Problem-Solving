#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void fun(int x, char c){
    for(int i=1; i<=x; i++){
        printf("%c", c);
    }
}


int main(){
    long long int k;
    cin>>k;

    int ara[11];
    memset(ara, 0, sizeof(ara));

    double temp = log(k*1.0);
    //cout<<temp<<endl;
    temp /=  10;
    //cout<<temp<<endl;

    temp =  exp(temp);
    //cout<<temp<<endl;

    int x = (int)floor(temp);
    long long int ami = 1;
    for(int j=1; j<=10; j++){
        ara[j] += x;
        ami *= x;
    }

    k -= pow(x, 10);
    //cout<<"k1 : "<<k<<endl;

    for(int i=10; i>=1; i--){
        if(k<=0)
            break;

        ara[i]++;

        ami = 1;
       for(int j=1; j<=10; j++){
            if(i==j)
                continue;
            ami *= ara[j];
       }
       k -= ami;

       //cout<<"k3 : "<<k<<endl;
       //cout<<"ami  : "<<ami<<endl;

    }



    char str[12];
    strcpy(str, "codeforces");
    //cout<<"nnn  :"<<str<<endl;

    for(int i=0; i<10; i++){
        fun(ara[i+1], str[i]);
    }


    cout<<endl;
    return 0;
}

