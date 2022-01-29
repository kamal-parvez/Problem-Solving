#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int ara[103];
    while(t){
        int n;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>ara[i];
        }

        int even = -1;
        for(int i=1; i<=n; i++){
            if(ara[i] % 2 == 0){
                even = i;
                break;
            }
        }
        if(even != -1){
            cout<<1<<endl;
            cout<<even<<endl;
        }
        else if(even == -1 && n == 1){
            cout<<-1<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }

        t--;
    }
    return 0;
}
