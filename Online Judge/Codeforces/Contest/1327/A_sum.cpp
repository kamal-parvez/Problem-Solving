#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    scanf("%d", &t);

    while(t){
        int n, k;
        cin>>n>>k;
        int x = (int) floor(sqrt(n));

        if(n%2 == 0 && (k%2==0 && k<= x)){
            cout<<"YES"<<endl;
        }
        else if(n%2 == 1 && (k%2==1 && k<= x)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}




