#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    int a, b, c, d, n;

    while(t--){
        cin>>n>>a>>b>>c>>d;

        int temp;
        int flag = 0;

        int x = n*(a-b);
        int y = n*(a+b);

        if(y<c-d || x>c+d){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }

        /*for(int i=a-b; i<=a+b; i++){
            temp = i*n;

            if(temp >= c-d && temp<= c+d){
                flag = 1;
                break;
            }
        }

        if(flag == 1)
            printf("Yes\n");
        else
            printf("No\n");*/

    }
    return 0;
}
