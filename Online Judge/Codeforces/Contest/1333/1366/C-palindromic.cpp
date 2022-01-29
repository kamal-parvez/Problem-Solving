#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int n, m;

    int ara[31][31];

    while(t--){
        cin>>n>>m;
        vector <int> vec[100];

        int res = 0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>ara[i][j];
            }
        }
        int x;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                x = i+j-2;
                vec[x].push_back(ara[i][j]);
            }
        }

        for(int i=n; i>0; i--){
            for(int j=m; j>0; j--){
                x = (n+m-2)-(i+j-2);
                vec[x].push_back(ara[i][j]);
            }
        }

        int c0, c1, y;
        for(int i=0; i<=n+m-2; i++){
            x = vec[i].size();
            //printf("x=%d  ", x);
            c0 = 0;
            c1 = 0;
            if((n+m-2)%2==0 && i==(n+m-2)/2){
                continue;
            }
            for(int j=0; j<x; j++){
                y = vec[i][j];
                if(y == 0){
                    c0++;
                }
                else{
                    c1++;
                }
            }
            //printf("c0=%d   c1=%d\n", c0, c1);

            res += (min(c0, c1));
        }

        cout<<res/2<<endl;

    }
    return 0;
}

