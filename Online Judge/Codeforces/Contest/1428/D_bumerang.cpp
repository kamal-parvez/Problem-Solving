#include<bits/stdc++.h>
using namespace std;



struct target{
    int row;
    int col;
};

int ara[100002];
int n;
target res[200006];
int res_in;
int row_cnt[100002];
int col_cnt[100002];
queue<int> qu_1;
queue<int> qu_23;


void set_target(int r, int c){
    res[res_in].row = r;
    res[res_in].col = c;
    col_cnt[c]++;
    row_cnt[r]++;
    res_in++;
    //printf("res_row: %d    res_col: %d\n", r, c);
}



bool hit1(int index){

    if(col_cnt[index]>0){
        return true;
    }
    set_target(index, index);
    qu_1.pop();
    return true;
}


bool hit2(int index){

    if(col_cnt[index]==0){
        set_target(index, index);
        qu_23.pop();
    }

    if(!qu_1.empty()){
        int temp = qu_1.front();
        qu_1.pop();
        //printf("qu1: %d\n", temp);
        set_target(index, temp);
        return true;
    }
    return false;
}


bool hit3(int index){

    if(col_cnt[index]==0){
        set_target(index, index);
        qu_23.pop();
    }

    if(!qu_23.empty()){
        int temp = qu_23.front();
        qu_23.pop();
        //printf("qu23: %d\n", temp);
        set_target(index, temp);
        set_target(temp, temp);
        return true;
    }
    else if(!qu_1.empty()){
        int temp = qu_1.front();
        qu_1.pop();
        //printf("qu1: %d\n", temp);
        set_target(index, temp);
        set_target(temp, temp);
        return true;
    }

    return false;
}


int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>ara[i];
        if(ara[i] == 1){
            qu_1.push(i);
        }
        else if(ara[i] ==2 || ara[i]==3){
            qu_23.push(i);
        }
    }

    bool flag = true;

    for(int i=1; i<=n; i++){
        if(ara[i] == 0){
            continue;
        }

        else if(ara[i] == 1){
            flag = hit1(i);
        }
        else if(ara[i] == 2){
            flag = hit2(i);
        }
        else if(ara[i] == 3){
            flag = hit3(i);
        }

        //printf("flag: ");
        //cout<<flag<<endl;

        if(flag== false)
            break;
    }

    //printf("fsdf : %d\n", res_in);

    if(flag==false){
        cout<<-1<<endl;
    }
    else{
        cout<<res_in<<endl;
        for(int i=0; i<res_in; i++){
            printf("%d %d\n", res[i].row, res[i].col);
        }
    }


    return 0;
}
