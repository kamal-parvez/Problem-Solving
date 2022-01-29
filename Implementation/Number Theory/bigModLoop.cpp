#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int bigMod(int base, int pw, int div){
    int res = 1;

    for(int i = 1; i<=pw; i++){
        res = ((res%div) * (base % div)) % div;
    }

    return res;
}


int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<"remainder: ";
    cout<<bigMod(a,b,c)<<endl;

    return 0;
}

