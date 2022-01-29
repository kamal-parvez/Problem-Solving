#include<bits/stdc++.h>
using namespace std;

//Time Complexity: O(Nlog(M)) , where N is the size of the array and M is the maximum number present in the array
//Auxiliary Space: O(logM)


int maxXOR(int ara[], int n){
    int mask = 0;
    int mx = 0;
    set <int> st;

    for(int i=30; i>=0; i--){
        mask |= (1 << i);
        printf("i: %d    mask: %d\n", i, mask);

        for(int i=0; i<n; i++){
            st.insert(mask & ara[i]);
            printf("mask: %d    ara[i]: %d   mask & ara[i] : %d\n", mask, ara[i], mask & ara[i]);
        }

        int temp = mx | (1 << i);
        printf("temp: %d\n", temp);

        for(int prefix : st){
            printf("prefix : %d    prefix ^ temp: %d\n", prefix, prefix ^ temp);
            if(st.count(prefix ^ temp)){
                mx = temp;
                break;
            }
        }

        st.clear();
    }

    return mx;
}


int main(){
    int ara[] = {25, 10, 2, 8, 5, 3};
    int n = sizeof(ara) / sizeof(ara[0]);

    cout<<"Max Xor : "<<maxXOR(ara, n)<<endl;
}
