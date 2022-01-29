#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    scanf("%d", &n);
    int ara[50000];

    for(int i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }

    int q;
    cin>>q;

    while(q){
        int lu;
        scanf("%d", &lu);

        int lo, mid, hi;
        lo = 0;
        hi = n-1;

        int lowest = -1;
        int highest = -1;

        while(lo<=hi){
            mid = (lo + hi)/2;
            //cout<<"Mid : "<<mid<<endl;
            if(lu > ara[mid] && mid==n-1){
                lowest = ara[mid];
                break;
            }
            else if(lu > ara[mid] && lu <= ara[mid+1]){
                lowest = ara[mid];
                break;
            }
            else if(lu > ara[mid]){
                lo = mid + 1;
            }
            else if(lu <= ara[mid]){
                hi = mid -1;
            }
        }


        lo = 0;
        hi = n-1;

        while(lo<=hi){
            mid = (lo + hi)/2;
            //cout<<"Mid : "<<mid<<endl;

            if(lu < ara[mid] && mid==0){
                highest = ara[mid];
                break;
            }
            else if(lu < ara[mid] && lu >= ara[mid-1]){
                highest = ara[mid];
                break;
            }
            else if(lu < ara[mid]){
                hi = mid-1;
            }
            else if(lu >= ara[mid]){
                lo = mid+1;
            }
        }

        if(lowest != -1){
            cout<<lowest<<" ";
        }
        else{
            cout<<"X ";
        }

        if(highest != -1)
            cout<<highest<<endl;
        else
            cout<<"X"<<endl;


        q--;
    }
    return 0;
}
