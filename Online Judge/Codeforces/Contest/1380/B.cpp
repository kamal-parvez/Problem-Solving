#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    char str[200001];

    while(t--){
        cin>>str;

        int l = strlen(str);

        for(int i=0; i<l; i++){
            if(str[i] == 'R'){
                printf("P");
            }
            else if(str[i] == 'P'){
                printf("S");
            }
            else if(str[i] == 'S'){
                printf("R");
            }
        }
        cout<<endl;
    }
    return 0;
}

