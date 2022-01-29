#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int ara[]={1,2,3,4,5};
    do{
        cout<<ara[0]<<" "<<ara[1]<<" "<<ara[2]<<" "<<ara[3]<<" "<<ara[4]<<endl;
    }while(next_permutation(ara,ara+5));

    return 0;
}
