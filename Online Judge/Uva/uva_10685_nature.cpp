#include<bits/stdc++.h>
using namespace std;

struct newType{
    string rep;
    int sz;
};

map <string, newType> par;
int mx = 1;


string findRep(string str){
    if(par[str].rep == str)
        return str;

    par[str].rep = findRep(par[str].rep);

    return par[str].rep;
}

void makeChain(string str1, string str2){
    string rep1 = findRep(str1);
    string rep2 = findRep(str2);

    if(rep1 != rep2){
        par[rep2].sz += par[rep1].sz;
        par[rep1].rep = rep2;
        mx = max(mx, par[rep2].sz);
    }
}



int main(){
    int c, r;
    string str;
    /*while(1){
        cin>>str;
        mp[str] = str;
        cout<<mp[str];
    }*/

    while(scanf("%d %d", &c, &r) && c){
        for(int i=0; i<c; i++){
            cin>>str;
            par[str].rep = str;
            par[str].sz = 1;
        }

        string str1, str2;

        for(int i=0; i<r; i++){
            cin>>str1;
            cin>>str2;

            makeChain(str1, str2);
        }

        cout<<mx<<endl;
    }
    return 0;
}
