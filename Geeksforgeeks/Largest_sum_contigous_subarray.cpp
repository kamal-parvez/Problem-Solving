#include<bits/stdc++.h>
using namespace std;

//this is kadane's algorithm


int st_pos = -1;
int end_pos = -1;


int max_sum_subarray(int ara[], int n){
    int max_so_far = 0;
    int ending = 0;

    ending = ara[0];
    st_pos = 0;
    end_pos = 0;

    for(int i=1; i<n; i++){
        ending += ara[i];

        if(ending < 0){
            ending = 0;
            st_pos = i+1;
        }
        if(ending > max_so_far){
            max_so_far = ending;
            end_pos = i;
        }
    }
    return max_so_far;
}


int main(){
    int ara[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 8;

    int res = max_sum_subarray(ara, n);
    printf("The maximum sum is : %d\n", res);

    for(int i=st_pos; i<=end_pos; i++){
        printf("%d  ", ara[i]);
    }
    cout<<endl;

    return 0;
}
