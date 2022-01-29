#include<bits/stdc++.h>
using namespace std;

int arr[] = {0,3,2,1};



bool validMountainArray() {

    int n = 4;

    //find pick value
    int pick_value = -1;
    int pick_index = -1;

    for(int i=0; i<n; i++){
        if(pick_value < arr[i]){
            pick_value = arr[i];
            pick_index = i;
        }
    }

    if(pick_index == 0 || pick_index == n-1){
        return false;
    }

    printf("pick value : %d  pick in: %d\n", pick_value, pick_index);

    //Check left side
    for(int i=pick_index; i>0; i--){
        if(arr[i-1]>=arr[i]){
            return false;
        }
    }
    //printf("left pass\n");
    //Check right side
    for(int i=pick_index; i<n-1; i++){
        if(arr[i+1] >= arr[i]){
            return false;
        }
    }

    return true;
}


int main(){
    cout<<validMountainArray()<<endl;
}
