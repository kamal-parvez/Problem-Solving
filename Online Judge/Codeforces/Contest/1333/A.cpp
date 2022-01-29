#include<iostream>
using namespace std;


int main(){
     int t;
     cin>>t;
     while(t--){
        int n, m;
        cin>>n>>m;

        int flag = 0, temp = 0;
        if((n*m)%2==0){
            temp = 1;
        }
        if(n%2==0 && m%2==0){
            temp = 2;
        }
        for(int i=0; i<n; i++){

            if(i%2==0){
                flag = 0;
            }
            else{
                flag = 1;
            }

            for(int j=0; j<m; j++){
                if(flag==0){
                    cout<<'B';
                    flag = 1;
                }
                else if(flag == 1 && i==n-1 && j==m-1 && temp != 0){
                     cout<<'B';
                }
                else if(flag == 1 && i==n-1 && j==m-2 && temp == 2){
                     cout<<'B';
                }
                else{
                    cout<<'W';
                    flag=0;
                }

            }
            cout<<endl;

        }

     }
     return 0;
}
