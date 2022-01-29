#include<bits/stdc++.h>
using namespace std;


int n, k;
int ara[200001];
int pos[200001];
int res[200000][3];
int cnt;
int flag;



void fun_swap(int a, int b, int c){

    int t1, t2;

    t1 = ara[a];
    t2 = ara[b];

    ara[a] = ara[c];
    pos[ara[c]] = a;

    ara[b] = t1;
    pos[t1] = b;

    ara[c] = t2;
    pos[t2] = c;

    res[cnt][0] = a;
    res[cnt][1] = b;
    res[cnt][2] = c;
    cnt++;
    if(cnt>k)
        flag = 1;
}



void special(int a, int b){
    int t1;

    t1 = b+1;
    while(t1<n && ara[t1] == t1){
        t1++;
    }
    if(ara[t1] == t1){
        flag = 1;
        return;
    }

   fun_swap(a, b, t1);
   fun_swap(a, b, t1);

}




int main(){
    int t;
    cin>>t;



    while(t--){
        cin>>n>>k;
        for(int i=1; i<=n; i++){
            cin>>ara[i];
            pos[ara[i]] = i;
        }

        int t1, t2, t3, t4, t5;
        cnt = 0;
        flag = 0;

        for(int i=1; i<=n-2;){
            //cout<<"koi"<<endl;
            if(pos[i] == i){
                i++;
                continue;
            }

            if(pos[i]-i == 1){
                special(i, i+1);
                i++;
                if(flag == 1)
                    break;
            }
            else{
                t1 = pos[i];
                t2 = i+1;
                while(ara[t2] == t2){
                    t2++;
                }

                if(t2<t1){
                    fun_swap(i, t2, t1);
                    i = t2;
                }
                else if(t2 == t1){
                    special(i, t1);
                    i = t1;
                    if(flag == 1)
                        break;
                }
            }

            if(cnt>=k)
                break;
            //printf("%d %d %d\n", i, i+1, temp1);
        }


        int flag1 = 0;

        for(int i=1; i<=n; i++){
            if(ara[i] != i){
                flag1 = 1;
                break;
            }
        }

        if(flag==1 || flag1 == 1){
            printf("-1\n");
        }
        else{
            printf("%d\n", cnt);
            for(int i=0; i<cnt; i++){
                printf("%d %d %d\n", res[i][0], res[i][1], res[i][2]);
            }
        }



    }
    return 0;
}


