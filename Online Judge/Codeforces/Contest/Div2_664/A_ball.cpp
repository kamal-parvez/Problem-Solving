#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int r, g, b, w;

    while(t--){
        cin>>r>>g>>b>>w;
        int tot = r + g+ b + w;
        if(tot%2==0){
            if(r%2==0 && g%2==0 && b%2==0 && w%2==0){
                printf("Yes\n");
            }
            else if(r%2==1 && g%2==1 && b%2==1 && w%2==1){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        else{
            int vb =0;
            if(r%2==0)vb++;
            if(g%2==0)vb++;
            if(b%2==0)vb++;
            if(w%2==0)vb++;

            if(vb==3){
                printf("Yes\n");
            }
            else if(vb==1 && r>=1 && b>=1 && g>=1){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
    return 0;
}
