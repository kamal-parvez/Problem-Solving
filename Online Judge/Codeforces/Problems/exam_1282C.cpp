/*#include<bits/stdc++.h>
using namespace std;


struct greedy{
    int val;
    int det_time;

    bool operator<(const greedy &ob)const{
        return det_time<ob.det_time;
    }
};


int main(){
    //  freopen("test.txt", "r", stdin);
    int test_case;
    int n, t, a, b;
    greedy ara[200000];

    cin>>test_case;

    for(int i=0; i<test_case; i++){

        //input
        scanf("%d %d %d %d", &n, &t, &a, &b);
        int x;
        int cnt_easy =0;
        for(int j=0; j<n; j++){
            scanf("%d", &x);
            if(x == 0) {
                ara[j].val = a;
                cnt_easy++;
            }
            else ara[j].val = b;
        }

        for(int j=0; j<n; j++){
            scanf("%d", &ara[j].det_time);
        }

        sort(ara, ara+n);

        for(int j=0; j<n; j++){
            printf("%d ", ara[j].det_time);
        }
        cout<<endl;

        int cnt = 0, y =0;
        int qu = 1;
        int time = 0;
        int xm = 0, next = ara[0].det_time;


        for(int j=0; j<n; j++){
            time += ara[j].val;

            if(ara[j].val == a)y++;

            if(j+1 != n && time > ara[j+1].det_time){
                qu++;
            }
            else  if(j+1 != n && time < ara[j+1].det_time){
                cnt += qu;
                xm = time;
                next = ara[j+1].det_time;
                qu = 1;
                cnt_easy -= y;
                y = 0;
            }
            else if(j+1 == n && time <= t){
                cnt += qu;
                xm = time;
                next = ara[j+1].det_time;
            }
            if(time > t)break;
        }

        x = (next-1-xm)/a;
        if(xm < t && x>0 && x<cnt_easy){
            cnt += x;
        }


        printf("%d\n", cnt);
    }

    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;


struct greedy{
    int val;
    int det_time;

    bool operator<(const greedy &ob)const{
        return det_time<ob.det_time;
    }
};


int main(){
    //  freopen("test.txt", "r", stdin);
    int test_case;
    int n, t, a, b;
    int easy[200000];
    int hard[200000];
    int ara[200000];

    cin>>test_case;

    for(int i=0; i<test_case; i++){

        //input
        scanf("%d %d %d %d", &n, &t, &a, &b);
        for(int j=0; j<n; j++){
            scanf("%d", &ara[j]);
        }

        int x;
        int cnt_easy = 0;
        int cnt_hard = 0;
        for(int j=0; j<n; j++){
            scanf("%d", &x);
            if(ara[j] == 0){
                easy[cnt_easy] = x;
                cnt_easy++;
            }
            else{
                hard[cnt_hard] = x;
                cnt_hard++;
            }
        }

        sort(easy, easy+cnt_easy);
        sort(hard, hard+cnt_hard);

        for(int j=0; j<cnt_easy; j++){
            printf("%d ", easy[j]);
        }
        cout<<endl;
        for(int j=0; j<cnt_hard; j++){
            printf("%d ", hard[j]);
        }
        cout<<endl;

        int cnt = 0, y =0;
        int qu = 1;
        int time = 0;
        int xm = 0, next = ara[0].det_time;


        for(int j=0; j<n; j++){
            time += ara[j].val;

            if(ara[j].val == a)y++;

            if(j+1 != n && time > ara[j+1].det_time){
                qu++;
            }
            else  if(j+1 != n && time < ara[j+1].det_time){
                cnt += qu;
                xm = time;
                next = ara[j+1].det_time;
                qu = 1;
                cnt_easy -= y;
                y = 0;
            }
            else if(j+1 == n && time <= t){
                cnt += qu;
                xm = time;
                next = ara[j+1].det_time;
            }
            if(time > t)break;
        }

        x = (next-1-xm)/a;
        if(xm < t && x>0 && x<cnt_easy){
            cnt += x;
        }


        printf("%d\n", cnt);
    }

    return 0;
}

