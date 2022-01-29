#include<bits/stdc++.h>
using namespace std;

int gas[] = {2,3,4};
int cost[] = {3,4,3};
int n = 3;


int main(){

    int tank = 0;
    int pos = 0;

    for(int i=0; i<n; i++){
        tank += gas[i];

        if(tank >= cost[i]){
            tank -= cost[i];
        }
        else{
            tank = 0;
            pos = i + 1;
        }
    }

    if(pos == n & tank == 0){
        pos = -1;
        printf("pos : %d . Not reachable\n");
    }
    else{
        for(int i=0; i<pos; i++){
            tank += gas[i];

            if(tank >= cost[i]){
                tank -= cost[i];
            }
            else{
                tank = 0;
                pos = -1;
                break;
            }
        }
    }

    printf("Pos : %d\n", pos);
}
