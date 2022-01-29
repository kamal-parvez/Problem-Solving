#include<bits/stdc++.h>
using namespace std;

/*struct node{
    int num;
    int ty;
};

bool comparator(node a, node b){

        return a.num < b.num;

}*/

int ara[501];
int tara[501];
int n;



int main(){
    int t;
    cin>>t;

    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        int f1 = 0, f2 = 0;

        for(int i=0; i<n; i++){
            cin>>tara[i];
            if(tara[i] == 0)
                f1 = 1;
            else
                f2 = 1;
        }


        int flag = 0;

        /*for(int i=0; i<n; i++){
            //printf("%d  ", temp[i].num);
            if(ara[i] != temp[i].num){
                if(tara[i] == temp[i].ty){
                    flag = 1;
                }
            }
        }*/
        if(f1 == 1 && f2 == 1){
            printf("Yes\n");
        }
        else{
            for(int i=0; i<n-1; i++){
                if(ara[i] > ara[i+1]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }
    return 0;
}

