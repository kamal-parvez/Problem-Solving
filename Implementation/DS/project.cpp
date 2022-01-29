#include<bits/stdc++.h>
using namespace std;

int main(){
    int num_of_proj;
    int ara[10000];
    cin>>num_of_proj;

    int total = 0;

    for(int i=0; i<num_of_proj; i++){
        cin>>ara[i];
        total += ara[i];
    }
    int workers;
    cin>>workers;

    int res = (int) ceil((total/(k*1.0)));
    cout<<res<<endl;
    return 0;

}
