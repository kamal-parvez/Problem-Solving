#include<bits/stdc++.h>
using namespace std;

int piles[] = {312884470}, h = 312884469;
int n = 1;



int getTime(int speed){
    int time = 0;
    int temp;

    for(int i=0; i<n; i++){
        temp = (int) ceil(piles[i]/(speed*1.0));
        //printf("piles: %d   timeee : %d\n", piles[i], temp);
        time += temp;

    }
    return time;
}


int minEatingSpeed(){
    int hi = 1000000000, low = 1, mid;
    int speed = 0, time;

    while(low <= hi){
        mid = (hi + low) / 2;
        time = getTime(mid);

        printf("low : %d   mid: %d   hi: %d   time : %d\n", low, mid, hi, time);

        if(time <= h){
            speed = mid;
            printf("speed : %d  time : %d   h: %d\n", speed, time , h);
            hi = mid - 1;
        }
        else if(time > h){
            low = mid + 1;
        }
    }

    return speed;
}


int main(){
    for(int i=0; i<4; i++){
        cout<<piles[i]<<endl;
    }

    //if(piles.length == h){
    //   printf()
//}
    printf("Speed : %d\n", minEatingSpeed());
}
