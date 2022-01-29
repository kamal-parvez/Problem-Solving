#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    int n;
    int p[101];
    int c[101];
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>p[i]>>c[i];
        }

        int x, y;
        int flag = 1;

        for(int i=0; i<n; i++){
            if(p[i]<c[i]){
                flag = 0;
                break;
            }
            else if(i<n-1 && (p[i+1]<p[i] || c[i+1] < c[i])){
                flag = 0;
                break;
            }
            else if(i<n-1 && p[i+1]-p[i] < c[i+1]-c[i]){
                flag = 0;
                break;
            }

        }

        if(flag == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
