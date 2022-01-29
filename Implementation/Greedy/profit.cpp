#include<bits/stdc++.h>
using namespace std;

struct greedy{
    char id;
    int deadline;
    int profit;

    bool operator<(const greedy &ob)const{
        return profit>ob.profit;
    }
};


int main(){

   // freopen("profit.txt","r",stdin);
    int n;
    cin>>n;
    greedy gr[1000];

    for(int i=0;i<n;i++){
        cin>>gr[i].id>>gr[i].deadline>>gr[i].profit;
    }

    sort(gr,gr+n);

    int benefit=0;
   // set<greedy>st;
    //st.push(gr[0]);



    for(int i=0;i<n;i++){
        if(gr[i].deadline>0)
            benefit+=gr[i].profit;
        for(int j=i+1;j<n;j++){
            if(gr[i].deadline==gr[j].deadline){
                gr[j].deadline--;
            }
        }
    }
    cout<<benefit<<endl;

    return 0;
}
