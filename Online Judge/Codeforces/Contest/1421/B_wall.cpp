#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int n;
    string str[202];

    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>str[i];
        }

        /*for(int i=0; i<n; i++){
            cout<<str[i]<<endl;
        }*/
        int k;

        if(str[0][1]=='0' && str[1][0]=='0' && str[n-1][n-2]=='0' && str[n-2][n-1]=='0'){
            cout<<2<<endl;
            printf("1 2\n");
            printf("2 1\n");
        }
        else if(str[0][1]=='0' && str[1][0]=='0' && str[n-1][n-2]=='0' && str[n-2][n-1]=='1'){
            cout<<1<<endl;
            k= n-1;
            printf("%d %d\n", n, k);
        }
        else if(str[0][1]=='0' && str[1][0]=='0' && str[n-1][n-2]=='1' && str[n-2][n-1]=='0'){
            cout<<1<<endl;
            k= n-1;
            printf("%d %d\n", k, n);
        }

        else if(str[0][1]=='0' && str[1][0]=='0' && str[n-1][n-2]=='1' && str[n-2][n-1]=='1'){
            cout<<0<<endl;
        }





        else if(str[0][1]=='0' && str[1][0]=='1' && str[n-1][n-2]=='0' && str[n-2][n-1]=='0'){
            cout<<1<<endl;
            printf("1 2\n");
        }
        else if(str[0][1]=='0' && str[1][0]=='1' && str[n-1][n-2]=='0' && str[n-2][n-1]=='1'){
            cout<<2<<endl;
            printf("1 2\n");
            k= n-1;
            printf("%d %d\n", k, n);
        }
        else if(str[0][1]=='0' && str[1][0]=='1' && str[n-1][n-2]=='1' && str[n-2][n-1]=='0'){
            cout<<2<<endl;
            printf("1 2\n");
            k= n-1;
            printf("%d %d\n", n, k);
        }
        else if(str[0][1]=='0' && str[1][0]=='1' && str[n-1][n-2]=='1' && str[n-2][n-1]=='1'){
            cout<<1<<endl;
            printf("2 1\n");
        }



        else if(str[0][1]=='1' && str[1][0]=='0' && str[n-1][n-2]=='0' && str[n-2][n-1]=='0'){
            cout<<1<<endl;
            printf("2 1\n");
        }
        else if(str[0][1]=='1' && str[1][0]=='0' && str[n-1][n-2]=='0' && str[n-2][n-1]=='1'){
            cout<<2<<endl;
            printf("1 2\n");
            k= n-1;
            printf("%d %d\n", n, k);
        }
        else if(str[0][1]=='1' && str[1][0]=='0' && str[n-1][n-2]=='1' && str[n-2][n-1]=='0'){
            cout<<2<<endl;
            printf("1 2\n");
            k= n-1;
            printf("%d %d\n", k, n);
        }
        else if(str[0][1]=='1' && str[1][0]=='0' && str[n-1][n-2]=='1' && str[n-2][n-1]=='1'){
            cout<<1<<endl;
            printf("1 2\n");
        }



        if(str[0][1]=='1' && str[1][0]=='1' && str[n-1][n-2]=='0' && str[n-2][n-1]=='0'){
            cout<<0<<endl;
        }
        else if(str[0][1]=='1' && str[1][0]=='1' && str[n-1][n-2]=='0' && str[n-2][n-1]=='1'){
            cout<<1<<endl;
            k= n-1;
            printf("%d %d\n", k, n);
        }
        else if(str[0][1]=='1' && str[1][0]=='1' && str[n-1][n-2]=='1' && str[n-2][n-1]=='0'){
            cout<<1<<endl;
            k= n-1;
            printf("%d %d\n", n, k);
        }

        else if(str[0][1]=='1' && str[1][0]=='1' && str[n-1][n-2]=='1' && str[n-2][n-1]=='1'){
            cout<<2<<endl;
            printf("1 2\n");
            printf("2 1\n");
        }

    }
    return 0;
}


