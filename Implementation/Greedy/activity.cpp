#include<bits/stdc++.h>
using namespace std;

struct greedy{
    int finish;
    int start;
    int in;

    bool operator<(const greedy &ob)const{
        return finish<ob.finish;
    }
};


int main(){
    //freopen("activity.txt","r",stdin);
    int n;
    cin>>n;
    greedy gr[1000];

    for(int i=0;i<n;i++){
        cin>>gr[i].start>>gr[i].finish;
        gr[i].in=i;
    }

    sort(gr,gr+n);
    set<greedy>st;

    st.insert(gr[0]);

    int j=0;

    for(int i=1;i<n;i++){
        if(gr[i].start>=gr[j].finish){
            st.insert(gr[i]);
            j=i;
        }
    }

    set<greedy> :: iterator it;

    cout<<"Total work done = "<<st.size()<<endl;
    cout<<"The index of the work **"<<endl;

    for(it=st.begin();it!=st.end();it++){
        cout<<it->in<<endl;
    }

    return 0;
}
