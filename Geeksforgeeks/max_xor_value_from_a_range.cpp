#include<bits/stdc++.h>
using namespace std;


int maxXor(int L, int R){
    int calXor = L ^ R;
    cout<<calXor<<endl;

    //Total bit in XOR
    int bit = (int) ceil((log(calXor + 1.0)/log(2)) * 1.0);

    return pow(2, bit) - 1;
}

int main(){
    //cout<<log(8)/log(2)<<endl;
    int L, R;
    cin>>L>>R;
    cout<<"Maximum XOR: "<<maxXor(L, R)<<endl;

    return 0;
}
