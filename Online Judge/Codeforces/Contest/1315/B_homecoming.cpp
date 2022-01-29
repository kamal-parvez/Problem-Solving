#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t){

        int a, b, p;
        string str;
        cin>>a>>b>>p;
        cin>>str;

        int cost = 0;

        int l = str.size();
        for(int i=0; i<l-1;){
            if(str[i] == 'A' && i!= l-1){
                while(str[i] == 'A'){
                    i++;
                }
                cost += a;
            }
            else if(str[i] == 'B' && i!= l-1){
                while(str[i] == 'B'){
                    i++;
                }
                cost += b;
            }
        }
        //cout<<"Cost: "<<cost<<endl;

        int i;

        for(i=0; cost>p;){
            if(str[i] == 'A' && i!= l-1 && cost>p){
                while(str[i] == 'A'){
                    i++;
                }
                cost -= a;
            }
            else if(str[i] == 'B' && i!= l-1 && cost>p){
                while(str[i] == 'B'){
                    i++;
                }
                cost -= b;
            }
        }
        if(i == l)
            cout<<i<<endl;
        else
            cout<<i+1<<endl;





        t--;
    }
    return 0;
}

