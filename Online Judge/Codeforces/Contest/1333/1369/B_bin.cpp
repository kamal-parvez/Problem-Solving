#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int n;
    char str[100000];
    string st;
    string en;
    string mid;

    while(t--){
        cin>>n;
        cin>>str;

        st = "";
        en = "";
        mid = "";
        int a = -1, b = -1;

        for(int i=0; i<n; i++){
            if(str[i] == '0'){
                st += str[i];
            }
            else{
                a = i;
                break;
            }
        }

        for(int i=n-1; i>0; i--){
            if(str[i] == '1'){
                en += str[i];
            }
            else{
                b = i;
                break;
            }
        }
        //printf("a: %d   b: %d\n", a, b);
        if(a>b || (a==0 && b==-1) || (a==-1 && b==n-1)){
            cout<<str<<endl;
        }
        else{
            st = st + "0" + en;
            cout<<st<<endl;
        }


    }
    return 0;
}

