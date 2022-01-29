#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b)? a : b; }

// A utility funtion to find maximum of three integers
int max(int a, int b, int c) { return max(max(a, b), c); }


int crossing_subarray(int ara[], int l, int mid, int h){
    int sum = 0;
    int left_mx = INT_MIN;

    for(int i=mid; i>=l; i--){
        sum += ara[i];
        if(sum>left_mx)
            left_mx = sum;
    }

    sum = 0;
    int right_sum = INT_MIN;

    for(int i=mid+1; i<=h; i++){
        sum += ara[i];
        if(sum>right_sum)
            right_sum = sum;
    }

    return max(left_mx, right_sum, left_mx+right_sum);
}


int subarray_max(int ara[], int l, int h){
    if(l == h){
        return ara[l];
    }

    int mid = (l+h)/2;

    int a = subarray_max(ara, l, mid);
    int b = subarray_max(ara, mid+1, h);
    int c = crossing_subarray(ara, l, mid, h);

    return max(a,b,c);
}

int main(){
    int ara[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 8;

    int res = subarray_max(ara, 0, n-1);
    printf("The maximum sum is : %d\n", res);

    return 0;
}

