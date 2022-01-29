#include<bits/stdc++.h>
using namespace std;


int bin_to_dec(string str, int i, int l){
    if(i == l)
        return 0;
    //if(str[i] == '1')
        return (str[i] - '0') * pow(2, l-i-1) + bin_to_dec(str, i+1, l);
    //else
       // return bin_to_dec(str, i+1, l);
}

int main(){
    string str;
    cin>>str;

    cout<<bin_to_dec(str, 0, str.size());

    return 0;
}
