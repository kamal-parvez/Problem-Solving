#include<bits/stdc++.h>
using namespace std;

void print_ara(int ara[], int l){
    for(int i=1; i<=l; i++){
        cout<<ara[i]<<" ";
    }
    cout<<endl;
}

bool is_dearr(int ara[], int l){
    for(int i=1; i<=l; i++){
        if(ara[i] == i)
            return false;
    }
    return true;
}


void dearrangment(int ara[], int i, int l){
    if(i > l){
        if(is_dearr(ara, l))
            print_ara(ara, l);
        return;
    }

    for(int j=i; j<=l; j++){

        swap(ara[i], ara[j]);
        dearrangment(ara, i+1, l);
        swap(ara[i], ara[j]);
    }

}




int main(){
    int n;
    cin>>n;

    int ara[10];

    for(int i=1; i<=n; i++){
        ara[i] = i;
    }

    dearrangment(ara, 1, n);

    return 0;
}
