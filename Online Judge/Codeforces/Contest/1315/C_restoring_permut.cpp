#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int ara[102];
    int res[204];
    int vis[204];

    while(t){

        int n;
        cin>>n;

        for(int i=1; i<=n; i++){
            cin>>ara[i];
        }

        memset(vis, 0, sizeof(vis));
        for(int i=1; i<=n; i++){
            vis[ara[i]] = 1;
            res[2*i-1] = ara[i];
        }

        int flag = 0;

        for(int i=1; i<=n; i++){
            int j = ara[i] + 1;
            while(vis[j] != 0 && j<= 2*n){
                j++;
            }
            if(j<= 2*n){
                res[2*i] = j;
                vis[j] = 1;
            }
            else{
                flag = 1;
                break;
            }
        }
        //cout<<"Ans: ";
        if(flag == 1)
            cout<<-1<<endl;
        else{
            for(int i=1; i<=2*n; i++){
            cout<<res[i];
            if(i != 2*n)
                cout<<" ";
            }
            cout<<endl;
        }


        t--;
    }
    return 0;
}

